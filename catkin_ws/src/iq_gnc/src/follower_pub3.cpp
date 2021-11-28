
/*
 * This file is part of the swarmING project it contains a publisher node that publishes data 
 * to a drone(follower) that follows a leader drone. It recieves the leader's data indirectly 
 * via a parameters list. This list is updated using a subscriber node in the follower_sub2.cpp 
 * file. Both files are required for the leader-follower simulation of three drones. This 
 * simulation can be started with the help of launch files.
 *
 * Author: Mario Faragalla
 * 
 */

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

#define GPS_ALT_OFFSET 19.5 // gps altitude offset
#define LOW_ALT_TH 0.5 // low altitude thereshold: below that range the drone is considered to be on the ground
#define MAX_ALT_TH 2.5 // max altitude thereshold: Above that range the drone is defenitely flying
#define MIN_ALT_ERR 0.5 // minimum altitude error 

std::string ros_ns;	// String for the namespace of the node 

ros::Publisher leaderPublisher_gps_pos;	//publisher of the leader's gps position 
ros::Publisher leaderPublisher_local_pos; //publisher of the leader's local position 

// Clients needed for manipulating the flight state/mode.
ros::ServiceClient set_mode_client; 
ros::ServiceClient land_client;
ros::ServiceClient arming_client;
ros::ServiceClient takeoff_client;

geometry_msgs::PoseStamped getPosition_xyz(geographic_msgs::GeoPoseStamped gps_pos);	//prototyping

geographic_msgs::GeoPoseStamped getLeaderPosition_gps(){	//get the gps position of the leader from the shared parameters list

	geographic_msgs::GeoPoseStamped leader_gps_pos; 

	ros::param::get( (ros_ns + "/shared_params/leader_position/latitude").c_str() , leader_gps_pos.pose.position.latitude );
	ros::param::get( (ros_ns + "/shared_params/leader_position/longitude").c_str() ,leader_gps_pos.pose.position.longitude );
	ros::param::get( (ros_ns + "/shared_params/leader_position/altitude").c_str() , leader_gps_pos.pose.position.altitude );

	return leader_gps_pos;
}

geographic_msgs::GeoPoseStamped getFollowerPosition_gps(){	//get the gps position of the follower from the shared parameters list

	geographic_msgs::GeoPoseStamped follower_gps_pos;

	ros::param::get( (ros_ns + "/shared_params/follower_position/latitude").c_str() , follower_gps_pos.pose.position.latitude );
	ros::param::get( (ros_ns + "/shared_params/follower_position/longitude").c_str() ,follower_gps_pos.pose.position.longitude );
	ros::param::get( (ros_ns + "/shared_params/follower_position/altitude").c_str() , follower_gps_pos.pose.position.altitude );

	return follower_gps_pos;
}

