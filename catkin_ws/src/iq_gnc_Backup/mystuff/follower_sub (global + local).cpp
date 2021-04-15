// https://youtu.be/defn-gVdQEU?list=PLy9nLDKxDN683GqAiJ4IVLquYBod_2oA6

#include <gnc_functions.hpp>		//add all functions that are associated with the control api
//include API 

// drone1_pose_g;

float drone1_x;
float prev_drone1_x;
float drone1_y;
float drone1_z;

float drone1_q0;
float drone1_q1;
float drone1_q2;
float drone1_q3;
float drone1_psi;

float currPos_x;
float currPos_y;
float currPos_z;

float global_drone1_x;
float global_drone1_y;
float global_drone1_z;
// float global_currPos_x;
// float global_currPos_y;
// float global_currPos_z;

mavros_msgs::State drone1_state;
geometry_msgs::PoseStamped drone1_pose_g;


bool flag = false;
bool land_flag = false;
bool takeoff_flag = false;
bool guided_flag = false;
bool altitude_reached = false;

std::string ros_namespace;

uint8_t prob;  

void drone1_pos_cb(const geometry_msgs::PoseStamped::ConstPtr& msg) {

	drone1_pose_g = *msg;
	drone1_x = drone1_pose_g.pose.position.x;
	drone1_y = drone1_pose_g.pose.position.y;
	drone1_z = drone1_pose_g.pose.position.z;

	drone1_q0 = drone1_pose_g.pose.orientation.w;
	drone1_q1 = drone1_pose_g.pose.orientation.x;
	drone1_q2 = drone1_pose_g.pose.orientation.y;
	drone1_q3 = drone1_pose_g.pose.orientation.z;

	drone1_psi = atan2((2*(drone1_q0*drone1_q3 + drone1_q1*drone1_q2)), (1 - 2*(pow(drone1_q2,2) + pow(drone1_q3,2))));

	currPos_z = current_pose_g.pose.pose.position.z;


	// ROS_INFO("%s : Drone1 z: %f || currPos z: %f" , ros_namespace.c_str(), drone1_z, currPos_z);
		
	if((takeoff_flag && drone1_z > 0.5) && current_state_g.mode == "GUIDED" && !altitude_reached){	
		set_destination(drone1_x,drone1_y,drone1_z, 0);
		// ROS_INFO("%s : Drone1 local position-> x: %f , y: %f, z: %f || currPos-> x: %f, y: %f ,z: %f" , ros_namespace.c_str(), drone1_x, drone1_y, drone1_z, currPos_x, currPos_y, currPos_z);
		ROS_INFO("%s : Drone1 z: %f || currPos z: %f" , ros_namespace.c_str(), drone1_z, currPos_z);
		if(abs(drone1_z - currPos_z) < 0.5 && drone1_z >1.5){
			altitude_reached = true;
			prev_drone1_x = drone1_x;
		}
	}

	// if(altitude_reached){
	// 	ROS_INFO("%s : prev_drone1_x: %f, drone1_x: %f , diff: %f" , ros_namespace.c_str(), prev_drone1_x, drone1_x, abs(drone1_x - prev_drone1_x));
	// 	if(abs(drone1_x - prev_drone1_x) >0.011){
	// 		set_destination(drone1_x,drone1_y,drone1_z, 0);
	// 		prev_drone1_x = drone1_x;
	// 	}
	// }


}


void drone1_state_cb(const mavros_msgs::State::ConstPtr& msg) {

	drone1_state = *msg;

	if (current_state_g.mode == "LAND" || current_state_g.mode == "STABILIZE"){
	
		if(drone1_state.mode == "GUIDED"){
		
		   set_mode("GUIDED");
		   if(drone1_z > 0.5){
		   		takeoff(drone1_z);
		   		takeoff_flag = true;
		   	}
		   guided_flag = true;
		
		}

	} else if (current_state_g.mode == "GUIDED") {
		
		if(drone1_state.mode == "LAND"){
		
			land();
			takeoff_flag = false;
			guided_flag = false;
			altitude_reached = false;

		} else if (drone1_state.mode == "GUIDED"){

			if(currPos_z > 0.5){
				takeoff_flag = true;
			}
			else if(currPos_z < 0.5 && drone1_z > 0.5){
				takeoff(drone1_z);
				takeoff_flag = true;
			}	   	
		   	guided_flag = true;

		}
	} 
	// else if(drone1_state.mode == "GUIDED"){
		 
	// 	   set_mode("GUIDED");
	// 	   guided_flag = true;

	// 	}
	
}

