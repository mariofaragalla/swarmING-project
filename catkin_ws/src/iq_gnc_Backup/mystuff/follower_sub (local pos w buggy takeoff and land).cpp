// https://youtu.be/defn-gVdQEU?list=PLy9nLDKxDN683GqAiJ4IVLquYBod_2oA6

#include <gnc_functions.hpp>		//add all functions that are associated with the control api
//include API 

// drone1_pose_g;

float drone1_x;
float drone1_y;
float drone1_z;
float drone1_psi;
float currPos_x;
float currPos_y;
float currPos_z;

mavros_msgs::State drone1_state;

bool flag = false;
bool land_flag = false;
bool takeoff_flag = false;

std::string ros_namespace;

void drone1_pos_cb(const geometry_msgs::PoseStamped::ConstPtr& msg) {

	geometry_msgs::PoseStamped drone1_pose_g = *msg;
	drone1_x = drone1_pose_g.pose.position.x;
	drone1_y = drone1_pose_g.pose.position.y;
	drone1_z = drone1_pose_g.pose.position.z;
	currPos_z = current_pose_g.pose.pose.position.z;

	if (currPos_z <= 0.1 && !takeoff_flag && !land_flag && drone1_z >= 0.1) {

		takeoff(0.5);

		ROS_INFO("Taking off to: %f from %f", drone1_z , currPos_z);
		// while(currPos_z < drone1_z)	{
				
		// 	ROS_INFO("Taking off to: %f from %f", drone1_z , currPos_z);
				
		// 	currPos_z = current_pose_g.pose.pose.position.z;

		// }
		// ros::Duration(0.01).sleep();

		takeoff_flag = true;
	
	} else if(takeoff_flag || currPos_z > 0.1){

		set_destination(drone1_x,drone1_y,drone1_z, 0);
		ROS_INFO("%s : Drone1 local position-> x: %f , y: %f, z: %f || currPos-> x: %f, y: %f ,z: %f" , ros_namespace.c_str(), drone1_x, drone1_y, drone1_z, currPos_x, currPos_y, currPos_z);

	}

}

void drone1_state_cb(const mavros_msgs::State::ConstPtr& msg) {

	drone1_state = *msg;

	if (drone1_state.mode == "LAND"){
			
			
			if(!land_flag){
			
				ROS_INFO("Landing");
				land();
				land_flag = true;
				takeoff_flag = false;
			
			}
		
		}
	
	if (drone1_state.mode == "GUIDED" && land_flag){

		set_mode("GUIDED");

		land_flag = false;
	
	} 
}

int main(int argc, char** argv) {
	//initialize ros 
	//Every time you have to run a ros node you must add these 2 functions
	ros::init(argc, argv, "gnc_node");	//here we name the node gnc_node
	ros::NodeHandle gnc_node("~");	// the node handle is the way that you can access the communications within ros
	
	
	//initialize control publisher/subscribers
	//This function takes our ros node handle as an input and initializes subcribers that will collect the necessary information from Aurdopilot.
	init_publisher_subscriber(gnc_node);	


	ros::Subscriber drone1Pos;
	ros::Subscriber drone1State;
	
	if(!flag) {

		// std::string ros_namespace;
	  	
	  	gnc_node.getParam("namespace", ros_namespace);
	  	// wait for FCU connection  (loop until the node can communicate with the drone's flight control unit (FCU))
		wait4connect();

		//wait for used to switch to mode GUIDED (hold the program until the pilot executes the program by switching the FCU flight mode to GUIDED)
		// wait4start();
		set_mode("GUIDED");

		//create local reference frame 
		initialize_local_frame();

		// takeoff(3);

		flag = true;
	}

	//specify control loop rate. We recommend a low frequency to not over load the FCU with messages. Too many messages will cause the drone to be sluggish

		//read message from topic drone1//mavros/local_position/pose
	if(!check_waypoint_reached(.3)){
			// ROS_INFO("this is node %s", ros_namespace.c_str());
	   		drone1Pos = gnc_node.subscribe<geometry_msgs::PoseStamped>("/drone1/mavros/local_position/pose", 1, drone1_pos_cb);
	   		drone1State = gnc_node.subscribe<mavros_msgs::State>( "/drone1/mavros/state", 1, drone1_state_cb);
	
	} else {
		
		currPos_x = current_pose_g.pose.pose.position.x;
		currPos_y = current_pose_g.pose.pose.position.y;
		currPos_z = current_pose_g.pose.pose.position.z;
		// ROS_INFO("%s : Drone1 local position: x: %f , y: %f, z: %f", ros_namespace.c_str(), drone1_x, drone1_y, drone1_z);
		// ROS_INFO("%s current position: x: %f , y: %f, z: %f", ros_namespace.c_str(), currPos_x, currPos_y, currPos_z);
	
	}
		// for psi check pose_cb in gnc_functions
				
	ros::spin();
		
	return 0;
}