geometry_msgs::TwistStamped getLeaderVelocity(){	//get the velocity of the leader from the shared parameters list

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

mavros_msgs::State getLeaderState(){	//get the flight state/mode of the leader from the shared parameters list
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

mavros_msgs::State getFollowerState(){	//get the flight state/mode of the leader from the shared parameters list
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

void go_to_goalPos(float x, float y, float z ) {  //make the follower go to a certain global position 

	// get the origin position of the follower
	sensor_msgs::NavSatFix mapOrigin;

	ros::param::get( (ros_ns + "/shared_params/mapOrigin/latitude").c_str() , mapOrigin.latitude  );
	ros::param::get( (ros_ns + "/shared_params/mapOrigin/longitude").c_str() ,mapOrigin.longitude );
	ros::param::get( (ros_ns + "/shared_params/mapOrigin/altitude").c_str() , mapOrigin.altitude  );

	//convert xyz to LLA (for simulation)
	geographic_msgs::GeoPoseStamped target_global_position;
	
	target_global_position.pose.position.latitude  =  x*pow(10,-5) + mapOrigin.latitude; 
	target_global_position.pose.position.longitude =  y*pow(10,-5) + mapOrigin.longitude ; 
	target_global_position.pose.position.altitude  =  z + mapOrigin.altitude - GPS_ALT_OFFSET; 

	//fix drone orientation to point to north (+ve x)
	target_global_position.pose.orientation.x = 0;
	target_global_position.pose.orientation.y = 0;
	target_global_position.pose.orientation.z = 0;
	target_global_position.pose.orientation.w = 0;

  leaderPublisher_gps_pos.publish(target_global_position); // publish the posiiton to position input topic
}

int set_mode(std::string mode){	//set the flight state/mode of the follower

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

int takeoff(float takeoff_alt){	\\ take off to a certain altitude
	
	//get the follower's xyz position
	geometry_msgs::PoseStamped followerPosition = getPosition_xyz(getFollowerPosition_gps());

	//get the desired position from the shared paramters list
	geometry_msgs::PoseStamped desiredPosition;
	
	ros::param::get( (ros_ns + "/shared_params/desiredPosition/x").c_str() , desiredPosition.pose.position.x);
	ros::param::get( (ros_ns + "/shared_params/desiredPosition/y").c_str() , desiredPosition.pose.position.y);

	ROS_INFO_ONCE("%s: Takeoff to [%f %f]", ros_ns.c_str(), -desiredPosition.pose.position.x, -desiredPosition.pose.position.y); //print
	
	// send an arbitary position to test arming
	go_to_goalPos(followerPosition.pose.position.x, followerPosition.pose.position.y, takeoff_alt);

	//request to arm the propellers
	mavros_msgs::CommandBool arm_request;
	arm_request.request.value = true;
  ROS_INFO("Arming drone");
	
	//keep sending position to until the follower is armed
	while (!getFollowerState().armed && !arm_request.response.success && ros::ok()){

		ros::Duration(.1).sleep();
		arming_client.call(arm_request);

		go_to_goalPos(followerPosition.pose.position.x, followerPosition.pose.position.y, takeoff_alt);
	}
	if(arm_request.response.success)
	{
		ROS_INFO("Arming Successful");	
	}else{
		ROS_INFO("Arming failed with %d", arm_request.response.success);
		return -1;	
	}

	//Once the propellers are armed, request to take off
	mavros_msgs::CommandTOL srv_takeoff;
	srv_takeoff.request.altitude = takeoff_alt;
	if(takeoff_client.call(srv_takeoff)){
		sleep(3);
		ROS_INFO("takeoff sent %d", srv_takeoff.response.success);
	}else{
		ROS_ERROR("Failed Takeoff");
		return -2;
	}
	// send the desired altitude to the follower
	go_to_goalPos(-desiredPosition.pose.position.x, -desiredPosition.pose.position.y, takeoff_alt);

	sleep(2);
	return 0; 
}

int land(){	// make the follower land
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


void adjustfollowerState(){	// adjust the flight state/mode of the follower based on the flight state/mode of the leader

	mavros_msgs::State leader_state = getLeaderState();	//get the state of the leader
	mavros_msgs::State follower_state = getFollowerState();	//get the state of the follower

	// if the follower is landing or stable (or braking)
	if (follower_state.mode == "LAND" || follower_state.mode == "STABILIZE" || follower_state.mode == "BRAKE") {
		
		//check if the leader state is guided (moving/ ready to move)
		if(leader_state.mode == "GUIDED"){
	
			set_mode("GUIDED");	// then set the follower to guided (make it ready to move or follow the leader )
		
		}	

		// if the follower's mode is guided or braking
	} else if (follower_state.mode == "GUIDED" || follower_state.mode == "BRAKE") {
		
		// if the leader is landing 
		if(leader_state.mode == "LAND"){

			land();	// then make the follower land 

			ros::param::set((ros_ns + "/shared_params/takeoff_flag").c_str() , false);	// make the takeoff flag in the shared paramters list false

			// check if the follower is still on the ground
			if(getPosition_xyz(getLeaderPosition_gps()).pose.position.z < LOW_ALT_TH){	
			   
			   ros::param::set((ros_ns + "/shared_params/alt_flag").c_str() , false); // make the altitude flag in the shared paramters list false
			   
			}		

		}

	} 

}

// Convert a given gps position (LLA) to xyz position 
geometry_msgs::PoseStamped getPosition_xyz(geographic_msgs::GeoPoseStamped gps_pos){
	
	geometry_msgs::PoseStamped global_pos;
	sensor_msgs::NavSatFix mapOrigin;

	// get map origin of the follower
	ros::param::get( (ros_ns + "/shared_params/mapOrigin/latitude").c_str() , mapOrigin.latitude  );
	ros::param::get( (ros_ns + "/shared_params/mapOrigin/longitude").c_str() ,mapOrigin.longitude );
	ros::param::get( (ros_ns + "/shared_params/mapOrigin/altitude").c_str() , mapOrigin.altitude  );
	
	// then calculate the xyz position of the follower from the map origin and the gps coordinates
	global_pos.pose.position.x = (gps_pos.pose.position.latitude - mapOrigin.latitude) * pow(10,5);
	global_pos.pose.position.y = (gps_pos.pose.position.longitude - mapOrigin.longitude) * pow(10,5);
	global_pos.pose.position.z = (gps_pos.pose.position.altitude - mapOrigin.altitude);

	return global_pos;
}

// calculate the difference between two waypoints or positions
geometry_msgs::PoseStamped difference_bet_2_wps(geometry_msgs::PoseStamped wp1, geometry_msgs::PoseStamped wp2){
	
	geometry_msgs::PoseStamped difference_wp;
	difference_wp.pose.position.x = wp1.pose.position.x - wp2.pose.position.x;
	difference_wp.pose.position.y = wp1.pose.position.y - wp2.pose.position.y;
	difference_wp.pose.position.z = wp1.pose.position.z - wp2.pose.position.z;

	return difference_wp;
}

// calculate the difference between two velocities
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


bool setMapOrigin(){	// set the map origin (reference) for the follower 

	mavros_msgs::State leader_state = getLeaderState();	// get the flight state of the leader
	// initialize variables needed for this function 
	sensor_msgs::NavSatFix mapOrigin;
	bool isMapOriginSet ;
	geometry_msgs::PoseStamped leaderPosition_xyz;
	geometry_msgs::PoseStamped followerPosition_xyz;
	geometry_msgs::PoseStamped desiredPosition;

	// get the map origin flag which indicates whether a map origin is set or not from the paramters list
	ros::param::get( (ros_ns + "/shared_params/mapOriginSet_flag").c_str() , isMapOriginSet); 

	// get the leader position at the beginning and make it the map origin for the follower
	mapOrigin.latitude = getLeaderPosition_gps().pose.position.latitude;
	mapOrigin.longitude = getLeaderPosition_gps().pose.position.longitude;
	mapOrigin.altitude = getLeaderPosition_gps().pose.position.altitude;

	// if leader drone is in Stabilize mode (at the beginning), map origin is not previously set and gps sensor is giving readings
	if(leader_state.mode == "STABILIZE" && !isMapOriginSet && mapOrigin.latitude != 0 && mapOrigin.longitude != 0 && mapOrigin.altitude != 0 ){

		// then set the map origin in the shared paramters list
		ros::param::set( (ros_ns + "/shared_params/mapOrigin/latitude").c_str() , mapOrigin.latitude  );
		ros::param::set( (ros_ns + "/shared_params/mapOrigin/longitude").c_str() ,mapOrigin.longitude );
		ros::param::set( (ros_ns + "/shared_params/mapOrigin/altitude").c_str() , mapOrigin.altitude  );

		ROS_INFO("Map origin set to: [%.3f, %.3f, %.3f]", mapOrigin.latitude, mapOrigin.longitude, mapOrigin.altitude);	//print the origin
		
		// get the xyz positions of both the leader and the follower and then calculate the difference between them to be the desired position
		leaderPosition_xyz = getPosition_xyz(getLeaderPosition_gps());
		followerPosition_xyz = getPosition_xyz(getFollowerPosition_gps());
		desiredPosition	= difference_bet_2_wps(leaderPosition_xyz , followerPosition_xyz);

		ros::param::set( (ros_ns + "/shared_params/desiredPosition/x").c_str() , desiredPosition.pose.position.x);
		ros::param::set( (ros_ns + "/shared_params/desiredPosition/y").c_str() , desiredPosition.pose.position.y);
		ros::param::set( (ros_ns + "/shared_params/desiredPosition/z").c_str() , desiredPosition.pose.position.z);

		// set the map Origin flag to true
		ros::param::set( (ros_ns + "/shared_params/mapOriginSet_flag").c_str() , true);
		isMapOriginSet = true;
	}
	return isMapOriginSet;
}

bool isTakeoff(){	// check if the drone is in the air

	bool takeoff_flag;
	geometry_msgs::PoseStamped leaderPosition_xyz;
	geometry_msgs::PoseStamped followerPosition_xyz;

	// get the xyz positions of both the leader and the follower
	leaderPosition_xyz = getPosition_xyz(getLeaderPosition_gps());
	followerPosition_xyz = getPosition_xyz(getFollowerPosition_gps());

	// Handling a case if the drone gives a false reading
	if(leaderPosition_xyz.pose.position.z > LOW_ALT_TH){	//if the leader's position is above 0.5 m

		ros::param::get((ros_ns + "/shared_params/takeoff_flag").c_str() , takeoff_flag);
		
		if(!takeoff_flag){	// check if the take off flag was not set

			takeoff(leaderPosition_xyz.pose.position.z);	// then take off to the desired position 
			int i = 0;
			
			// Send multiple positions until the drone reaches the desired altitiude
			while(followerPosition_xyz.pose.position.z < LOW_ALT_TH && i<1000){	
			
					ROS_INFO("Stop everything until the drone takes off");
					ROS_INFO("diff_z= %f ", abs(leaderPosition_xyz.pose.position.z - followerPosition_xyz.pose.position.z));
				i++;
			}

			takeoff_flag = true;	//set the flag to true

			// Check if the follower and the leader are close enough (in terms of altitude) and if the follower is above the max altitude thereshold
			if(abs(leaderPosition_xyz.pose.position.z - followerPosition_xyz.pose.position.z) < MIN_ALT_ERR
			    && followerPosition_xyz.pose.position.z > MAX_ALT_TH){
				
				ros::param::set((ros_ns + "/shared_params/alt_flag").c_str(), true);	// set the altitude flag to true in the shared parameters list
			
			} else {	// if they are not close then the follower didn't take off

				takeoff_flag = false;
				ros::param::set((ros_ns + "/shared_params/alt_flag").c_str(), false); // set the altitude flag to false in the shared parameters list
			
			}
					
		}

	}
	ros::param::set((ros_ns + "/shared_params/takeoff_flag").c_str() , takeoff_flag);	//set the take off flag to the correct value
	return takeoff_flag;
}

// calculate the position error between the leader and the follower (starts when the following starts)
geometry_msgs::PoseStamped calculatePositionError(){	

	ROS_INFO_ONCE("Start Position Following");

	// get the xyz positions of both the leader and the follower and then calculate the difference between them (current difference)
	geometry_msgs::PoseStamped leaderPosition_xyz = getPosition_xyz(getLeaderPosition_gps());
	geometry_msgs::PoseStamped followerPosition_xyz = getPosition_xyz(getFollowerPosition_gps());
	geometry_msgs::PoseStamped posBetLeaderAndFollower = difference_bet_2_wps(leaderPosition_xyz, followerPosition_xyz);

	// get the desired position in terms of xyz
	geometry_msgs::PoseStamped desiredPosition;
	ros::param::get( (ros_ns + "/shared_params/desiredPosition/x").c_str() , desiredPosition.pose.position.x);
	ros::param::get( (ros_ns + "/shared_params/desiredPosition/y").c_str() , desiredPosition.pose.position.y);
	ros::param::get( (ros_ns + "/shared_params/desiredPosition/z").c_str() , desiredPosition.pose.position.z);

	// set the position error to be the difference between the current difference and the desired position
	geometry_msgs::PoseStamped posError = difference_bet_2_wps(posBetLeaderAndFollower, desiredPosition);
	ros::param::set( (ros_ns + "/shared_params/positionError/x").c_str() , posError.pose.position.x);
	ros::param::set( (ros_ns + "/shared_params/positionError/y").c_str() , posError.pose.position.y);
	ros::param::set( (ros_ns + "/shared_params/positionError/z").c_str() , posError.pose.position.z);

	// ROS_INFO("Position error: [x: %f y: %f z: %f]", posError.pose.position.x, posError.pose.position.y, posError.pose.position.z);
	return posError;
}

geometry_msgs::PoseStamped getTargetPos(){	// get the target position

	geometry_msgs::PoseStamped targetPos;
  geometry_msgs::PoseStamped posErr;
	geometry_msgs::PoseStamped followerPos;
  
	followerPos = getPosition_xyz(getFollowerPosition_gps());	// get the xyz follower position

	ros::param::get( (ros_ns + "/shared_params/positionError/x").c_str() , posErr.pose.position.x);
	ros::param::get( (ros_ns + "/shared_params/positionError/y").c_str() , posErr.pose.position.y);
	ros::param::get( (ros_ns + "/shared_params/positionError/z").c_str() , posErr.pose.position.z);

	targetPos.header.stamp = ros::Time::now();
	targetPos.pose.position.x = followerPos.pose.position.x + posErr.pose.position.x; 
	targetPos.pose.position.y = followerPos.pose.position.y + posErr.pose.position.y; 
	targetPos.pose.position.z = followerPos.pose.position.z + posErr.pose.position.z; 

	return targetPos;
}

// calculate the velocity error between the leader and the follower (starts during the following process)
geometry_msgs::TwistStamped calculateVelocityError(){

	ROS_INFO_ONCE("Calculating Velocity Error ...");
	geometry_msgs::TwistStamped leaderVelocity ;
	geometry_msgs::TwistStamped followerVelocity ;
	
	// get the leader velocity from the shared parameters list
	ros::param::get( (ros_ns + "/shared_params/leader_velocity/linear/x").c_str() , leaderVelocity.twist.linear.x);
	ros::param::get( (ros_ns + "/shared_params/leader_velocity/linear/y").c_str() , leaderVelocity.twist.linear.y);
	ros::param::get( (ros_ns + "/shared_params/leader_velocity/linear/z").c_str() , leaderVelocity.twist.linear.z);
	ros::param::get( (ros_ns + "/shared_params/leader_velocity/angular/x").c_str() , leaderVelocity.twist.angular.x);
	ros::param::get( (ros_ns + "/shared_params/leader_velocity/angular/y").c_str() , leaderVelocity.twist.angular.y);
	ros::param::get( (ros_ns + "/shared_params/leader_velocity/angular/z").c_str() , leaderVelocity.twist.angular.z);

	// get the follower velocity from the shared parameters list
	ros::param::get( (ros_ns + "/shared_params/follower_velocity/linear/x").c_str() , followerVelocity.twist.linear.x);
	ros::param::get( (ros_ns + "/shared_params/follower_velocity/linear/y").c_str() , followerVelocity.twist.linear.y);
	ros::param::get( (ros_ns + "/shared_params/follower_velocity/linear/z").c_str() , followerVelocity.twist.linear.z);
	ros::param::get( (ros_ns + "/shared_params/follower_velocity/angular/x").c_str() , followerVelocity.twist.angular.x);
	ros::param::get( (ros_ns + "/shared_params/follower_velocity/angular/y").c_str() , followerVelocity.twist.angular.y);
	ros::param::get( (ros_ns + "/shared_params/follower_velocity/angular/z").c_str() , followerVelocity.twist.angular.z);

	// calculate the difference between the both the leader and the follower velocities
	geometry_msgs::TwistStamped velError = difference_bet_2_twists(leaderVelocity, followerVelocity);
	ros::param::get( (ros_ns + "/shared_params/velocityError/linear/x").c_str() , velError.twist.linear.x);
	ros::param::get( (ros_ns + "/shared_params/velocityError/linear/y").c_str() , velError.twist.linear.y);
	ros::param::get( (ros_ns + "/shared_params/velocityError/linear/z").c_str() , velError.twist.linear.z);
	ros::param::get( (ros_ns + "/shared_params/velocityError/angular/x").c_str() , velError.twist.angular.x);
	ros::param::get( (ros_ns + "/shared_params/velocityError/angular/y").c_str() , velError.twist.angular.y);
	ros::param::get( (ros_ns + "/shared_params/velocityError/angular/z").c_str() , velError.twist.angular.z);


	return velError;
}


geometry_msgs::TwistStamped getLeaderAcceleration(){	// get the leader acceleration (for plotting)

	geometry_msgs::TwistStamped leaderAccel;

	ros::param::get( (ros_ns + "/shared_params/leader_acceleration/linear/x").c_str() , leaderAccel.twist.linear.x );
	ros::param::get( (ros_ns + "/shared_params/leader_acceleration/linear/y").c_str() , leaderAccel.twist.linear.y );

	return leaderAccel;
}

geometry_msgs::TwistStamped controlledVeclocity(){ // Velocity control (simple interlink)

	geometry_msgs::PoseStamped posErr = calculatePositionError(); // position error
	//initialize different velocity variables
	geometry_msgs::TwistStamped leaderVelocity ;
	geometry_msgs::TwistStamped followerVelocity ;
	geometry_msgs::TwistStamped controlVeclocity;
	double leader_timeDelay ; // used to calculate the time delay between samples
	geometry_msgs::TwistStamped leaderAccel = getLeaderAcceleration();

	//get leader velocity
	ros::param::get( (ros_ns + "/shared_params/leader_velocity/linear/x").c_str() , leaderVelocity.twist.linear.x);
	ros::param::get( (ros_ns + "/shared_params/leader_velocity/linear/y").c_str() , leaderVelocity.twist.linear.y);

	//get follower velocity
	ros::param::get( (ros_ns + "/shared_params/follower_velocity/linear/x").c_str() , followerVelocity.twist.linear.x);
	ros::param::get( (ros_ns + "/shared_params/follower_velocity/linear/y").c_str() , followerVelocity.twist.linear.y);

	//get time delay
	ros::param::get( (ros_ns + "/shared_params/leader_velocity/delay").c_str() , leader_timeDelay);
	

	// the then part of this if statement is to handle situations with very high velocities (still in progress)
	if(leader_timeDelay >0){		// if there is a time delay between the signals
		  
		 if(getFollowerState().mode == "BRAKE" && (leaderVelocity.twist.linear.x > 0.1 || leaderVelocity.twist.linear.y > 0.1)){
		    set_mode("GUIDED");
		 } 

		 // if the follower is stopping and the leader is moving, then let the follower continue following the leader
	   
	   controlVeclocity.twist.linear.x = 0.55 * (posErr.pose.position.y + leaderVelocity.twist.linear.x * leader_timeDelay) + 
	                                            (-0.35 * followerVelocity.twist.linear.x) + 
	                                            leaderVelocity.twist.linear.x +
	                                            leaderAccel.twist.linear.x * leader_timeDelay;

		 // if the leader has high acceleration in the x direction and it is in any other mode than braking, then stop the leader
    if(leaderAccel.twist.linear.x < -0.15 && leaderVelocity.twist.linear.x > 2 && getFollowerState().mode != "BRAKE"){
    	ROS_INFO("leader x decel-> leader acc x: %f leader Vel x: %f ",leaderAccel.twist.linear.x, leaderVelocity.twist.linear.x);
      set_mode("BRAKE");

     // else if the mode is not braking and the leader has low veloicty , set the mode of the follower to guided
    } else if( getFollowerState().mode == "BRAKE" && (leaderVelocity.twist.linear.x < 0.1 || leaderAccel.twist.linear.x > -0.1)){
    	 set_mode("GUIDED");
    }

    // if no condition from the above is met, let the follower follow the leader.
     controlVeclocity.twist.linear.y = 0.5 * (posErr.pose.position.x + leaderVelocity.twist.linear.y * leader_timeDelay) + 
                                             (-0.25 * followerVelocity.twist.linear.y) + 
                                             leaderVelocity.twist.linear.y +
                                             leaderAccel.twist.linear.y * leader_timeDelay;

    // if the leader has high acceleration in the  ydirection and it is in any other mode than braking, then stop the leader
    if(leaderAccel.twist.linear.y < -0.15 && leaderVelocity.twist.linear.y > 2 && getFollowerState().mode != "BRAKE"){
    	  ROS_INFO("leader y decel-> leader acc y: %f leader Vel y: %f ",leaderAccel.twist.linear.y, leaderVelocity.twist.linear.y);
       // controlVeclocity.twist.linear.y = -followerVelocity.twist.linear.y + 20 * leaderAccel.twist.linear.y;
        set_mode("BRAKE");

    // else if the mode is not braking and the leader has low veloicty , set the mode of the follower to guided
    } else if( getFollowerState().mode == "BRAKE" && (leaderVelocity.twist.linear.y < 0.1 || leaderAccel.twist.linear.y > -0.1)){
    	 set_mode("GUIDED");
    }


	} else { //make the follower follow the leader

		controlVeclocity.twist.linear.x = 0.55 * (posErr.pose.position.y ) + (-0.35 * followerVelocity.twist.linear.x) + leaderVelocity.twist.linear.x;

	  controlVeclocity.twist.linear.y = 0.5 * (posErr.pose.position.x ) + (-0.25 * followerVelocity.twist.linear.y) + leaderVelocity.twist.linear.y;

	}
	  
	  return controlVeclocity; // return the velocity that should be sent to the follower.

}



int main(int argc, char** argv) {

	// initialize publishers
	ros::Publisher leaderPublisher_gps_vel;
	ros::Publisher leaderAccelPlotter;

  //initialize and name the node to be able to communicate with ROS
	ros::init(argc, argv, "follower_pub2");	
	ros::NodeHandle nhpub("~");	

	nhpub.getParam("namespace", ros_ns);	// get the name of the node from the ros parameters list

	ros::Rate rate(20);	// set the frequency of the loop to 20hz

	// ROS_INFO(" %s ", ros_ns.c_str());

	// leader publishers(publishers that publish leader's data to the follower)
	leaderPublisher_gps_pos = nhpub.advertise<geographic_msgs::GeoPoseStamped>((ros_ns +"/mavros/setpoint_position/global").c_str(), 1);
	leaderPublisher_gps_vel = nhpub.advertise<geometry_msgs::TwistStamped>((ros_ns +"/mavros/setpoint_velocity/cmd_vel").c_str(), 1);
	leaderAccelPlotter = nhpub.advertise<geometry_msgs::TwistStamped>((ros_ns +"/leaderAcceleration").c_str(), 1); 
	leaderPublisher_local_pos = nhpub.advertise<geometry_msgs::PoseStamped>((ros_ns + "/mavros/setpoint_position/local").c_str(), 10); 


	//follower publishers (publishers that only publish data to the follower)
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
	
		adjustfollowerState();	// check the leader's flight mode/state and set the follower's state accordingly

		// get isMapOriginSet, isTakenoff, isAltitude flags from the shared parameters list
		ros::param::get( (ros_ns + "/shared_params/mapOriginSet_flag").c_str() , isMapOriginSet);
		ros::param::get( (ros_ns + "/shared_params/takeoff_flag").c_str() , isTakenoff);
		ros::param::get( (ros_ns + "/shared_params/alt_flag").c_str() , isAltitude);
		

		if(isMapOriginSet){	// check if the map origin is set

			if(isTakenoff){ // check if the follower has taken off

				if(isAltitude){	// check if the follower has reached the desired altitude

					// leaderPublisher_gps_vel.publish(controlledVeclocity()); // PID velocity control (simple interlink)
					
					// Maintaining Formation using position 
					calculatePositionError();
					go_to_goalPos(getTargetPos().pose.position.x, getTargetPos().pose.position.y, getTargetPos().pose.position.z); // leader follower formation control
				}

			} 
			else { // if the follower didn't take off check if it is not landing

				if(getLeaderState().mode != "LAND") isTakeoff(); // if it is not landing then check if it has takenoff

      }

		} else { // if the map origin is not set

			setMapOrigin();	// then set the map origin
		
		}

		leaderAccelPlotter.publish(getLeaderAcceleration()); //publish acceleration for plotting

		ros::spinOnce(); // handle ros callbacks
		rate.sleep();	// wait for the time specified by the rate
	}


}
