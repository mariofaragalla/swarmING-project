#include <mavros_msgs/CommandTOL.h>
#include <mavros_msgs/CommandLong.h>
#include <mavros_msgs/State.h>
#include <mavros_msgs/GlobalPositionTarget.h>
#include <nav_msgs/Odometry.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/TwistStamped.h>
#include <geometry_msgs/Vector3Stamped.h>
#include <geometry_msgs/Vector3.h> 
#include <geometry_msgs/AccelStamped.h>
#include <geometry_msgs/AccelWithCovariance.h>
#include <geographic_msgs/GeoPoseStamped.h>
#include <cmath>
#include <math.h>
#include <ros/ros.h>
#include <std_msgs/Float64.h>
#include <std_msgs/String.h>
#include <mavros_msgs/CommandBool.h>
#include <mavros_msgs/SetMode.h>
#include <mavros_msgs/PositionTarget.h>
#include <unistd.h>
#include <vector>
#include <ros/ros.h>
#include <ros/duration.h>
#include <iostream>
#include <string>
#include <sensor_msgs/NavSatFix.h>


/**
\defgroup control_functions
This module is designed to make high level control programming more simple.
*/
#define GPS_ALT_ERROR 19.5 		//gps altitude error obtained experimentaly 
#define MAX_OUT 1200 			//maxoutput for I controller anti-windup 

mavros_msgs::State current_state_g;
nav_msgs::Odometry current_pose_g;
geometry_msgs::Pose correction_vector_g;
geometry_msgs::Point local_offset_pose_g;
geometry_msgs::PoseStamped waypoint_g;
geometry_msgs::PoseStamped origin;
sensor_msgs::NavSatFix map_origin_gps;
sensor_msgs::NavSatFix gps_position;
geometry_msgs::TwistStamped gps_velocity;

sensor_msgs::NavSatFix gps_data_g ;
geographic_msgs::GeoPoseStamped	target_global_position;

float current_heading_g;
float local_offset_g;
float correction_heading_g = 0;
float local_desired_heading_g; 
float er_integral_x = 0;
float er_integral_y = 0;
// bool isMapOriginSet = false;

ros::Publisher local_pos_pub;
ros::Publisher goal_pos_pub;
ros::Publisher goal_vel_pub;
ros::Publisher accel_pub;
ros::Publisher curr_gpsSens_pub;
ros::Subscriber currentPos;
ros::Subscriber state_sub;
ros::ServiceClient arming_client;
ros::ServiceClient land_client;
ros::ServiceClient set_mode_client;
ros::ServiceClient takeoff_client;
ros::ServiceClient command_client;


ros::Subscriber curr_gps_posData;
ros::Subscriber curr_gps_velData;

std::string ros_namespace;

/**
\ingroup control_functions
This structure is a convenient way to format waypoints
*/
struct gnc_api_waypoint{
	float x; ///< distance in x with respect to your reference frame
	float y; ///< distance in y with respect to your reference frame
	float z; ///< distance in z with respect to your reference frame
	float psi; ///< rotation about the third axis of your reference frame
};

//get armed state
void state_cb(const mavros_msgs::State::ConstPtr& msg)
{
  current_state_g = *msg;
}

geometry_msgs::Point enu_2_local(nav_msgs::Odometry current_pose_enu)
{
  float x = current_pose_enu.pose.pose.position.x;
  float y = current_pose_enu.pose.pose.position.y;
  float z = current_pose_enu.pose.pose.position.z;
  float deg2rad = (M_PI/180);
  geometry_msgs::Point current_pos_local;
  current_pos_local.x = x*cos((local_offset_g - 90)*deg2rad) - y*sin((local_offset_g - 90)*deg2rad);
  current_pos_local.y = x*sin((local_offset_g - 90)*deg2rad) + y*cos((local_offset_g - 90)*deg2rad);
  current_pos_local.z = z;

  return current_pos_local;

  //ROS_INFO("Local position %f %f %f",X, Y, Z);
}
//get current position of drone
void pose_cb(const nav_msgs::Odometry::ConstPtr& msg)
{
  current_pose_g = *msg;
  enu_2_local(current_pose_g);
  float q0 = current_pose_g.pose.pose.orientation.w;
  float q1 = current_pose_g.pose.pose.orientation.x;
  float q2 = current_pose_g.pose.pose.orientation.y;
  float q3 = current_pose_g.pose.pose.orientation.z;
  float psi = atan2((2*(q0*q3 + q1*q2)), (1 - 2*(pow(q2,2) + pow(q3,2))) );
  //ROS_INFO("Current Heading %f ENU", psi*(180/M_PI));
  //Heading is in ENU
  //IS YAWING COUNTERCLOCKWISE POSITIVE?
  current_heading_g = psi*(180/M_PI) - local_offset_g;
  //ROS_INFO("Current Heading %f origin", current_heading_g);
  //ROS_INFO("x: %f y: %f z: %f", current_pose_g.pose.pose.position.x, current_pose_g.pose.pose.position.y, current_pose_g.pose.pose.position.z);
}
geometry_msgs::Point get_current_location()
{
	geometry_msgs::Point current_pos_local;
	current_pos_local = enu_2_local(current_pose_g);
	return current_pos_local;

}
float get_current_heading()
{
	return current_heading_g;
}


