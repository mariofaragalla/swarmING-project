#include <ros/ros.h>
#include <sensor_msgs/NavSatFix.h>
#include <geometry_msgs/TwistStamped.h>
#include <mavros_msgs/State.h>
#include <mavros_msgs/StreamRate.h>

std::string ros_ns;
// ros::ServiceClient stream_rate_client;
// ros::ServiceClient stream_rate_client_leader;

void leader_state_cb(const mavros_msgs::State::ConstPtr& msg) {

	mavros_msgs::State leader_state = *msg;
	ros::param::set( (ros_ns + "/shared_params/leader_state/mode").c_str() , leader_state.mode);
	ros::param::set( (ros_ns + "/shared_params/leader_state/armed").c_str() , leader_state.armed);
	ros::param::set( (ros_ns + "/shared_params/leader_state/connected").c_str() , leader_state.connected);
}

void leader_gps_pos_cb(const sensor_msgs::NavSatFix::ConstPtr& msg){

	sensor_msgs::NavSatFix leader_gps_pos = *msg;
	double prev_time;
	ros::param::get( (ros_ns + "/shared_params/leader_position/time").c_str() ,  prev_time);
	std::string secs = std::to_string(leader_gps_pos.header.stamp.sec);
	std::string nsecs = std::to_string(leader_gps_pos.header.stamp.nsec);
	std::string totalTime = (secs + "." + nsecs).c_str();
	std::string::size_type sz; 

	double time = std::stod (totalTime,&sz);
	double posTs = time - prev_time;
	
	ros::param::set( (ros_ns + "/shared_params/leader_position/time").c_str() ,  time );
	ros::param::set( (ros_ns + "/shared_params/leader_position/Ts").c_str() , posTs );
	ros::param::set( (ros_ns + "/shared_params/leader_position/latitude").c_str() , leader_gps_pos.latitude );
	ros::param::set( (ros_ns + "/shared_params/leader_position/longitude").c_str() ,leader_gps_pos.longitude );
	ros::param::set( (ros_ns + "/shared_params/leader_position/altitude").c_str() , leader_gps_pos.altitude );

	// ROS_INFO("time: %lf", time - prev_time);
}

void leader_gps_vel_cb(const geometry_msgs::TwistStamped::ConstPtr& msg){

	geometry_msgs::TwistStamped leader_gps_vel = *msg;
	std::string secs = std::to_string(leader_gps_vel.header.stamp.sec);
	std::string nsecs = std::to_string(leader_gps_vel.header.stamp.nsec);
	std::string totalTime = (secs + "." + nsecs).c_str();
	std::string::size_type sz; 

	double time = std::stod (totalTime,&sz);
	
	ros::param::set( (ros_ns + "/shared_params/leader_velocity/time").c_str() , time);
	ros::param::set( (ros_ns + "/shared_params/leader_velocity/linear/x").c_str() , leader_gps_vel.twist.linear.x );
	ros::param::set( (ros_ns + "/shared_params/leader_velocity/linear/y").c_str() , leader_gps_vel.twist.linear.y );
	ros::param::set( (ros_ns + "/shared_params/leader_velocity/linear/z").c_str() , leader_gps_vel.twist.linear.z );
	ros::param::set( (ros_ns + "/shared_params/leader_velocity/angular/x").c_str() , leader_gps_vel.twist.angular.x );
	ros::param::set( (ros_ns + "/shared_params/leader_velocity/angular/y").c_str() , leader_gps_vel.twist.angular.y );
	ros::param::set( (ros_ns + "/shared_params/leader_velocity/angular/z").c_str() , leader_gps_vel.twist.angular.z );

}

void follower_state_cb(const mavros_msgs::State::ConstPtr& msg) {

  	mavros_msgs::State follower_state = *msg;
  	ros::param::set( (ros_ns + "/shared_params/follower_state/mode").c_str() , follower_state.mode);
  	ros::param::set( (ros_ns + "/shared_params/follower_state/armed").c_str() , follower_state.armed);
  	ros::param::set( (ros_ns + "/shared_params/leader_state/connected").c_str() , follower_state.connected);
}

