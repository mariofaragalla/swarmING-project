/*
 * This file is part of the swarmING project it contains a subscriber node that subscribes 
 * to two drones the leader and the follower. After recieving the data from the drones it 
 * updates a parameter list. This list is shared with the entire ROS network. Another file 
 * (follower_pub2.cpp) accesses this list to retrive the parameters while updating some. 
 * Both files are required for the leader-follower simulation of three drones. This 
 * simulation can be started with the help of launch files.
 *
 * Author: Mario Faragalla
 * 
 */ 

#include <ros/ros.h>
#include <sensor_msgs/NavSatFix.h>
#include <geometry_msgs/TwistStamped.h>
#include <mavros_msgs/State.h>
#include <mavros_msgs/StreamRate.h>

std::string ros_ns; // String for the namespace of the node 

// leader state callback: called whenever a flight state/mode is recieved from the leader
void leader_state_cb(const mavros_msgs::State::ConstPtr& msg) {	

	// Recieve the message containing information about the state from the leader
	mavros_msgs::State leader_state = *msg;
	// then set the following parameters in the shared parameters list 
	ros::param::set( (ros_ns + "/shared_params/leader_state/mode").c_str() , leader_state.mode);	// flight mode
	ros::param::set( (ros_ns + "/shared_params/leader_state/armed").c_str() , leader_state.armed);	// armed status
	ros::param::set( (ros_ns + "/shared_params/leader_state/connected").c_str() , leader_state.connected);	// connected to FCU status
}

// leader gps position callback: called whenever a gps position is recieved from the leader
void leader_gps_pos_cb(const sensor_msgs::NavSatFix::ConstPtr& msg){

	// Recieve the message containing the gps position from the leader
	sensor_msgs::NavSatFix leader_gps_pos = *msg;

	double prev_time; // time of the previous position sample (Tp_sp)
	ros::param::get( (ros_ns + "/shared_params/leader_position/time").c_str() ,  prev_time); //get Tp_sp from the parameters list 

	//convert seconds and nano seconds of Tp_sp to string
	std::string secs = std::to_string(leader_gps_pos.header.stamp.sec);
	std::string nsecs = std::to_string(leader_gps_pos.header.stamp.nsec);
	std::string totalTime = (secs + "." + nsecs).c_str(); // put the time in the right form

	std::string::size_type sz; // size of the string data type
	double time = std::stod (totalTime,&sz); // convert the string to double
	double delay = time - prev_time; // calculate the time delay
	
	// set the time parameters in the shared parameters list 
	ros::param::set( (ros_ns + "/shared_params/leader_position/time").c_str() ,  time );
	ros::param::set( (ros_ns + "/shared_params/leader_position/delay").c_str() , delay );

	// set the gps position in the shared parameters list 
	ros::param::set( (ros_ns + "/shared_params/leader_position/latitude").c_str() , leader_gps_pos.latitude );
	ros::param::set( (ros_ns + "/shared_params/leader_position/longitude").c_str() ,leader_gps_pos.longitude );
	ros::param::set( (ros_ns + "/shared_params/leader_position/altitude").c_str() , leader_gps_pos.altitude );

	// ROS_INFO("time: %lf", time - prev_time);
}

