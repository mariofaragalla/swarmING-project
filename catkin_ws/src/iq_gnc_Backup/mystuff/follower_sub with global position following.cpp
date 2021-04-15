// https://youtu.be/defn-gVdQEU?list=PLy9nLDKxDN683GqAiJ4IVLquYBod_2oA6

#include <gnc_functions.hpp>		//add all functions that are associated with the control api
// #include <geographic_msgs/GeoPoseStamped.hpp>
// #include <geographic_msgs/GeoPoseStamped.h>
// #include <mavros_msgs/GlobalPositionTarget.h>
// #include <sensor_msgs/NavSatFix.h>
// geographic_msgs/GeoPoseStamped.h
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
nav_msgs::Odometry current_global_position;
mavros_msgs::GlobalPositionTarget curr_gps_g;

geometry_msgs::PoseStamped current_global_position_2;
geometry_msgs::PoseStamped prev_drone1_global_position;
geometry_msgs::PoseStamped drone1_global_position;

geometry_msgs::PoseStamped error_wp_arr[100];
geometry_msgs::PoseStamped error_wp;
geometry_msgs::PoseStamped  prev_error_wp;
// geometry_msgs::PoseStamped diff_bet_currGP&drone1GP;

geometry_msgs::PoseStamped base_difference_wp;


bool flag = false;
bool land_flag = false;
bool takeoff_flag = false;
bool guided_flag = false;
bool altitude_reached = false;
bool global_position_received = false;
bool isMapOriginSet = false;
bool isMapOriginInitialized = false;
bool khara = false;

std::string ros_namespace_l;

ros::Publisher current_globalPos;

// ros::Publisher curr_gps_pub_1;

uint8_t prob; 
uint8_t habd;  
// float i = 0;

void drone1_pos_cb(const geometry_msgs::PoseStamped::ConstPtr& msg) {

	drone1_pose_g = *msg;
	drone1_x = drone1_pose_g.pose.position.x;
	drone1_y = drone1_pose_g.pose.position.y;
	drone1_z = drone1_pose_g.pose.position.z;

	// drone1_q0 = drone1_pose_g.pose.orientation.w;
	// drone1_q1 = drone1_pose_g.pose.orientation.x;
	// drone1_q2 = drone1_pose_g.pose.orientation.y;
	// drone1_q3 = drone1_pose_g.pose.orientation.z;

	// drone1_psi = atan2((2*(drone1_q0*drone1_q3 + drone1_q1*drone1_q2)), (1 - 2*(pow(drone1_q2,2) + pow(drone1_q3,2))));

	currPos_z = current_pose_g.pose.pose.position.z;


	// ROS_INFO("%s : Drone1 z: %f || currPos z: %f" , ros_namespace_l.c_str(), drone1_z, currPos_z);
		
	if((takeoff_flag && curr_gps_g.altitude  > 604) && current_state_g.mode == "GUIDED" && !altitude_reached){	
		set_destination(drone1_x,drone1_y,drone1_z, 0);
		// ROS_INFO("%s : Drone1 local position-> x: %f , y: %f, z: %f || currPos-> x: %f, y: %f ,z: %f" , ros_namespace_l.c_str(), drone1_x, drone1_y, drone1_z, currPos_x, currPos_y, currPos_z);
		ROS_INFO("%s : Drone1 z: %f || currPos z: %f" , ros_namespace_l.c_str(), drone1_z, currPos_z);
		if(abs(drone1_z - currPos_z) < 0.5 && drone1_z >1.5){
			altitude_reached = true;
			prev_drone1_x = drone1_x;
		}
	}

	// if(altitude_reached){
	// 	ROS_INFO("%s : prev_drone1_x: %f, drone1_x: %f , diff: %f" , ros_namespace_l.c_str(), prev_drone1_x, drone1_x, abs(drone1_x - prev_drone1_x));
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
		   // if(curr_gps_g.altitude > 604 && !takeoff_flag){
		   // 		takeoff(drone1_z);
		   // 		takeoff_flag = true;
		   // 	}
		   guided_flag = true;
		
		}

	} else if (current_state_g.mode == "GUIDED") {
		
		if(drone1_state.mode == "LAND"){
		
			land();
			takeoff_flag = false;
			guided_flag = false;
			altitude_reached = false;

		} else if (drone1_state.mode == "GUIDED"){

			
			// if(curr_gps_g.altitude > 604 && !takeoff_flag){
			// 	takeoff(drone1_z);
			// 	takeoff_flag = true;
			// }	   	
		   	guided_flag = true;

		}

	}
	// else if(drone1_state.mode == "GUIDED"){
		 
	// 	   set_mode("GUIDED");
	// 	   guided_flag = true;

	// 	}
	
}