//set orientation of the drone (drone should always be level) 
// Heading input should match the ENU coordinate system
/**
\ingroup control_functions
This function is used to specify the drone’s heading in the local reference frame. Psi is a counter clockwise rotation following the drone’s reference frame defined by the x axis through the right side of the drone with the y axis through the front of the drone. 
@returns n/a
*/
void set_heading(float heading)
{
  local_desired_heading_g = heading; 
  heading = heading + correction_heading_g + local_offset_g;
  
  ROS_INFO("Desired Heading %f ", local_desired_heading_g);
  float yaw = heading*(M_PI/180);
  float pitch = 0;
  float roll = 0;

  float cy = cos(yaw * 0.5);
  float sy = sin(yaw * 0.5);
  float cr = cos(roll * 0.5);
  float sr = sin(roll * 0.5);
  float cp = cos(pitch * 0.5);
  float sp = sin(pitch * 0.5);

  float qw = cy * cr * cp + sy * sr * sp;
  float qx = cy * sr * cp - sy * cr * sp;
  float qy = cy * cr * sp + sy * sr * cp;
  float qz = sy * cr * cp - cy * sr * sp;

  waypoint_g.pose.orientation.w = qw;
  waypoint_g.pose.orientation.x = qx;
  waypoint_g.pose.orientation.y = qy;
  waypoint_g.pose.orientation.z = qz;
}
// set position to fly to in the local frame
/**
\ingroup control_functions
This function is used to command the drone to fly to a waypoint. These waypoints should be specified in the local reference frame. This is typically defined from the location the drone is launched. Psi is counter clockwise rotation following the drone’s reference frame defined by the x axis through the right side of the drone with the y axis through the front of the drone. 
@returns n/a
*/
void set_destination(float x, float y, float z, float psi)
{
	set_heading(psi);
	//transform map to local
	float deg2rad = (M_PI/180);
	float Xlocal = x*cos((correction_heading_g + local_offset_g - 90)*deg2rad) - y*sin((correction_heading_g + local_offset_g - 90)*deg2rad);
	float Ylocal = x*sin((correction_heading_g + local_offset_g - 90)*deg2rad) + y*cos((correction_heading_g + local_offset_g - 90)*deg2rad);
	float Zlocal = z;

	x = Xlocal + correction_vector_g.position.x + local_offset_pose_g.x;
	y = Ylocal + correction_vector_g.position.y + local_offset_pose_g.y;
	z = Zlocal + correction_vector_g.position.z + local_offset_pose_g.z;
	ROS_INFO("Destination set to x: %f y: %f z: %f origin frame", x, y, z);

	waypoint_g.pose.position.x = x;
	waypoint_g.pose.position.y = y;
	waypoint_g.pose.position.z = z;

	local_pos_pub.publish(waypoint_g);
	
}
/**
\ingroup control_functions
Wait for connect is a function that will hold the program until communication with the FCU is established.
@returns 0 - connected to fcu 
@returns -1 - failed to connect to drone
*/
int wait4connect()
{
	ROS_INFO("Waiting for FCU connection");
	// wait for FCU connection
	while (ros::ok() && !current_state_g.connected)
	{
		ros::spinOnce();
		ros::Duration(0.01).sleep();
	}
	if(current_state_g.connected)
	{
		ROS_INFO("Connected to FCU");	
		return 0;
	}else{
		ROS_INFO("Error connecting to drone");
		return -1;	
	}
	
	
}
/**
\ingroup control_functions
Wait for strat will hold the program until the user signals the FCU to enther mode guided. This is typically done from a switch on the safety pilot’s remote or from the ground control station.
@returns 0 - mission started
@returns -1 - failed to start mission
*/
int wait4start()
{
	ROS_INFO("Waiting for user to set mode to GUIDED");
	while(ros::ok() && current_state_g.mode != "GUIDED")
	{
	    ros::spinOnce();
	    ros::Duration(0.01).sleep();
  	}
  	if(current_state_g.mode == "GUIDED")
	{
		ROS_INFO("Mode set to GUIDED. Mission starting");
		return 0;
	}else{
		ROS_INFO("Error starting mission!!");
		return -1;	
	}
}
/**
\ingroup control_functions
This function will create a local reference frame based on the starting location of the drone. This is typically done right before takeoff. This reference frame is what all of the the set destination commands will be in reference to.
@returns 0 - frame initialized
*/
int initialize_local_frame()
{
	//set the orientation of the local reference frame
	ROS_INFO("Initializing local coordinate system");
	local_offset_g = 0;
	for (int i = 1; i <= 30; i++) {
		ros::spinOnce();
		ros::Duration(0.1).sleep();

		

		float q0 = current_pose_g.pose.pose.orientation.w;
		float q1 = current_pose_g.pose.pose.orientation.x;
		float q2 = current_pose_g.pose.pose.orientation.y;
		float q3 = current_pose_g.pose.pose.orientation.z;
		float psi = atan2((2*(q0*q3 + q1*q2)), (1 - 2*(pow(q2,2) + pow(q3,2))) ); // yaw

		local_offset_g += psi*(180/M_PI);

		local_offset_pose_g.x = local_offset_pose_g.x + current_pose_g.pose.pose.position.x;
		local_offset_pose_g.y = local_offset_pose_g.y + current_pose_g.pose.pose.position.y;
		local_offset_pose_g.z = local_offset_pose_g.z + current_pose_g.pose.pose.position.z;
		// ROS_INFO("current heading%d: %f", i, local_offset_g/i);
	}
	local_offset_pose_g.x = local_offset_pose_g.x/30;
	local_offset_pose_g.y = local_offset_pose_g.y/30;
	local_offset_pose_g.z = local_offset_pose_g.z/30;
	local_offset_g /= 30;
	ROS_INFO("Coordinate offset set");
	ROS_INFO("the X' axis is facing: %f", local_offset_g);
	return 0;
}