void follower_gps_pos_cb(const sensor_msgs::NavSatFix::ConstPtr& msg){

	sensor_msgs::NavSatFix follower_gps_pos = *msg;
	std::string secs = std::to_string(follower_gps_pos.header.stamp.sec);
	std::string nsecs = std::to_string(follower_gps_pos.header.stamp.nsec);
	std::string totalTime = (secs + "." + nsecs).c_str();
	std::string::size_type sz; 

	double time = std::stod (totalTime,&sz);

	ros::param::set( (ros_ns + "/shared_params/follower_position/time").c_str() , time );
	ros::param::set( (ros_ns + "/shared_params/follower_position/latitude").c_str() , follower_gps_pos.latitude );
	ros::param::set( (ros_ns + "/shared_params/follower_position/longitude").c_str() ,follower_gps_pos.longitude );
	ros::param::set( (ros_ns + "/shared_params/follower_position/altitude").c_str() , follower_gps_pos.altitude );

}

int wait4connect(){

	ROS_INFO("Waiting for FCU connection");
	// wait for FCU connection
	int connected;
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

// void updateStreamRate(){ //https://answers.ros.org/question/276975/mavros-set-offboard-mode/
// 	mavros_msgs::StreamRate streamRate;

// 	streamRate.request.stream_id = 0;
// 	streamRate.request.message_rate = 100;
// 	streamRate.request.on_off = 1;
	
// 	if (true == stream_rate_client.call(streamRate))
// 	{
// 	    ROS_INFO("OK. Stream rate set");
// 	}
// 	else
// 	{
// 	    ROS_INFO("Failed to call service: stream rate");
// 	}


// }

int main(int argc, char** argv) {
	//leader subscribers
	ros::Subscriber leaderSubscriber_state;
	ros::Subscriber leaderSubscriber_gps_pos;
	ros::Subscriber leaderSubscriber_gps_vel;

	//follower subscribers
	ros::Subscriber followerSubscriber_state;
	ros::Subscriber followerSubscriber_gps_pos;
	

	mavros_msgs::StreamRate streamRate;

	ros::init(argc, argv, "follower_sub2");	//here we name the node gnc_node
	
	ros::NodeHandle nhsub("~");

	nhsub.getParam("namespace", ros_ns);

	ros::Rate rate(20);

	// streamRate.request.stream_id = 0;
	// streamRate.request.message_rate = 100;
	// streamRate.request.on_off = 1;
	

	wait4connect();
	
	// ROS_INFO(" %s ", ros_ns.c_str());

	// Recieve leader's data: 
	leaderSubscriber_state = nhsub.subscribe<mavros_msgs::State>( "/drone1/mavros/state", 1, leader_state_cb);
	leaderSubscriber_gps_pos = nhsub.subscribe<sensor_msgs::NavSatFix>("/drone1/mavros/global_position/raw/fix", 1, leader_gps_pos_cb); //, queue_size=1,buff_size=2**24
	leaderSubscriber_gps_vel = nhsub.subscribe<geometry_msgs::TwistStamped>("/drone1/mavros/global_position/raw/gps_vel", 1, leader_gps_vel_cb);
	// Recieve follower's data: 
	followerSubscriber_state = nhsub.subscribe<mavros_msgs::State>( (ros_ns +"/mavros/state").c_str(), 1, follower_state_cb);
	followerSubscriber_gps_pos = nhsub.subscribe<sensor_msgs::NavSatFix>((ros_ns +"/mavros/global_position/raw/fix").c_str(), 1, follower_gps_pos_cb); //, queue_size=1,buff_size=2**24
	// stream_rate_client = nhsub.serviceClient<mavros_msgs::StreamRate>((ros_ns+"mavros/set_stream_rate").c_str(),1);
	// stream_rate_client_leader = nhsub.serviceClient<mavros_msgs::StreamRate>("/drone1/mavros/set_stream_rate",1);
	
	while(ros::ok()){

		// stream_rate_client.call(streamRate);

		// if(ros_ns == "/drone2") stream_rate_client_leader.call(streamRate);

		ros::spinOnce();
		rate.sleep();
	}
	// return 0;
}