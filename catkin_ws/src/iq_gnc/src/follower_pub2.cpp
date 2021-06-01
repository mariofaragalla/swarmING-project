#include <ros/ros.h>
#include <sensor_msgs/NavSatFix.h>
#include <geographic_msgs/GeoPoseStamped.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/TwistStamped.h>
#include <mavros_msgs/State.h>
#include <mavros_msgs/CommandTOL.h>
#include <mavros_msgs/CommandBool.h>
#include <mavros_msgs/SetMode.h>
#include <geometry_msgs/Vector3Stamped.h>

#define GPS_ALT_ERROR 19.5 		//gps altitude error obtained experimentaly 
#define MAX_OUT 340282346638528859811704183484516925440
// geometry_msgs::TwistStamped vel;
float er_integral_x = 0;
float er_integral_y = 0;

std::string ros_ns;

ros::Publisher leaderPublisher_gps_pos;

ros::ServiceClient set_mode_client;
ros::ServiceClient land_client;
ros::ServiceClient arming_client;
ros::ServiceClient takeoff_client;

geographic_msgs::GeoPoseStamped getLeaderPosition_gps(){

	geographic_msgs::GeoPoseStamped leader_gps_pos;

	ros::param::get( (ros_ns + "/shared_params/leader_position/latitude").c_str() , leader_gps_pos.pose.position.latitude );
	ros::param::get( (ros_ns + "/shared_params/leader_position/longitude").c_str() ,leader_gps_pos.pose.position.longitude );
	ros::param::get( (ros_ns + "/shared_params/leader_position/altitude").c_str() , leader_gps_pos.pose.position.altitude );

	return leader_gps_pos;
}

geographic_msgs::GeoPoseStamped getFollowerPosition_gps(){

	geographic_msgs::GeoPoseStamped follower_gps_pos;

	ros::param::get( (ros_ns + "/shared_params/follower_position/latitude").c_str() , follower_gps_pos.pose.position.latitude );
	ros::param::get( (ros_ns + "/shared_params/follower_position/longitude").c_str() ,follower_gps_pos.pose.position.longitude );
	ros::param::get( (ros_ns + "/shared_params/follower_position/altitude").c_str() , follower_gps_pos.pose.position.altitude );

	return follower_gps_pos;
}

geometry_msgs::TwistStamped getLeaderVelocity(){

	geometry_msgs::TwistStamped follower_gps_vel;

	ros::param::get( (ros_ns + "/shared_params/leader_velocity/linear/x").c_str() , follower_gps_vel.twist.linear.x);
	ros::param::get( (ros_ns + "/shared_params/leader_velocity/linear/y").c_str() , follower_gps_vel.twist.linear.y);
	ros::param::get( (ros_ns + "/shared_params/leader_velocity/linear/z").c_str() , follower_gps_vel.twist.linear.z);
	ros::param::get( (ros_ns + "/shared_params/leader_velocity/angular/x").c_str() , follower_gps_vel.twist.angular.x);
	ros::param::get( (ros_ns + "/shared_params/leader_velocity/angular/y").c_str() , follower_gps_vel.twist.angular.y);
	ros::param::get( (ros_ns + "/shared_params/leader_velocity/angular/z").c_str() , follower_gps_vel.twist.angular.z);

	// ROS_INFO("velocity_recieved: [%f %f %f] ", follower_gps_vel.twist.linear.x, follower_gps_vel.twist.linear.y, follower_gps_vel.twist.linear.z);
	
	return follower_gps_vel;
}

mavros_msgs::State getLeaderState(){
	mavros_msgs::State leader_state;
	int armed;
	int connected;

	ros::param::get( (ros_ns + "/shared_params/leader_state/mode").c_str() , leader_state.mode);
	ros::param::get( (ros_ns + "/shared_params/leader_state/armed").c_str() , armed);
	leader_state.armed = armed;
	ros::param::get( (ros_ns + "/shared_params/leader_state/connected").c_str() , connected);
	leader_state.connected = connected;

	return leader_state;
}

mavros_msgs::State getFollowerState(){
	mavros_msgs::State follower_state;
	int armed;
	int connected;
	ros::param::get( (ros_ns + "/shared_params/follower_state/mode").c_str() , follower_state.mode);
	ros::param::get( (ros_ns + "/shared_params/follower_state/armed").c_str() , armed);
	follower_state.armed = armed;
	ros::param::get( (ros_ns + "/shared_params/follower_state/connected").c_str() , connected);
	follower_state.connected = connected;

	return follower_state;
}