int arm()
{
	//intitialize first waypoint of mission
	set_destination(0,0,0,0);
	for(int i=0; i<100; i++)
	{
		local_pos_pub.publish(waypoint_g);
		ros::spinOnce();
		ros::Duration(0.01).sleep();
	}
	// arming
	ROS_INFO("Arming drone");
	mavros_msgs::CommandBool arm_request;
	arm_request.request.value = true;
	while (!current_state_g.armed && !arm_request.response.success && ros::ok())
	{
		ros::Duration(.1).sleep();
		arming_client.call(arm_request);
		local_pos_pub.publish(waypoint_g);
	}
	if(arm_request.response.success)
	{
		ROS_INFO("Arming Successful");	
		return 0;
	}else{
		ROS_INFO("Arming failed with %d", arm_request.response.success);
		return -1;	
	}
}

/**
\ingroup control_functions
The takeoff function will arm the drone and put the drone in a hover above the initial position. 
@returns 0 - nominal takeoff 
@returns -1 - failed to arm 
@returns -2 - failed to takeoff
*/
int takeoff(float takeoff_alt)
{
	//intitialize first waypoint of mission
	set_destination(0,0,takeoff_alt,0);
	for(int i=0; i<100; i++)
	{
		local_pos_pub.publish(waypoint_g);
		ros::spinOnce();
		// ros::Duration(0.01).sleep();
	}
	// arming
	ROS_INFO("Arming drone");
	mavros_msgs::CommandBool arm_request;
	arm_request.request.value = true;
	while (!current_state_g.armed && !arm_request.response.success && ros::ok())
	{
		// ros::Duration(.1).sleep();
		arming_client.call(arm_request);
		local_pos_pub.publish(waypoint_g);
	}
	if(arm_request.response.success)
	{
		ROS_INFO("Arming Successful");	
	}else{
		ROS_INFO("Arming failed with %d", arm_request.response.success);
		return -1;	
	}

	//request takeoff
	
	mavros_msgs::CommandTOL srv_takeoff;
	srv_takeoff.request.altitude = takeoff_alt;
	if(takeoff_client.call(srv_takeoff)){
		sleep(3);
		ROS_INFO("takeoff sent %d", srv_takeoff.response.success);
	}else{
		ROS_ERROR("Failed Takeoff");
		return -2;
	}
	sleep(2);
	return 0; 
}
/**
\ingroup control_functions
This function returns an int of 1 or 0. THis function can be used to check when to request the next waypoint in the mission. 
@return 1 - waypoint reached 
@return 0 - waypoint not reached
*/
int check_waypoint_reached(float pos_tolerance=0.3, float heading_tolerance=0.01)
{
	local_pos_pub.publish(waypoint_g);
	
	//check for correct position 
	float deltaX = abs(waypoint_g.pose.position.x - current_pose_g.pose.pose.position.x);
    float deltaY = abs(waypoint_g.pose.position.y - current_pose_g.pose.pose.position.y);
    float deltaZ = 0; //abs(waypoint_g.pose.position.z - current_pose_g.pose.pose.position.z);
    float dMag = sqrt( pow(deltaX, 2) + pow(deltaY, 2) + pow(deltaZ, 2) );
    // ROS_INFO("dMag %f", dMag);
    // ROS_INFO("current pose x %F y %f z %f", (current_pose_g.pose.pose.position.x), (current_pose_g.pose.pose.position.y), (current_pose_g.pose.pose.position.z));
    // ROS_INFO("waypoint pose x %F y %f z %f", waypoint_g.pose.position.x, waypoint_g.pose.position.y,waypoint_g.pose.position.z);
    //check orientation
    float cosErr = cos(current_heading_g*(M_PI/180)) - cos(local_desired_heading_g*(M_PI/180));
    float sinErr = sin(current_heading_g*(M_PI/180)) - sin(local_desired_heading_g*(M_PI/180));
    
    float headingErr = sqrt( pow(cosErr, 2) + pow(sinErr, 2) );

    // ROS_INFO("current heading %f", current_heading_g);
    // ROS_INFO("local_desired_heading_g %f", local_desired_heading_g);
    // ROS_INFO("current heading error %f", headingErr);

    if( dMag < pos_tolerance && headingErr < heading_tolerance)
	{
		return 1;
	}else{
		return 0;
	}
}
/**
\ingroup control_functions
this function changes the mode of the drone to a user specified mode. This takes the mode as a string. ex. set_mode("GUIDED")
@returns 1 - mode change successful
@returns 0 - mode change not successful
*/
int set_mode(std::string mode)
{
	mavros_msgs::SetMode srv_setMode;
    srv_setMode.request.base_mode = 0;
    srv_setMode.request.custom_mode = mode.c_str();
    if(set_mode_client.call(srv_setMode)){
      ROS_INFO("setmode send ok");
	  return 0;
    }else{
      ROS_ERROR("Failed SetMode");
      return -1;
    }
}