/*
void drone1_globalPosSub_cb(const nav_msgs::Odometry::ConstPtr& msg){

	nav_msgs::Odometry drone1_globalPos_g = *msg;
	
	global_drone1_x = drone1_globalPos_g.pose.pose.position.x;
	global_drone1_y = drone1_globalPos_g.pose.pose.position.y;
	global_drone1_z = drone1_globalPos_g.pose.pose.position.z;
	
	currPos_x = current_pose_g.pose.pose.position.x;
	currPos_y = current_pose_g.pose.pose.position.y;
	currPos_z = current_pose_g.pose.pose.position.z;

	// global_drone1_x
	if(altitude_reached){

		// if(prob % 2 == 0) {
			// set_destination(global_drone1_x,global_drone1_y,global_drone1_z, 0);
			// set_destination(global_drone1_x,global_drone1_y,global_drone1_z, 0);
			// set_destination(global_drone1_x,global_drone1_y,global_drone1_z, 1.7);
			// current_global_position.pose.pose.position.x = global_drone1_x;
			// current_global_position.pose.pose.position.y = global_drone1_y;
			// current_global_position.pose.pose.position.z = global_drone1_z;

			// current_global_position.pose.pose.orientation.w = 0;
			// current_global_position.pose.pose.orientation.x = 0;
			// current_global_position.pose.pose.orientation.y = 0;
			// current_global_position.pose.pose.orientation.z = 0;

			current_globalPos.publish(drone1_globalPos_g);
		// }
	}

	prob++;

	if(altitude_reached){
		ROS_INFO("Drone1 global position-> x: %f , y: %f, z: %f , psi: %f" , global_drone1_x, global_drone1_y, global_drone1_z, drone1_psi);
		ROS_INFO("%s -> global position:  x: %f , y: %f, z: %f , psi: %f" , ros_namespace_l.c_str(), currPos_x, currPos_y, currPos_z, get_current_heading());
	}
}
*/