void go_to_goalPos(float x, float y, float z ) {  //global

	sensor_msgs::NavSatFix mapOrigin;

	ros::param::get( (ros_ns + "/shared_params/mapOrigin/latitude").c_str() , mapOrigin.latitude  );
	ros::param::get( (ros_ns + "/shared_params/mapOrigin/longitude").c_str() ,mapOrigin.longitude );
	ros::param::get( (ros_ns + "/shared_params/mapOrigin/altitude").c_str() , mapOrigin.altitude  );

	geographic_msgs::GeoPoseStamped target_global_position;
	
	target_global_position.pose.position.latitude  =  x*pow(10,-5) + mapOrigin.latitude; 
	target_global_position.pose.position.longitude =  y*pow(10,-5) + mapOrigin.longitude ; 
	target_global_position.pose.position.altitude  =  z + mapOrigin.altitude - GPS_ALT_ERROR; 

	//fix drone orientation to point to north (+ve x)
	target_global_position.pose.orientation.x = 0;
	target_global_position.pose.orientation.y = 0;
	target_global_position.pose.orientation.z = 0;
	target_global_position.pose.orientation.w = 0;

    leaderPublisher_gps_pos.publish(target_global_position); // publish the posiiton to position input topic
}

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

int takeoff(float takeoff_alt)
{	
	
	//intitialize first waypoint of mission
	geometry_msgs::PoseStamped desiredPosition;

	ros::param::get( (ros_ns + "/shared_params/desiredPosition/x").c_str() , desiredPosition.pose.position.x);
	ros::param::get( (ros_ns + "/shared_params/desiredPosition/y").c_str() , desiredPosition.pose.position.y);

	ROS_INFO_ONCE("%s: Takeoff to [%f %f]", ros_ns.c_str(), -desiredPosition.pose.position.x, -desiredPosition.pose.position.y);
	
	go_to_goalPos(-desiredPosition.pose.position.x, -desiredPosition.pose.position.y,takeoff_alt);


	// for(int i=0; i<5; i++)
	// {
	// 	go_to_goalPos(-desiredPosition.pose.position.x,-desiredPosition.pose.position.y,takeoff_alt);
	// 	ros::spinOnce();
	// 	// ros::Duration(0.01).sleep();
	// }
	// arming
	ROS_INFO("Arming drone");
	mavros_msgs::CommandBool arm_request;
	arm_request.request.value = true;

	while (!getFollowerState().armed && !arm_request.response.success && ros::ok())
	{
		ros::Duration(.1).sleep();
		arming_client.call(arm_request);
		go_to_goalPos(-desiredPosition.pose.position.x,-desiredPosition.pose.position.y,takeoff_alt);
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



void adjustfollowerState(){

	mavros_msgs::State leader_state = getLeaderState();
	mavros_msgs::State follower_state = getFollowerState();
	
	if (follower_state.mode == "LAND" || follower_state.mode == "STABILIZE"){
		
		if(leader_state.mode == "GUIDED"){
		
			set_mode("GUIDED");
		
		}	
	} else if (follower_state.mode == "GUIDED") {
		
		if(leader_state.mode == "LAND"){

			land();

			ros::param::set((ros_ns + "/shared_params/takeoff_flag").c_str() , false);
			ros::param::set((ros_ns + "/shared_params/alt_flag").c_str() , false);		

		}

	}

}


geometry_msgs::PoseStamped getPosition_xyz(geographic_msgs::GeoPoseStamped gps_pos){
	
	geometry_msgs::PoseStamped global_pos;
	sensor_msgs::NavSatFix mapOrigin;

	// get map origin first:

	ros::param::get( (ros_ns + "/shared_params/mapOrigin/latitude").c_str() , mapOrigin.latitude  );
	ros::param::get( (ros_ns + "/shared_params/mapOrigin/longitude").c_str() ,mapOrigin.longitude );
	ros::param::get( (ros_ns + "/shared_params/mapOrigin/altitude").c_str() , mapOrigin.altitude  );
	// 

	global_pos.pose.position.x = (gps_pos.pose.position.latitude - mapOrigin.latitude) * pow(10,5);
	global_pos.pose.position.y = (gps_pos.pose.position.longitude - mapOrigin.longitude) * pow(10,5);
	global_pos.pose.position.z = (gps_pos.pose.position.altitude - mapOrigin.altitude);

	return global_pos;
}

geometry_msgs::PoseStamped difference_bet_2_wps(geometry_msgs::PoseStamped wp1,geometry_msgs::PoseStamped wp2){
	
	geometry_msgs::PoseStamped difference_wp;
	difference_wp.pose.position.x = wp1.pose.position.x - wp2.pose.position.x;
	difference_wp.pose.position.y = wp1.pose.position.y - wp2.pose.position.y;
	difference_wp.pose.position.z = wp1.pose.position.z - wp2.pose.position.z;

	return difference_wp;
}

geometry_msgs::TwistStamped difference_bet_2_twists(geometry_msgs::TwistStamped twist1, geometry_msgs::TwistStamped  twist2){
	
	geometry_msgs::TwistStamped difference_tw;
	difference_tw.twist.linear.x =  twist1.twist.linear.x  - twist2.twist.linear.x ;
	difference_tw.twist.linear.y =  twist1.twist.linear.y  - twist2.twist.linear.y ;
	difference_tw.twist.linear.z =  twist1.twist.linear.z  - twist2.twist.linear.z ;
	difference_tw.twist.angular.x = twist1.twist.angular.x - twist2.twist.angular.x;
	difference_tw.twist.angular.y = twist1.twist.angular.y - twist2.twist.angular.y;
	difference_tw.twist.angular.z = twist1.twist.angular.z - twist2.twist.angular.z;

	// ROS_INFO("Velocity_error: [ %.3f %.3f %.3f | %.3f %.3f %.3f] ", difference_tw.twist.linear.x, difference_tw.twist.linear.y, difference_tw.twist.linear.z, difference_tw.twist.angular.x, difference_tw.twist.angular.y, difference_tw.twist.angular.z);
	return difference_tw;
}


bool setMapOrigin(){

	mavros_msgs::State leader_state = getLeaderState();
	sensor_msgs::NavSatFix mapOrigin;
	bool isMapOriginSet ;
	geometry_msgs::PoseStamped leaderPosition_xyz;
	geometry_msgs::PoseStamped followerPosition_xyz;
	geometry_msgs::PoseStamped desiredPosition;

	ros::param::get( (ros_ns + "/shared_params/mapOriginSet_flag").c_str() , isMapOriginSet);

	mapOrigin.latitude = getLeaderPosition_gps().pose.position.latitude;
	mapOrigin.longitude = getLeaderPosition_gps().pose.position.longitude;
	mapOrigin.altitude = getLeaderPosition_gps().pose.position.altitude;

	// if leader drone is in Stabilize mode (at the beginning) , map origin is not previously set 
	// and gps sensor is giving readings
	if(leader_state.mode == "STABILIZE" && !isMapOriginSet && mapOrigin.latitude != 0 && mapOrigin.longitude != 0 && mapOrigin.altitude != 0 ){

		ros::param::set( (ros_ns + "/shared_params/mapOrigin/latitude").c_str() , mapOrigin.latitude  );
		ros::param::set( (ros_ns + "/shared_params/mapOrigin/longitude").c_str() ,mapOrigin.longitude );
		ros::param::set( (ros_ns + "/shared_params/mapOrigin/altitude").c_str() , mapOrigin.altitude  );

		ROS_INFO("Map origin set to: [%.3f, %.3f, %.3f]", mapOrigin.latitude, mapOrigin.longitude, mapOrigin.altitude);
		
		leaderPosition_xyz = getPosition_xyz(getLeaderPosition_gps());
		followerPosition_xyz = getPosition_xyz(getFollowerPosition_gps());
		desiredPosition	= difference_bet_2_wps(leaderPosition_xyz , followerPosition_xyz);

		ros::param::set( (ros_ns + "/shared_params/desiredPosition/x").c_str() , desiredPosition.pose.position.x);
		ros::param::set( (ros_ns + "/shared_params/desiredPosition/y").c_str() , desiredPosition.pose.position.y);
		ros::param::set( (ros_ns + "/shared_params/desiredPosition/z").c_str() , desiredPosition.pose.position.z);

		ros::param::set( (ros_ns + "/shared_params/mapOriginSet_flag").c_str() , true);
		isMapOriginSet = true;
	}
	return isMapOriginSet;
}

bool isTakeoff(){

	bool takeoff_flag;
	geometry_msgs::PoseStamped leaderPosition_xyz;
	geometry_msgs::PoseStamped followerPosition_xyz;

	leaderPosition_xyz = getPosition_xyz(getLeaderPosition_gps());
	followerPosition_xyz = getPosition_xyz(getFollowerPosition_gps());

	if(leaderPosition_xyz.pose.position.z > 0.5){

		ros::param::get((ros_ns + "/shared_params/takeoff_flag").c_str() , takeoff_flag);
		
		if(!takeoff_flag){

			takeoff(leaderPosition_xyz.pose.position.z);
			int i = 0;
			
			while(followerPosition_xyz.pose.position.z < 0.5 && i<1000){
			
					ROS_INFO("Stop everything until I takeoff");
					ROS_INFO("diff_z= %f ", abs(leaderPosition_xyz.pose.position.z - followerPosition_xyz.pose.position.z));
				i++;
			}

			takeoff_flag = true;
		
			if(abs(leaderPosition_xyz.pose.position.z - followerPosition_xyz.pose.position.z) < 0.5 && followerPosition_xyz.pose.position.z > 2.5){
				
				ros::param::set((ros_ns + "/shared_params/alt_flag").c_str(), true);
			
			} else {

				takeoff_flag = false;
				ros::param::set((ros_ns + "/shared_params/alt_flag").c_str(), false);
			
			}
					
		}

	}
	ros::param::set((ros_ns + "/shared_params/takeoff_flag").c_str() , takeoff_flag);
	return takeoff_flag;
}

geometry_msgs::PoseStamped calculatePositionError(){

	ROS_INFO_ONCE("Start Position Following");
	geometry_msgs::PoseStamped leaderPosition_xyz = getPosition_xyz(getLeaderPosition_gps());
	geometry_msgs::PoseStamped followerPosition_xyz = getPosition_xyz(getFollowerPosition_gps());
	geometry_msgs::PoseStamped posBetLeaderAndFollower = difference_bet_2_wps(leaderPosition_xyz, followerPosition_xyz);

	geometry_msgs::PoseStamped desiredPosition;
	ros::param::get( (ros_ns + "/shared_params/desiredPosition/x").c_str() , desiredPosition.pose.position.x);
	ros::param::get( (ros_ns + "/shared_params/desiredPosition/y").c_str() , desiredPosition.pose.position.y);
	ros::param::get( (ros_ns + "/shared_params/desiredPosition/z").c_str() , desiredPosition.pose.position.z);

	geometry_msgs::PoseStamped posError = difference_bet_2_wps(posBetLeaderAndFollower, desiredPosition);

	ros::param::set( (ros_ns + "/shared_params/positionError/x").c_str() , posError.pose.position.x);
	ros::param::set( (ros_ns + "/shared_params/positionError/y").c_str() , posError.pose.position.y);
	ros::param::set( (ros_ns + "/shared_params/positionError/z").c_str() , posError.pose.position.z);

	// go_to_goalPos(followerPosition_xyz.pose.position.x + posError.pose.position.x ,  
	// 			  followerPosition_xyz.pose.position.y + posError.pose.position.y ,  
	// 			  followerPosition_xyz.pose.position.z + posError.pose.position.z) ;

	// ROS_INFO("Position error: [x: %f y: %f z: %f]", posError.pose.position.x, posError.pose.position.y, posError.pose.position.z);
	return posError;
}

geometry_msgs::TwistStamped calculateVelocityError(){

	ROS_INFO_ONCE("Calculating Velocity Error ...");
	geometry_msgs::TwistStamped leaderVelocity ;
	geometry_msgs::TwistStamped followerVelocity ;
	

	ros::param::get( (ros_ns + "/shared_params/leader_velocity/linear/x").c_str() , leaderVelocity.twist.linear.x);
	ros::param::get( (ros_ns + "/shared_params/leader_velocity/linear/y").c_str() , leaderVelocity.twist.linear.y);
	ros::param::get( (ros_ns + "/shared_params/leader_velocity/linear/z").c_str() , leaderVelocity.twist.linear.z);
	ros::param::get( (ros_ns + "/shared_params/leader_velocity/angular/x").c_str() , leaderVelocity.twist.angular.x);
	ros::param::get( (ros_ns + "/shared_params/leader_velocity/angular/y").c_str() , leaderVelocity.twist.angular.y);
	ros::param::get( (ros_ns + "/shared_params/leader_velocity/angular/z").c_str() , leaderVelocity.twist.angular.z);


	ros::param::get( (ros_ns + "/shared_params/follower_velocity/linear/x").c_str() , followerVelocity.twist.linear.x);
	ros::param::get( (ros_ns + "/shared_params/follower_velocity/linear/y").c_str() , followerVelocity.twist.linear.y);
	ros::param::get( (ros_ns + "/shared_params/follower_velocity/linear/z").c_str() , followerVelocity.twist.linear.z);
	ros::param::get( (ros_ns + "/shared_params/follower_velocity/angular/x").c_str() , followerVelocity.twist.angular.x);
	ros::param::get( (ros_ns + "/shared_params/follower_velocity/angular/y").c_str() , followerVelocity.twist.angular.y);
	ros::param::get( (ros_ns + "/shared_params/follower_velocity/angular/z").c_str() , followerVelocity.twist.angular.z);


	geometry_msgs::TwistStamped velError = difference_bet_2_twists(leaderVelocity, followerVelocity);

	ros::param::get( (ros_ns + "/shared_params/velocityError/linear/x").c_str() , velError.twist.linear.x);
	ros::param::get( (ros_ns + "/shared_params/velocityError/linear/y").c_str() , velError.twist.linear.y);
	ros::param::get( (ros_ns + "/shared_params/velocityError/linear/z").c_str() , velError.twist.linear.z);
	ros::param::get( (ros_ns + "/shared_params/velocityError/angular/x").c_str() , velError.twist.angular.x);
	ros::param::get( (ros_ns + "/shared_params/velocityError/angular/y").c_str() , velError.twist.angular.y);
	ros::param::get( (ros_ns + "/shared_params/velocityError/angular/z").c_str() , velError.twist.angular.z);


	// go_to_goalPos(followerPosition_xyz.pose.position.x + posError.pose.position.x ,  
	// 			  followerPosition_xyz.pose.position.y + posError.pose.position.y ,  
	// 			  followerPosition_xyz.pose.position.z + posError.pose.position.z) ;

	// ROS_INFO("Position error: [x: %f y: %f z: %f]", posError.pose.position.x, posError.pose.position.y, posError.pose.position.z);
	return velError;
}


geometry_msgs::TwistStamped posControl_velInput(geometry_msgs::PoseStamped posErr, double Ts){

	geometry_msgs::TwistStamped velocityOutput;
	ROS_INFO("Ts: %lf , posErr: [%f %f]", Ts, posErr.pose.position.x, posErr.pose.position.y);
	if(Ts>0){
		if(posErr.pose.position.y > 0.25){
		velocityOutput.twist.linear.x = posErr.pose.position.y + posErr.pose.position.y/Ts;
		ROS_INFO("Vy = %f", velocityOutput.twist.linear.x);
		}
		if(posErr.pose.position.x >0.25){
			velocityOutput.twist.linear.y = posErr.pose.position.x + posErr.pose.position.x/Ts;
		ROS_INFO("Vx = %f", velocityOutput.twist.linear.y);
		}
	}
	return velocityOutput;
}

geometry_msgs::Vector3Stamped Fext (geometry_msgs::PoseStamped deltaX , geometry_msgs::TwistStamped deltaX_dot){
	
	geometry_msgs::Vector3Stamped Fext_vec;
	// float K_d = 21;	21
	// float D_d = 12.6;	3*21.6
	// float M_d = 1.9; 	0.1
	float K_d = 200;
	float D_d = 1000;
	float M_d = 1;

	
	float Fextx;
	float Fexty;
	float Fextz;
	float Fextx2;
	
		Fextx = (K_d * deltaX.pose.position.y) + (D_d * deltaX_dot.twist.linear.x);
		Fexty = (K_d * deltaX.pose.position.x) + (D_d * deltaX_dot.twist.linear.y);
		Fextz = (K_d * deltaX.pose.position.z) + (D_d * deltaX_dot.twist.linear.z);
		Fextx2 = (K_d * deltaX.pose.position.y) + 0.5*(D_d * deltaX_dot.twist.linear.x); 
	

	Fext_vec.vector.x = Fextx + Fextx2;
	Fext_vec.vector.y = Fexty;
	// Fext_vec.vector.z = Fextz;

	// force_pub.publish(Fext_vec);

	return Fext_vec;

}

geometry_msgs::TwistStamped vel_control_input_PID (geometry_msgs::Vector3Stamped force , float Ts){	//https://youtu.be/LcsaEF-i1j4?t=1042

	geometry_msgs::TwistStamped velocityOutput;
	
	float ki ,kp ,kd;
	kp = 0.464;
	ki = 1.046;
	kd = 0.4625;

	// int prev = 0;
	// if(k == 0){
	// 	prev = 1;
	// }
	er_integral_x = er_integral_x + force.vector.x;
	er_integral_y = er_integral_y + force.vector.y;

	// anti wind-up 
  	float iTerm_x = ki * Ts * er_integral_x; 
  	float iTerm_y = ki * Ts * er_integral_y;

  	
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


  	// ROS_INFO("%s : iTerm_x:, %f ", ros_namespace.c_str(), iTerm_x);
  	// ROS_INFO("%s : iTerm_y:, %f ", ros_namespace.c_str(), iTerm_y);

	// velocityOutput.twist.linear.x = (kp * force[k].vector.x) + iTerm_x + (kd/Ts * (force[k].vector.x - force[prev].vector.x));
	// velocityOutput.twist.linear.y = (kp * force[k].vector.y) + iTerm_y + (kd/Ts * (force[k].vector.y - force[prev].vector.y));

	velocityOutput.twist.linear.x = (kp * force.vector.x) + iTerm_x;
	velocityOutput.twist.linear.y = (kp * force.vector.y) + iTerm_y;	

	return velocityOutput;
}

int main(int argc, char** argv) {

	
	ros::Publisher leaderPublisher_gps_vel;

	ros::init(argc, argv, "follower_pub2");

	ros::NodeHandle nhpub("~");

	nhpub.getParam("namespace", ros_ns);

	ros::Rate rate(20);

	// ROS_INFO(" %s ", ros_ns.c_str());

	// leader publishers(publishers that take data from leader and publish it to the follower)
	leaderPublisher_gps_pos = nhpub.advertise<geographic_msgs::GeoPoseStamped>((ros_ns +"/mavros/setpoint_position/global").c_str(), 1);
	leaderPublisher_gps_vel = nhpub.advertise<geometry_msgs::TwistStamped>((ros_ns +"/mavros/setpoint_velocity/cmd_vel").c_str(), 1);

	//follower publishers (publishers that publish data to the follower)
	set_mode_client = nhpub.serviceClient<mavros_msgs::SetMode>((ros_ns + "/mavros/set_mode").c_str());
	land_client = nhpub.serviceClient<mavros_msgs::CommandTOL>((ros_ns + "/mavros/cmd/land").c_str());
	arming_client = nhpub.serviceClient<mavros_msgs::CommandBool>((ros_ns + "/mavros/cmd/arming").c_str());
	takeoff_client = nhpub.serviceClient<mavros_msgs::CommandTOL>((ros_ns + "/mavros/cmd/takeoff").c_str());

	bool isMapOriginSet;
	bool isTakenoff;
	bool isAltitude;
	double samplingTime;
	int i = 0;
	while(ros::ok()){
		/*
		adjustfollowerState();

		ros::param::get( (ros_ns + "/shared_params/mapOriginSet_flag").c_str() , isMapOriginSet);
		ros::param::get( (ros_ns + "/shared_params/takeoff_flag").c_str() , isTakenoff);
		ros::param::get( (ros_ns + "/shared_params/alt_flag").c_str() , isAltitude);
		

		if(isMapOriginSet){

			if(isTakenoff){

				if(isAltitude){

					ros::param::get( (ros_ns + "/shared_params/leader_position/Ts").c_str() , samplingTime);
					
					leaderPublisher_gps_vel.publish( 
													vel_control_input_PID(
													Fext( calculatePositionError(), calculateVelocityError() ) , 
													samplingTime) 
													);

					// ROS_INFO("%s,time0: %lf, time1: %lf, time[%d]: %lf",ros_ns.c_str(),samplingTime[0],samplingTime[1],i,samplingTime[i]);					
					// leaderPublisher_gps_vel.publish(posControl_velInput(calculatePositionError(), samplingTime));
					// leaderPublisher_gps_vel.publish(getLeaderVelocity());
				}

			} else {

				isTakeoff();
			
			}

		} else {

			setMapOrigin();
		
		}
		// leaderPublisher_gps_pos.publish(getLeaderPosition_gps());
		// leaderPublisher_gps_vel.publish(getLeaderVelocity());
		*/
		ros::spinOnce();
		rate.sleep();
	}


}