/**
\ingroup control_functions
this function changes the mode of the drone to land
@returns 1 - mode change successful
@returns 0 - mode change not successful
*/
int land()
{
  mavros_msgs::CommandTOL srv_land;
  if(land_client.call(srv_land) && srv_land.response.success)
  {
    ROS_INFO("land sent %d", srv_land.response.success);
    return 0;
  }else{
    ROS_ERROR("Landing failed");
    return -1;
  }
}
/**
\ingroup control_functions
This function is used to change the speed of the vehicle in guided mode. it takes the speed in meters per second as a float as the input
@returns 0 for success
*/
int set_speed(float speed__mps)
{
	mavros_msgs::CommandLong speed_cmd;
	speed_cmd.request.command = 178;
	speed_cmd.request.param1 = 1; // ground speed type 
	speed_cmd.request.param2 = speed__mps;
	speed_cmd.request.param3 = -1; // no throttle change
	speed_cmd.request.param4 = 0; // absolute speed
	ROS_INFO("setting speed to %f", speed__mps);
	if(command_client.call(speed_cmd))
	{
		ROS_INFO("change speed command succeeded %d", speed_cmd.response.success);
		return 0;
	}else{
		ROS_ERROR("change speed command failed %d", speed_cmd.response.success);
		ROS_ERROR("change speed result was %d ", speed_cmd.response.result);
		return -1;
	}
	ROS_INFO("change speed result was %d ", speed_cmd.response.result);
	return 0;
}

// callback of the position topic (do the following when the position data from the gps sensor is recieved)
void gps_posData_cb(const sensor_msgs::NavSatFix::ConstPtr& msg){

	gps_data_g = *msg;

	gps_position.latitude = gps_data_g.latitude;
	gps_position.longitude = gps_data_g.longitude;
	gps_position.altitude = gps_data_g.altitude;

}

// callback of the velocity topic (do the following when the velocity data from the gps sensor is recieved)
void gps_velData_cb(const geometry_msgs::TwistStamped::ConstPtr& msg){

	geometry_msgs::TwistStamped gps_velData_g = *msg;

	gps_velocity.twist.linear.x =  gps_velData_g.twist.linear.x;
	gps_velocity.twist.linear.y =  gps_velData_g.twist.linear.y;
	gps_velocity.twist.linear.z =  gps_velData_g.twist.linear.z;
	gps_velocity.twist.angular.x =  gps_velData_g.twist.angular.x;
	gps_velocity.twist.angular.y =  gps_velData_g.twist.angular.y;
	gps_velocity.twist.angular.z =  gps_velData_g.twist.angular.z;

}

void set_map_origin(float LA, float LO , float ALT){

		map_origin_gps.latitude = LA ;
		map_origin_gps.longitude = LO;
		map_origin_gps.altitude = ALT ;

		ROS_INFO("Map origin set to: [%.3f, %.3f, %.3f]", map_origin_gps.latitude, map_origin_gps.longitude, map_origin_gps.altitude);
		// isMapOriginSet = true;
}

sensor_msgs::NavSatFix get_map_origin(){

	return map_origin_gps;
}

// Convert the latitude, longitude and altitude to x,y and z (for simulation)
geometry_msgs::PoseStamped get_global_position(){
	
	geometry_msgs::PoseStamped glbl_pos;

	glbl_pos.pose.position.x = (gps_position.latitude - map_origin_gps.latitude) * pow(10,5);
	glbl_pos.pose.position.y = (gps_position.longitude - map_origin_gps.longitude) * pow(10,5);
	glbl_pos.pose.position.z = (gps_position.altitude - map_origin_gps.altitude) ;

	return glbl_pos;
}