void drone1_globalPos_cb(const nav_msgs::Odometry::ConstPtr& msg){

	nav_msgs::Odometry drone1_globalPos_g = *msg;
	
	global_drone1_x = drone1_globalPos_g.pose.pose.position.x;
	global_drone1_y = drone1_globalPos_g.pose.pose.position.y;
	global_drone1_z = drone1_globalPos_g.pose.pose.position.z;
	
	currPos_x = current_pose_g.pose.pose.position.x;
	currPos_y = current_pose_g.pose.pose.position.y;
	currPos_z = current_pose_g.pose.pose.position.z;

	// global_drone1_x
	if(altitude_reached){

		if(prob % 2 == 0) {
			// set_destination(global_drone1_x,global_drone1_y,global_drone1_z, 0);
			// set_destination(global_drone1_x,global_drone1_y,global_drone1_z, 0);
			set_destination(global_drone1_x,global_drone1_y,global_drone1_z, 1.7);
		}
	}

	prob++;

	if(altitude_reached){
		ROS_INFO("Drone1 global position-> x: %f , y: %f, z: %f , psi: %f" , global_drone1_x, global_drone1_y, global_drone1_z, drone1_psi);
		ROS_INFO("%s -> global position:  x: %f , y: %f, z: %f , psi: %f" , ros_namespace.c_str(), currPos_x, currPos_y, currPos_z, get_current_heading());
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
	ros::Subscriber drone1_globalPos;
	
	if(!flag) {

		// std::string ros_namespace;
	  	
	  	gnc_node.getParam("namespace", ros_namespace);
	  	// wait for FCU connection  (loop until the node can communicate with the drone's flight control unit (FCU))
		wait4connect();

		//wait for used to switch to mode GUIDED (hold the program until the pilot executes the program by switching the FCU flight mode to GUIDED)
		// wait4start();
		// set_mode("GUIDED");

		//create local reference frame 
		initialize_local_frame();

		// takeoff(3);

		flag = true;
	}

	//specify control loop rate. We recommend a low frequency to not over load the FCU with messages. Too many messages will cause the drone to be sluggish

		//read message from topic drone1//mavros/local_position/pose


		currPos_x = current_pose_g.pose.pose.position.x;
		currPos_y = current_pose_g.pose.pose.position.y;
		currPos_z = current_pose_g.pose.pose.position.z;
	
	if(!check_waypoint_reached(.3)){
			// ROS_INFO("this is node %s", ros_namespace.c_str());
	   		drone1Pos = gnc_node.subscribe<geometry_msgs::PoseStamped>("/drone1/mavros/local_position/pose", 10, drone1_pos_cb);
	   		drone1State = gnc_node.subscribe<mavros_msgs::State>( "/drone1/mavros/state", 10, drone1_state_cb);
	   		drone1_globalPos = gnc_node.subscribe<nav_msgs::Odometry>( "/drone1/mavros/global_position/local", 10, drone1_globalPos_cb);

	
	} 

		// ROS_INFO("%s : Drone1 local position: x: %f , y: %f, z: %f", ros_namespace.c_str(), drone1_x, drone1_y, drone1_z);
		// ROS_INFO("%s current position: x: %f , y: %f, z: %f", ros_namespace.c_str(), currPos_x, currPos_y, currPos_z);
	
		// for psi check pose_cb in gnc_functions
	// prob++;
				
	ros::spin();
		
	return 0;
}