// leader gps velocity callback: called whenever a gps velocity is recieved from the leader
void leader_gps_vel_cb(const geometry_msgs::TwistStamped::ConstPtr& msg){

	// Recieve the message containing the gps velocity from the leader
	geometry_msgs::TwistStamped leader_gps_vel = *msg;

	geometry_msgs::TwistStamped prev_leader_gps_vel; // previous velocity sample

	double prev_time;	// time of the previous velocity sample (Tv_sp)
	ros::param::get( (ros_ns + "/shared_params/leader_velocity/time").c_str() ,  prev_time); //get Tv_sp from the parameters list 
	
	// get the previous leader velocity sample from the parameters list 
	ros::param::get( (ros_ns + "/shared_params/leader_velocity/linear/x").c_str() , prev_leader_gps_vel.twist.linear.x );
	ros::param::get( (ros_ns + "/shared_params/leader_velocity/linear/y").c_str() , prev_leader_gps_vel.twist.linear.y );

	//convert seconds and nano seconds of Tv_sp to string
	std::string secs = std::to_string(leader_gps_vel.header.stamp.sec);
	std::string nsecs = std::to_string(leader_gps_vel.header.stamp.nsec);
	std::string totalTime = (secs + "." + nsecs).c_str(); // put the time in the right form
	
	std::string::size_type sz; // size of the string data type
	double time = std::stod (totalTime,&sz); // convert the string to double
	double delay = time - prev_time; // calculate the time delay

	// set the time parameters in the shared parameters list 
	ros::param::set( (ros_ns + "/shared_params/leader_velocity/time").c_str() , time);
	ros::param::set( (ros_ns + "/shared_params/leader_velocity/delay").c_str() , delay);

	// set the gps velocity in the shared parameters list 
	ros::param::set( (ros_ns + "/shared_params/leader_velocity/linear/x").c_str() , leader_gps_vel.twist.linear.x );
	ros::param::set( (ros_ns + "/shared_params/leader_velocity/linear/y").c_str() , leader_gps_vel.twist.linear.y );
	ros::param::set( (ros_ns + "/shared_params/leader_velocity/linear/z").c_str() , leader_gps_vel.twist.linear.z );
	ros::param::set( (ros_ns + "/shared_params/leader_velocity/angular/x").c_str() , leader_gps_vel.twist.angular.x );
	ros::param::set( (ros_ns + "/shared_params/leader_velocity/angular/y").c_str() , leader_gps_vel.twist.angular.y );
	ros::param::set( (ros_ns + "/shared_params/leader_velocity/angular/z").c_str() , leader_gps_vel.twist.angular.z );

	// set the acceleration in the shared parameters list 
	ros::param::set( (ros_ns + "/shared_params/leader_acceleration/linear/x").c_str() , (leader_gps_vel.twist.linear.x -  prev_leader_gps_vel.twist.linear.x)/delay );
	ros::param::set( (ros_ns + "/shared_params/leader_acceleration/linear/y").c_str() , (leader_gps_vel.twist.linear.y - prev_leader_gps_vel.twist.linear.y)/delay );

}

// follower state callback: called whenever a flight state/mode is recieved from the follower
void follower_state_cb(const mavros_msgs::State::ConstPtr& msg) {

	// recieve the message containing information about the state from the follower
  	mavros_msgs::State follower_state = *msg;
  	// then set the following parameters in the shared parameters list 
  	ros::param::set( (ros_ns + "/shared_params/follower_state/mode").c_str() , follower_state.mode);
  	ros::param::set( (ros_ns + "/shared_params/follower_state/armed").c_str() , follower_state.armed);
  	ros::param::set( (ros_ns + "/shared_params/leader_state/connected").c_str() , follower_state.connected);
}

// follower gps position callback: called whenever a gps position is recieved from the follower
void follower_gps_pos_cb(const sensor_msgs::NavSatFix::ConstPtr& msg){

	// Recieve the message containing the gps position from the follower
	sensor_msgs::NavSatFix follower_gps_pos = *msg;
	
	//convert seconds and nano seconds to string
	std::string secs = std::to_string(follower_gps_pos.header.stamp.sec);
	std::string nsecs = std::to_string(follower_gps_pos.header.stamp.nsec);

	std::string totalTime = (secs + "." + nsecs).c_str(); // put the time in the right form
	std::string::size_type sz; // size of the string data type

	double time = std::stod (totalTime,&sz); // convert the string to double

	// set the time parameters in the shared parameters list 
	ros::param::set( (ros_ns + "/shared_params/follower_position/time").c_str() , time);

	// set the gps position in the shared parameters list 
	ros::param::set( (ros_ns + "/shared_params/follower_position/latitude").c_str() , follower_gps_pos.latitude );
	ros::param::set( (ros_ns + "/shared_params/follower_position/longitude").c_str() ,follower_gps_pos.longitude );
	ros::param::set( (ros_ns + "/shared_params/follower_position/altitude").c_str() , follower_gps_pos.altitude );
}