geometry_msgs::PoseStamped get_global_position(sensor_msgs::NavSatFix gps_pos){
	
	geometry_msgs::PoseStamped glbl_pos;

	glbl_pos.pose.position.x = (gps_pos.latitude - map_origin_gps.latitude) * pow(10,5);
	glbl_pos.pose.position.y = (gps_pos.longitude - map_origin_gps.longitude) * pow(10,5);
	glbl_pos.pose.position.z = (gps_pos.altitude - map_origin_gps.altitude);

	return glbl_pos;
}
// get the difference between two waypoints
geometry_msgs::PoseStamped difference_bet_2_wps(geometry_msgs::PoseStamped wp1,geometry_msgs::PoseStamped wp2){
	geometry_msgs::PoseStamped difference_wp;
	difference_wp.pose.position.x = wp1.pose.position.x - wp2.pose.position.x;
	difference_wp.pose.position.y = wp1.pose.position.y - wp2.pose.position.y;
	difference_wp.pose.position.z = wp1.pose.position.z - wp2.pose.position.z;

	return difference_wp;
}

void print_Pose(geometry_msgs::PoseStamped wp){

	ROS_INFO("Pos_error: [%f %f %f] ", wp.pose.position.x, wp.pose.position.y, wp.pose.position.z);

}

// go to a global position
void go_to_goalPos(float x, float y, float z , ros::Time leader_time) {  //global

	target_global_position.header.stamp = leader_time;
	target_global_position.pose.position.latitude  =  x*pow(10,-5) + map_origin_gps.latitude; 
	target_global_position.pose.position.longitude =  y*pow(10,-5) + map_origin_gps.longitude; 
	target_global_position.pose.position.altitude  =  z + map_origin_gps.altitude - GPS_ALT_ERROR; 

	//fix drone orientation to point to north (+ve x)
	target_global_position.pose.orientation.x = 0;
	target_global_position.pose.orientation.y = 0;
	target_global_position.pose.orientation.z = 0;
	target_global_position.pose.orientation.w = 0;

    goal_pos_pub.publish(target_global_position); // publish the posiiton to position input topic
}


void fixyaw (){

	//fix drone orientation to point to north (+ve x)
	target_global_position.pose.orientation.x = 0;
	target_global_position.pose.orientation.y = 0;
	target_global_position.pose.orientation.z = 0;
	target_global_position.pose.orientation.w = 0;

    goal_pos_pub.publish(target_global_position);
        
}

geometry_msgs::TwistStamped get_global_velocity(){

	return gps_velocity;
}

// publish the velocity to position input topic
void reach_goalVel(geometry_msgs::TwistStamped target_global_vel) {

	// fixyaw();
	goal_vel_pub.publish(target_global_vel);

}