void drone1_gpsSub_cb(const sensor_msgs::NavSatFix::ConstPtr& msg){

	// geometry_msgs::PoseStamped base_difference_wp;
	sensor_msgs::NavSatFix drone1_gps_g = *msg;
	// global_position_received = true;
	ROS_INFO("Got GPS global position: [%.2f, %.2f, %.2f]", msg->latitude, msg->longitude, msg->altitude);
	
	//if drone1 is in Stabilize mode (at the beginning) and gps sensor is giving reading above sea level
	if(drone1_state.mode == "STABILIZE" && drone1_gps_g.altitude != 0 && !isMapOriginSet){	
		set_map_origin(drone1_gps_g.latitude, drone1_gps_g.longitude, drone1_gps_g.altitude);
		
		drone1_global_position = get_global_position(drone1_gps_g);
		current_global_position_2 = get_global_position();
		base_difference_wp = difference_bet_2_wps(drone1_global_position, current_global_position_2); 
		
		ROS_INFO("drone1_global_position: %f %f %f", drone1_global_position.pose.position.x , drone1_global_position.pose.position.y, drone1_global_position.pose.position.z);
		ROS_INFO("current_global_position_2: %f %f %f", current_global_position_2.pose.position.x , current_global_position_2.pose.position.y, current_global_position_2.pose.position.z);
		ROS_INFO("base difference_wp: %f %f %f", base_difference_wp.pose.position.x , base_difference_wp.pose.position.y, base_difference_wp.pose.position.z);
		
		isMapOriginSet = true;
	}
	
	if(isMapOriginSet){

		
		
		drone1_global_position = get_global_position(drone1_gps_g);
		ROS_INFO("drone1 LLA2XYZ: [%.2f, %.2f, %.2f]", drone1_global_position.pose.position.x, drone1_global_position.pose.position.y, drone1_global_position.pose.position.z);
		current_global_position_2 = get_global_position();
		ROS_INFO("%s LLA2XYZ: [%.2f, %.2f, %.2f]",  ros_namespace_l.c_str(), current_global_position_2.pose.position.x, current_global_position_2.pose.position.y, current_global_position_2.pose.position.z);
		
		if(drone1_global_position.pose.position.z > 0.5){
			ROS_INFO("diff_z= %f ", abs(drone1_global_position.pose.position.z - prev_drone1_global_position.pose.position.z));
			if(abs(drone1_global_position.pose.position.z - prev_drone1_global_position.pose.position.z) <= 0.01){

				if(!takeoff_flag){

					takeoff(drone1_global_position.pose.position.z);
					int i = 0;
					
					while(current_global_position_2.pose.position.z < 0.5 && i<1000){
					
							ROS_INFO("Stop everything until I takeoff");
						
						i++;
					}
					takeoff_flag = true;
					if(current_global_position_2.pose.position.z > 0.5){
						altitude_reached = true;
					} else {
						takeoff_flag = false;
						altitude_reached = false;
					}
					
					
				}

			}
		}

		if(altitude_reached){

			ROS_INFO("Start following");
			if(ros_namespace_l == "/drone2" && !khara){
				ROS_INFO((ros_namespace_l).c_str());
				go_to_goalPos(-2,-2,3);
			}
			if(ros_namespace_l == "/drone3" && !khara){
				ROS_INFO((ros_namespace_l).c_str());

				go_to_goalPos(-2,2,3);

				khara = true;

				/*
				// move in circle roughly simple example
				go_to_goalPos(3,0,3);
				ros::Duration(1).sleep();
				go_to_goalPos(2,-sqrt(5),3);
				ros::Duration(1).sleep();
				go_to_goalPos(1,-sqrt(8),3);
				ros::Duration(1).sleep();
				go_to_goalPos(0,-3,3);
				ros::Duration(1).sleep();
				go_to_goalPos(-2,-sqrt(5),3);
				ros::Duration(1).sleep();
				go_to_goalPos(-1,-sqrt(8),3);
				ros::Duration(1).sleep();
				go_to_goalPos(-3,0,3);
				ros::Duration(1).sleep();
				go_to_goalPos(-2,sqrt(5),3);
				ros::Duration(1).sleep();
				go_to_goalPos(-1,sqrt(8),3);
				ros::Duration(1).sleep();
				go_to_goalPos(0,3,3);
				ros::Duration(1).sleep();
				go_to_goalPos(2,sqrt(5),3);
				ros::Duration(1).sleep();
				go_to_goalPos(1,sqrt(8),3);
				ros::Duration(1).sleep();
				go_to_goalPos(3,0,3);
				*/
			}
			
			// i +=1;

			geometry_msgs::PoseStamped difference_wp = difference_bet_2_wps(drone1_global_position, current_global_position_2); 

			// difference_wp - base_difference_wp;
			error_wp = difference_bet_2_wps(difference_wp, base_difference_wp);

			// ROS_INFO("difference_wp: %f %f %f", difference_wp.pose.position.x , difference_wp.pose.position.y, difference_wp.pose.position.z);
			// ROS_INFO("base difference_wp: %f %f %f", base_difference_wp.pose.position.x , base_difference_wp.pose.position.y, base_difference_wp.pose.position.z);
			// ROS_INFO("error: %f %f %f", error_wp.pose.position.x , error_wp.pose.position.y, error_wp.pose.position.z);


			difference_wp= difference_bet_2_wps(drone1_global_position, current_global_position_2); 

			error_wp = difference_bet_2_wps(difference_wp, base_difference_wp);



			// if(habd == 100){
				ROS_INFO("habd: %d", habd);
				error_wp_arr[habd] = error_wp;
				go_to_goalPos(current_global_position_2.pose.position.x + error_wp_arr[1].pose.position.x,  current_global_position_2.pose.position.y +  error_wp_arr[1].pose.position.y ,  current_global_position_2.pose.position.z + error_wp_arr[1].pose.position.z);
				
				if(habd == 1){
					habd = 0;
				}
			// 	habd = 0;
			// }
			habd++;
			// ros::Duration(0.2).sleep();

			ROS_INFO("error_x: %f", error_wp.pose.position.x);

					// if (error_wp.pose.position.x < 0.02) break;
	
			/*
			while(abs(error_wp.pose.position.x) >= 0.02 || abs(error_wp.pose.position.y) >= 0.02 || abs(error_wp.pose.position.z) >= 0.02){

				set_destination(error_wp.pose.position.x, error_wp.pose.position.y,  error_wp.pose.position.z, 0);
				
				if(error_wp.pose.position.x > 0){
					error_wp.pose.position.x -= 0.01;	
				}
				if(error_wp.pose.position.y > 0){
					error_wp.pose.position.y -= 0.01;	
				}
				if(error_wp.pose.position.z > 0){
					error_wp.pose.position.z -= 0.01;	
				}


				if(error_wp.pose.position.x < 0){
					error_wp.pose.position.x += 0.01;	
				}
				if(error_wp.pose.position.y < 0){
					error_wp.pose.position.y += 0.01;	
				}
				if(error_wp.pose.position.z < 0){
					error_wp.pose.position.z += 0.01;	
				}

				ROS_INFO("error: %f %f %f", error_wp.pose.position.x , error_wp.pose.position.y, error_wp.pose.position.z);

				// local_pos_pub.publish(error_wp);

			}
			*/

			

		}

		prev_drone1_global_position = drone1_global_position;
		prev_error_wp = error_wp;

	
	}	
	    // drone1_gps_g.latitude = 42.3005867;
	    // drone1_gps_g.longitude = -6.73246288;
	    // drone1_gps_g.altitude = 288;

		

		// curr_gps_g.latitude = drone1_gps_g.latitude;
		// curr_gps_g.longitude = drone1_gps_g.longitude;
		// curr_gps_g.altitude = drone1_gps_g.altitude;
		// curr_gps_g.header = drone1_gps_g.header;
		
	// if(altitude_reached){
	// 	// curr_gps_pub.publish(curr_gps_g);
		
	// 	// ROS_INFO("Current gps: ");
	// }
}