// follower gps velocity callback: called whenever a gps velocity is recieved from the follower
void follower_gps_vel_cb(const geometry_msgs::TwistStamped::ConstPtr& msg){

	// Recieve the message containing the gps velocity from the follower
	geometry_msgs::TwistStamped follower_gps_vel = *msg;

	// set the gps velocity in the shared parameters list 
	ros::param::set( (ros_ns + "/shared_params/follower_velocity/linear/x").c_str() , follower_gps_vel.twist.linear.x );
	ros::param::set( (ros_ns + "/shared_params/follower_velocity/linear/y").c_str() , follower_gps_vel.twist.linear.y );
	ros::param::set( (ros_ns + "/shared_params/follower_velocity/linear/z").c_str() , follower_gps_vel.twist.linear.z );
	ros::param::set( (ros_ns + "/shared_params/follower_velocity/angular/x").c_str() , follower_gps_vel.twist.angular.x );
	ros::param::set( (ros_ns + "/shared_params/follower_velocity/angular/y").c_str() , follower_gps_vel.twist.angular.y );
	ros::param::set( (ros_ns + "/shared_params/follower_velocity/angular/z").c_str() , follower_gps_vel.twist.angular.z );

}
// before starting any operation on the drone, it must be assured that the drone
// is connected to the flight control unit, that's why this function is used
int wait4connect(){	

	ROS_INFO("Waiting for FCU connection");
	// wait for FCU connection
	int connected;

	// get the connection status from the paramters list
	ros::param::get( (ros_ns + "/shared_params/follower_state/armed").c_str() , connected);

	while (ros::ok() && !connected)
	{
		ros::spinOnce();
		ros::Duration(0.01).sleep();
	}
	if(connected)
	{
		ROS_INFO("Connected to FCU");	
		return 0;
	}else{
		ROS_INFO("Error connecting to drone");
		return -1;	
	}
		
}

int main(int argc, char** argv) {
	//leader subscribers: responsible for recieving messages from the leader
	ros::Subscriber leaderSubscriber_state;
	ros::Subscriber leaderSubscriber_gps_pos;
	ros::Subscriber leaderSubscriber_gps_vel;

	//follower subscribers: responsible for recieving messages from the follower
	ros::Subscriber followerSubscriber_state;
	ros::Subscriber followerSubscriber_gps_pos;
	ros::Subscriber followerSubscriber_gps_vel;

    //initialize and name the node to be able to communicate with ROS
	ros::init(argc, argv, "follower_sub2");
	ros::NodeHandle nhsub("~");

	nhsub.getParam("namespace", ros_ns); // get the name of the node from the ros parameters list

	ros::Rate rate(20); // set the frequency of the loop to 20hz

	wait4connect(); // wait for the drone connection to the FCU
	
	// ROS_INFO(" %s ", ros_ns.c_str());

	// Recieve leader's data: 
	leaderSubscriber_state = nhsub.subscribe<mavros_msgs::State>( "/drone1/mavros/state", 1, leader_state_cb);
	leaderSubscriber_gps_pos = nhsub.subscribe<sensor_msgs::NavSatFix>("/drone1/mavros/global_position/raw/fix", 1, leader_gps_pos_cb); //, queue_size=1,buff_size=2**24
	leaderSubscriber_gps_vel = nhsub.subscribe<geometry_msgs::TwistStamped>("/drone1/mavros/global_position/raw/gps_vel", 1, leader_gps_vel_cb);
	
	// Recieve follower's data: 
	followerSubscriber_state = nhsub.subscribe<mavros_msgs::State>( (ros_ns +"/mavros/state").c_str(), 1, follower_state_cb);
	followerSubscriber_gps_pos = nhsub.subscribe<sensor_msgs::NavSatFix>((ros_ns +"/mavros/global_position/raw/fix").c_str(), 1, follower_gps_pos_cb); //, queue_size=1,buff_size=2**24
	followerSubscriber_gps_vel = nhsub.subscribe<geometry_msgs::TwistStamped>((ros_ns +"/mavros/global_position/raw/gps_vel").c_str(), 1, follower_gps_vel_cb);
	
	while(ros::ok()){

		ros::spinOnce(); // handle ros callbacks
		rate.sleep(); // wait for the time specified by the rate
	}
}