void reach_goalVel(float Vx_l, float Vy_l, float Vz_l, float Vx_a, float Vy_a, float Vz_a) {

	ROS_INFO("Reach vel: [%f %f]" ,Vx_l ,Vx_a);
	// fixyaw();

	geometry_msgs::TwistStamped target_global_vel;
	target_global_vel.header.stamp = ros::Time::now();
	target_global_vel.twist.linear.x =  Vx_l;
	target_global_vel.twist.linear.y =  Vy_l;
	target_global_vel.twist.linear.z =  Vz_l;
	target_global_vel.twist.angular.x = Vx_a;
	target_global_vel.twist.angular.y = Vy_a;
	target_global_vel.twist.angular.z = Vz_a;

	goal_vel_pub.publish(target_global_vel);

}
// get the difference between two velocities
geometry_msgs::TwistStamped difference_bet_2_twists(geometry_msgs::TwistStamped twist1, geometry_msgs::TwistStamped  twist2){
	
	geometry_msgs::TwistStamped difference_tw;
	difference_tw.header.stamp = twist1.header.stamp;
	difference_tw.twist.linear.x =  twist1.twist.linear.x  - twist2.twist.linear.x ;
	difference_tw.twist.linear.y =  twist1.twist.linear.y  - twist2.twist.linear.y ;
	difference_tw.twist.linear.z =  twist1.twist.linear.z  - twist2.twist.linear.z ;
	difference_tw.twist.angular.x = twist1.twist.angular.x - twist2.twist.angular.x;
	difference_tw.twist.angular.y = twist1.twist.angular.y - twist2.twist.angular.y;
	difference_tw.twist.angular.z = twist1.twist.angular.z - twist2.twist.angular.z;

	ROS_INFO("Velocity_error: [ %.3f %.3f %.3f | %.3f %.3f %.3f] ", difference_tw.twist.linear.x, difference_tw.twist.linear.y, difference_tw.twist.linear.z, difference_tw.twist.angular.x, difference_tw.twist.angular.y, difference_tw.twist.angular.z);
	return difference_tw;
}
// get the force of the virtual impedence F_ext = kx + dx' + mx"  
geometry_msgs::Vector3Stamped Fext (geometry_msgs::PoseStamped deltaX , geometry_msgs::TwistStamped deltaX_dot[], float deltaT, int k){
	
	geometry_msgs::Vector3Stamped Fext_vec;
	// float K_d = 21;	21
	// float D_d = 12.6;	3*21.6
	// float M_d = 1.9; 	0.1
	float K_d = 21;
	float D_d = 3 * 21.6;
	float M_d = 0;

	int prev = 0;
	if(k == 0){
		prev = 1;
	}
	
	float Fextx;
	float Fexty;
	float Fextz;
	
	if (deltaT != 0){
		Fextx = (K_d * deltaX.pose.position.y) + (D_d * deltaX_dot[k].twist.linear.x) + (M_d * (deltaX_dot[k].twist.linear.x - deltaX_dot[prev].twist.linear.x) / deltaT);
		Fexty = (K_d * deltaX.pose.position.x) + (D_d * deltaX_dot[k].twist.linear.y) + (M_d * (deltaX_dot[k].twist.linear.y - deltaX_dot[prev].twist.linear.y) / deltaT);
		Fextz = (K_d * deltaX.pose.position.z) + (D_d * deltaX_dot[k].twist.linear.z) + (M_d * (deltaX_dot[k].twist.linear.z - deltaX_dot[prev].twist.linear.z) / deltaT);
	} else {
		Fextx = (K_d * deltaX.pose.position.y) + (D_d * deltaX_dot[k].twist.linear.x);
		Fexty = (K_d * deltaX.pose.position.x) + (D_d * deltaX_dot[k].twist.linear.y);
		Fextz = (K_d * deltaX.pose.position.z) + (D_d * deltaX_dot[k].twist.linear.z);
	}

	Fext_vec.header.stamp = deltaX_dot[k].header.stamp;
	Fext_vec.vector.x = Fextx;
	Fext_vec.vector.y = Fexty;
	// Fext_vec.vector.z = Fextz;

	return Fext_vec;

}


// geometry_msgs::Vector3Stamped Fext (geometry_msgs::PoseStamped deltaX , geometry_msgs::TwistStamped deltaX_dot , geometry_msgs::Vector3Stamped deltaX_double_dot){
	
// 	geometry_msgs::Vector3Stamped Fext_vec;
// 	float K_d = 21;
// 	float D_d = 12.6;
// 	float M_d = 1.9;
// 	float Fextx = (K_d * deltaX.pose.position.x) + (D_d * deltaX_dot.twist.linear.x) + (M_d * deltaX_double_dot.vector.x);
// 	float Fexty = (K_d * deltaX.pose.position.y) + (D_d * deltaX_dot.twist.linear.y) + (M_d * deltaX_double_dot.vector.y);
// 	float Fextz = (K_d * deltaX.pose.position.z) + (D_d * deltaX_dot.twist.linear.z) + (M_d * deltaX_double_dot.vector.z);

// 	Fext_vec.header.stamp = deltaX_dot.header.stamp;
// 	Fext_vec.vector.x = Fextx;
// 	Fext_vec.vector.y = Fexty;
// 	Fext_vec.vector.z = Fextz;

// 	return Fext_vec;

// }

// integrate velocity
geometry_msgs::TwistStamped acc2vel (geometry_msgs::Vector3Stamped Fext, geometry_msgs::TwistStamped currentVel ,float deltaT){

	geometry_msgs::TwistStamped intgratd_discrete_acc;
	float Vx = (Fext.vector.x * deltaT) + currentVel.twist.linear.x;
	float Vy = (Fext.vector.y * deltaT) + currentVel.twist.linear.y;
	float Vz = (Fext.vector.z * deltaT) + currentVel.twist.linear.z;

	intgratd_discrete_acc.twist.linear.x = Vx;
	intgratd_discrete_acc.twist.linear.y = Vy;
	intgratd_discrete_acc.twist.linear.z = Vz;

	return intgratd_discrete_acc;

}
// velocity Control law: V = kp.F + ki.|F + kd.F'
geometry_msgs::TwistStamped vel_control_input (geometry_msgs::PoseStamped deltaX , geometry_msgs::TwistStamped deltaX_dot, geometry_msgs::Vector3Stamped Fext){ //https://youtu.be/LcsaEF-i1j4?t=635

	geometry_msgs::TwistStamped velocityOutput;
	float ki ,kp ,kd;
	ki = 1;
	kp = 1;
	kd = 1;


	velocityOutput.twist.linear.x = (ki * deltaX.pose.position.y) + (kp * deltaX_dot.twist.linear.x) + (kd * Fext.vector.x);
	velocityOutput.twist.linear.y = (ki * deltaX.pose.position.x) + (kp * deltaX_dot.twist.linear.y) + (kd * Fext.vector.y);


	// velocityOutput.twist.linear.x = (kp * deltaX_dot.twist.linear.x);
	// velocityOutput.twist.linear.y = (kp * deltaX_dot.twist.linear.y);

	/*
	velocityOutput.twist.linear.x = (ki + kp/Ts) * force_error[1].vector.x - (kp/Ts) * force_error[0].vector.x;
	velocityOutput.twist.linear.y = (ki + kp/Ts) * force_error[1].vector.y - (kp/Ts) * force_error[0].vector.y;
	// velocityOutput.twist.linear.z = (ki + kp/Ts) * force_error[1].vector.z - (kp/Ts) * force_error[0].vector.z;
	*/
	return velocityOutput;


}
// velocity Control law: V = kp.F + kd.F'
geometry_msgs::TwistStamped vel_control_input (geometry_msgs::Vector3Stamped force[] , float Ts , int k){

	geometry_msgs::TwistStamped velocityOutput;
	
	float ki ,kp ,kd;
	kp = 1;
	kd = 1;
	int prev = 0;
	if(k == 0){
		prev = 1;
	}

	velocityOutput.twist.linear.x = (kp + kd/Ts) * force[k].vector.x - (kd/Ts) * force[prev].vector.x;
	velocityOutput.twist.linear.y = (kp + kd/Ts) * force[k].vector.y - (kd/Ts) * force[prev].vector.y;
	
	return velocityOutput;

}