// void drone1_globalPosPub_cb(const nav_msgs::Odometry::ConstPtr& msg){
// }



int main(int argc, char** argv) {
	//initialize ros 
	//Every time you have to run a ros node you must add these 2 functions
	ros::init(argc, argv, "gnc_node");	//here we name the node gnc_node
	ros::NodeHandle gnc_node("~");	// the node handle is the way that you can access the communications within ros
	
	ros::Rate rate(10);
	
	// ros::Time time = ros::Time::now();
	// curr_gps_g.header.stamp = time;

	//Wait a duration of one second.
	ros::Duration d = ros::Duration(1, 0);
	d.sleep();
	//initialize control publisher/subscribers
	//This function takes our ros node handle as an input and initializes subcribers that will collect the necessary information from Aurdopilot.
	init_publisher_subscriber(gnc_node);	


	ros::Subscriber drone1Pos;
	ros::Subscriber drone1State;
	ros::Subscriber drone1_globalPos;
	ros::Subscriber drone1_gps_sub;
	// ros::Publisher goal_pos_pub;

	if(!flag) {

		// std::string ros_namespace_l;
	  	
	  	gnc_node.getParam("namespace", ros_namespace_l);
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


		// currPos_x = current_pose_g.pose.pose.position.x;
		// currPos_y = current_pose_g.pose.pose.position.y;
		// currPos_z = current_pose_g.pose.pose.position.z;
	
	// if(!check_waypoint_reached(.3)){
			// ROS_INFO("this is node %s", ros_namespace_l.c_str());

	   		// drone1Pos = gnc_node.subscribe<geometry_msgs::PoseStamped>("/drone1/mavros/local_position/pose", 10, drone1_pos_cb);
	   		drone1State = gnc_node.subscribe<mavros_msgs::State>( "/drone1/mavros/state", 10, drone1_state_cb);
	   		// drone1_globalPos = gnc_node.subscribe<nav_msgs::Odometry>( "/drone1/mavros/global_position/local", 10, drone1_globalPosSub_cb);
	   		// current_globalPos = gnc_node.advertise<nav_msgs::Odometry>((ros_namespace_l + "/mavros/global_position/local").c_str(), 10);

			drone1_gps_sub = gnc_node.subscribe<sensor_msgs::NavSatFix>("/drone1/mavros/global_position/raw/fix", 20, drone1_gpsSub_cb);
			// drone1_gps_sub = gnc_node.subscribe<sensor_msgs::NavSatFix>("/rostopic_148328_1612046420269", 10, drone1_gpsSub_cb);
	   		// drone1_gps_sub = gnc_node.subscribe<mavros_msgs::GlobalPositionTarget>("/drone1/mavros/setpoint_position/global", 10, drone1_gpsSub_cb);
	   		// drone1_gps_sub = gnc_node.subscribe<geographic_msgs::GeoPoseStamped>("/drone1/mavros/setpoint_position/global", 10, drone1_gpsSub_cb);
	   		// curr_gps_pub_1 = gnc_node.advertise<mavros_msgs::GlobalPositionTarget>("mavros/setpoint_position/global", 10);
	   		// curr_gps_pub = gnc_node.advertise<mavros_msgs::GlobalPositionTarget>((ros_namespace_l +"mavros/setpoint_position/global").c_str(), 10);
	   		// curr_gps_pub = gnc_node.advertise<geographic_msgs::GeoPoseStamped>((ros_namespace_l +"mavros/setpoint_position/global").c_str(), 10);
	   		// goal_pos_pub = gnc_node.advertise <mavros_msgs::GlobalPositionTarget> ("mavros/setpoint_position/global", 10);
		
	// } 

		// ROS_INFO("%s : Drone1 local position: x: %f , y: %f, z: %f", ros_namespace_l.c_str(), drone1_x, drone1_y, drone1_z);
		// ROS_INFO("%s current position: x: %f , y: %f, z: %f", ros_namespace_l.c_str(), currPos_x, currPos_y, currPos_z);
	
		// for psi check pose_cb in gnc_functions
	// prob++;
			// if(altitude_reached){

				
	ros::spin();
		
	return 0;
}