// velocity Control law: V = kp.F + ki.|F + kd.F'
geometry_msgs::TwistStamped vel_control_input_PID (geometry_msgs::Vector3Stamped force[] , float Ts , int k){	//https://youtu.be/LcsaEF-i1j4?t=1042

	geometry_msgs::TwistStamped velocityOutput;
	
	float ki ,kp ,kd;
	kp = 1;
	ki = 1;
	kd = 1;
	int prev = 0;
	if(k == 0){
		prev = 1;
	}
	er_integral_x = er_integral_x + force[k].vector.x;
	er_integral_y = er_integral_y + force[k].vector.y;

	// anti wind-up 
  	float iTerm_x = ki * Ts * er_integral_x; 
  	float iTerm_y = ki * Ts * er_integral_y;

  	/*
  	if (iTerm_x < -MAX_OUT)  {
  		iTerm_x = -MAX_OUT;
    	er_integral_x = -MAX_OUT / Ts / ki;
  	}

  	if (iTerm_y < -MAX_OUT)  {
  		iTerm_y = -MAX_OUT;
    	er_integral_y = -MAX_OUT / Ts / ki;
  	}

  	if (iTerm_x > MAX_OUT)  {
  		iTerm_x = MAX_OUT;
    	er_integral_x = MAX_OUT / Ts / ki;
  	}

  	if (iTerm_y > MAX_OUT)  {
  		iTerm_y = MAX_OUT;
    	er_integral_y = MAX_OUT / Ts / ki;
  	}
	*/

  	ROS_INFO("%s : iTerm_x:, %f ", ros_namespace.c_str(), iTerm_x);
  	ROS_INFO("%s : iTerm_y:, %f ", ros_namespace.c_str(), iTerm_y);

	velocityOutput.twist.linear.x = (kp * force[k].vector.x) + iTerm_x + (kd/Ts * (force[k].vector.x - force[prev].vector.x));
	velocityOutput.twist.linear.y = (kp * force[k].vector.y) + iTerm_y + (kd/Ts * (force[k].vector.y - force[prev].vector.y));


	return velocityOutput;

}

// filtering velocity using mean filter
geometry_msgs::TwistStamped vel_mean_filter( geometry_msgs::TwistStamped vel_arr[]){

	geometry_msgs::TwistStamped avg_vel;

	float sum_x;
	float sum_y;
	for (int i = 0; i < 5; ++i)
	{
		sum_x += vel_arr[i].twist.linear.x;
		sum_y += vel_arr[i].twist.linear.y;

	}

	avg_vel.twist.linear.x = sum_x/5;
	avg_vel.twist.linear.y = sum_y/5;

	return avg_vel;

}

void exert_impedence_force(geometry_msgs::Vector3Stamped accel){
	
	// accel_pub.publish(accel);

}


void set_linear_accel(float x , float y , float z){
	
	// geometry_msgs::Vector3Stamped accel;
	// accel.header.stamp = ros::Time::now();
	// // accel.header.frame_id = "base_link";
	// accel.vector.x = x;
	// accel.vector.y = y;
	// accel.vector.z = z;

	// accel_pub.publish(accel);

	// geometry_msgs::AccelStamped acceleration;
	// acceleration.accel.linear.x = x;
	// acceleration.accel.linear.y = y;
	// acceleration.accel.linear.z = z;
	// accel_pub.publish(acceleration);
/*
	mavros_msgs::PositionTarget accel;
	accel.header.stamp = ros::Time::now();
	// accel.header.frame_id = "base_link";
	accel.position.x = x;
	accel.position.y = y;
	accel.position.z = z;
	accel.velocity.x = x;
	accel.velocity.y = y;
	accel.velocity.z = z;
	accel.acceleration_or_force.x = x;
	accel.acceleration_or_force.y = y;
	accel.acceleration_or_force.z = z;

	accel_pub.publish(accel);
	*/

	mavros_msgs::GlobalPositionTarget accel;
	accel.header.stamp = ros::Time::now();
	// accel.header.frame_id = "base_link";
	// accel.position.x = x;
	// accel.position.y = y;
	// accel.position.z = z;
	accel.latitude = gps_position.latitude + ((rand() % 10) * 0.0001);
	accel.longitude	= gps_position.longitude ;
	accel.altitude = gps_position.altitude ;
	accel.velocity.x = x + rand() % 3;
	accel.velocity.y = y;
	accel.velocity.z = z;
	accel.acceleration_or_force.x = x + rand() % 3;
	accel.acceleration_or_force.y = y;
	accel.acceleration_or_force.z = z;

	accel_pub.publish(accel);
}

	// geometry_msgs::Vector3Stamped Fext (geometry_msgs::PoseStamped deltaX , geometry_msgs::TwistStamped deltaX_dot){
	// 	12.6
	// }

/**
\ingroup control_functions
This function is called at the beginning of a program and will start of the communication links to the FCU. The function requires the program's ros nodehandle as an input 
@returns n/a
*/
int init_publisher_subscriber(ros::NodeHandle controlnode)
{
	
	ros::Rate rate(10);
	if (!controlnode.hasParam("namespace"))
	{

		ROS_INFO("using default namespace");
	}else{
		controlnode.getParam("namespace", ros_namespace);
		ROS_INFO("using namespace %s", ros_namespace.c_str());
	}
	local_pos_pub = controlnode.advertise<geometry_msgs::PoseStamped>((ros_namespace + "/mavros/setpoint_position/local").c_str(), 10);
	// goal_pos_pub = controlnode.advertise<mavros_msgs::GlobalPositionTarget>((ros_namespace +"/mavros/setpoint_raw/global").c_str(), 10);
	// goal_pos_pub = controlnode.advertise<mavros_msgs::GlobalPositionTarget>((ros_namespace +"/mavros/setpoint_raw/target_global").c_str(), 10);
	goal_pos_pub = controlnode.advertise<geographic_msgs::GeoPoseStamped>((ros_namespace +"/mavros/setpoint_position/global").c_str(), 10);
 	goal_vel_pub = controlnode.advertise<geometry_msgs::TwistStamped>((ros_namespace +"/mavros/setpoint_velocity/cmd_vel").c_str(), 10);
 	// accel_pub = controlnode.advertise<geometry_msgs::Vector3Stamped>((ros_namespace +"/mavros/setpoint_accel/accel").c_str(), 10);
 	// accel_pub = controlnode.advertise<geometry_msgs::AccelWithCovariance>((ros_namespace +"/mavros/local_position/accel").c_str(), 10);
 	// accel_pub = controlnode.advertise<mavros_msgs::PositionTarget>((ros_namespace +"/mavros/setpoint_raw/local").c_str(), 10);
 	accel_pub = controlnode.advertise<mavros_msgs::GlobalPositionTarget>((ros_namespace +"/mavros/setpoint_raw/global").c_str(), 10);



	curr_gps_posData = controlnode.subscribe<sensor_msgs::NavSatFix>((ros_namespace +"/mavros/global_position/raw/fix").c_str(), 10, gps_posData_cb);
	currentPos = controlnode.subscribe<nav_msgs::Odometry>((ros_namespace + "/mavros/global_position/local").c_str(), 10, pose_cb);
	state_sub = controlnode.subscribe<mavros_msgs::State>((ros_namespace + "/mavros/state").c_str(), 10, state_cb);
	arming_client = controlnode.serviceClient<mavros_msgs::CommandBool>((ros_namespace + "/mavros/cmd/arming").c_str());
	land_client = controlnode.serviceClient<mavros_msgs::CommandTOL>((ros_namespace + "/mavros/cmd/land").c_str());
	set_mode_client = controlnode.serviceClient<mavros_msgs::SetMode>((ros_namespace + "/mavros/set_mode").c_str());
	takeoff_client = controlnode.serviceClient<mavros_msgs::CommandTOL>((ros_namespace + "/mavros/cmd/takeoff").c_str());
	command_client = controlnode.serviceClient<mavros_msgs::CommandLong>((ros_namespace + "/mavros/cmd/command").c_str());

	curr_gps_velData = controlnode.subscribe<geometry_msgs::TwistStamped>(ros_namespace + "/mavros/global_position/raw/gps_vel", 10, gps_velData_cb);
	
	return 0;
}