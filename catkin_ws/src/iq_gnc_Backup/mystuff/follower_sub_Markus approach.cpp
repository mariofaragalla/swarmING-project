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

geometry_msgs::TwistStamped drone1_gps_vel_g;
geometry_msgs::TwistStamped curr_gps_vel_g;

geometry_msgs::PoseStamped posError_wp_arr[100];
geometry_msgs::PoseStamped posError_wp;
geometry_msgs::PoseStamped  prev_posError_wp;
// geometry_msgs::PoseStamped diff_bet_currGP&drone1GP;


geometry_msgs::PoseStamped desired_posDiff_wp;
geometry_msgs::TwistStamped velError_tw;
geometry_msgs::TwistStamped velError_arr[2];
geometry_msgs::Vector3Stamped Fext_arr[2];

geometry_msgs::TwistStamped vel ;
geometry_msgs::TwistStamped filter_vel[5];

bool flag = false;
bool land_flag = false;
bool takeoff_flag = false;
bool guided_flag = false;
bool altitude_reached = false;
bool global_position_received = false;
bool isMapOriginSet = false;
bool isMapOriginInitialized = false;
bool drone2_first_pos = false;
bool drone3_first_pos = false;


std::string ros_namespace_l;

ros::Publisher current_globalPos;
float my_time[2];
// ros::Time time = ros::Time::now();
// ros::Publisher curr_gps_pub_1;

uint8_t prob; 
uint8_t sampleCount;
uint8_t filter_smplCount;    
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
	
}


void drone1_gpsSub_cb(const sensor_msgs::NavSatFix::ConstPtr& msg){

	// geometry_msgs::PoseStamped desired_posDiff_wp;
	sensor_msgs::NavSatFix drone1_gps_g = *msg;
	// global_position_received = true;
	ROS_INFO_ONCE("Got GPS global position: [%.2f, %.2f, %.2f]", msg->latitude, msg->longitude, msg->altitude);
	
	//if drone1 is in Stabilize mode (at the beginning) and gps sensor is giving reading above sea level
	if(drone1_state.mode == "STABILIZE" && drone1_gps_g.altitude != 0 && !isMapOriginSet){	
		set_map_origin(drone1_gps_g.latitude, drone1_gps_g.longitude, drone1_gps_g.altitude);
		
		drone1_global_position = get_global_position(drone1_gps_g);
		current_global_position_2 = get_global_position();
		desired_posDiff_wp = difference_bet_2_wps(drone1_global_position, current_global_position_2); 
		
		// ROS_INFO("drone1_global_position: %f %f %f", drone1_global_position.pose.position.x , drone1_global_position.pose.position.y, drone1_global_position.pose.position.z);
		// ROS_INFO("current_global_position_2: %f %f %f", current_global_position_2.pose.position.x , current_global_position_2.pose.position.y, current_global_position_2.pose.position.z);
		// ROS_INFO("desired posDiff_wp: %f %f %f", desired_posDiff_wp.pose.position.x , desired_posDiff_wp.pose.position.y, desired_posDiff_wp.pose.position.z);
		
		isMapOriginSet = true;
	}
	
	if(isMapOriginSet){
		
		drone1_global_position = get_global_position(drone1_gps_g);
		// ROS_INFO("drone1 LLA2XYZ: [%.2f, %.2f, %.2f]", drone1_global_position.pose.position.x, drone1_global_position.pose.position.y, drone1_global_position.pose.position.z);
		current_global_position_2 = get_global_position();
		// ROS_INFO("%s LLA2XYZ: [%.2f, %.2f, %.2f]",  ros_namespace_l.c_str(), current_global_position_2.pose.position.x, current_global_position_2.pose.position.y, current_global_position_2.pose.position.z);
		
		if(drone1_global_position.pose.position.z > 0.5){
			ROS_INFO_ONCE("diff_z= %f ", abs(drone1_global_position.pose.position.z - prev_drone1_global_position.pose.position.z));
			if(abs(drone1_global_position.pose.position.z - prev_drone1_global_position.pose.position.z) <= 0.01){

				if(!takeoff_flag){

					takeoff(drone1_global_position.pose.position.z);
					int i = 0;
					
					while(current_global_position_2.pose.position.z < 0.5 && i<1000){
					
							ROS_INFO("Stop everything until I takeoff");
							ROS_INFO("diff_z= %f ", abs(drone1_global_position.pose.position.z - prev_drone1_global_position.pose.position.z));
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

		if(altitude_reached && current_state_g.mode != "LAND"){

			ROS_INFO_ONCE("Start following");
			if(ros_namespace_l == "/drone2" && !drone2_first_pos){

				// ROS_INFO((ros_namespace_l).c_str());
				go_to_goalPos(-2,-2,3, current_global_position_2.header.stamp);
				drone2_first_pos = true;
			}
			if(ros_namespace_l == "/drone3" && !drone3_first_pos){
				// ROS_INFO((ros_namespace_l).c_str());

				go_to_goalPos(-2,2,3, current_global_position_2.header.stamp);

				drone3_first_pos = true;

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

			geometry_msgs::PoseStamped posDiff_wp = difference_bet_2_wps(drone1_global_position, current_global_position_2); 

			posError_wp = difference_bet_2_wps(posDiff_wp, desired_posDiff_wp);

			print_Pose(posError_wp);

			// if(sampleCount == 100){
			// ROS_INFO("sampleCount: %d", sampleCount);
			// posError_wp_arr[sampleCount] = posError_wp;
			// go_to_goalPos(current_global_position_2.pose.position.x + posError_wp.pose.position.x + drone1_gps_vel_g.twist.linear.x * 2 ,  current_global_position_2.pose.position.y  +  posError_wp.pose.position.y + drone1_gps_vel_g.twist.linear.y *2,  current_global_position_2.pose.position.z + posError_wp.pose.position.z, drone1_global_position.header.stamp);
				
			// go_to_goalPos(current_global_position_2.pose.position.x + posError_wp.pose.position.x ,  current_global_position_2.pose.position.y  +  posError_wp.pose.position.y ,  current_global_position_2.pose.position.z + posError_wp.pose.position.z, drone1_global_position.header.stamp);

			// if(sampleCount == 1){
			//    sampleCount = 0;
			// }

			// sampleCount++;

			// 	sampleCount = 0;
			// }
			
			// ros::Duration(0.2).sleep();

			// ROS_INFO("error_x: %f", posError_wp.pose.position.x);

		}

		prev_drone1_global_position = drone1_global_position;
		prev_posError_wp = posError_wp;

	}	

}


void drone1_gpsVelSub_cb(const geometry_msgs::TwistStamped::ConstPtr& msg){
	
	if(altitude_reached){
		drone1_gps_vel_g = *msg;
		curr_gps_vel_g = get_global_velocity(); 

		// geometry_msgs::TwistStamped vel ;
	 //try impedendence controller
		velError_tw	= difference_bet_2_twists(drone1_gps_vel_g , curr_gps_vel_g);
		
		// ros::Time time = ros::Time::now();
		// my_time[sampleCount] = time.toNSec();
		my_time[sampleCount] = velError_tw.header.stamp.sec + 1/(pow(10,int(log10(velError_tw.header.stamp.nsec))+1)/velError_tw.header.stamp.nsec);
		// reach_goalVel(acc2vel(Fext_arr, abs(my_time[1]-my_time[0])));
		// ROS_INFO("my_time %d: total: %f  sec: %d   nsec: %d" , sampleCount , my_time[sampleCount], velError_tw.header.stamp.sec, velError_tw.header.stamp.nsec);
		velError_arr[sampleCount] = velError_tw;
		Fext_arr[sampleCount] = Fext(posError_wp, velError_arr, abs(my_time[1]-my_time[0]), sampleCount);
		if(my_time[0] > 0 && my_time[1] > 0){
			if((drone1_gps_vel_g.twist.linear.x != 0 || drone1_gps_vel_g.twist.linear.y != 0)){
			// if(abs(drone1_global_position.pose.position.x - prev_drone1_global_position.pose.position.x) > 0.01 || abs(drone1_global_position.pose.position.y - prev_drone1_global_position.pose.position.y) != 0 ) {
				
				fixyaw();

				// reach_goalVel(acc2vel(Fext(posError_wp, velError_arr ,abs(my_time[1]-my_time[0]), sampleCount), curr_gps_vel_g ,abs(my_time[1]-my_time[0])));
				
				// reach_goalVel(vel_control_input(posError_wp, velError_tw, Fext(posError_wp, velError_tw)));
				vel = vel_control_input(Fext_arr ,abs(my_time[1]-my_time[0]), sampleCount);
				

				// if(posError_wp.pose.position.x < 0 && drone1_gps_vel_g.twist.linear.x > 0){
				// 	vel.twist.linear.x = 0;
				// }
				// if(posError_wp.pose.position.y < 0 && drone1_gps_vel_g.twist.linear.y > 0){
				// 	vel.twist.linear.y = 0;
				// }
				
				reach_goalVel(vel);

				// filter_vel[filter_smplCount++] = vel;
				// if(filter_smplCount == 4){
				// 	vel = vel_mean_filter(filter_vel);
				// 	filter_smplCount = 0;
				// reach_goalVel(vel);
				// }

				

				// go_to_goalPos(current_global_position_2.pose.position.x + posError_wp.pose.position.x ,  current_global_position_2.pose.position.y  +  posError_wp.pose.position.y ,  current_global_position_2.pose.position.z + posError_wp.pose.position.z, drone1_global_position.header.stamp);
				// reach_goalVel(drone1_gps_vel_g);
				// go_to_goalPos();
				// vel.twist.linear.x = drone1_gps_vel_g.twist.linear.x;
				// vel.twist.linear.y = drone1_gps_vel_g.twist.linear.y;
				// vel.twist.linear.z = 0;
				// reach_goalVel(vel);
			} else{

				go_to_goalPos(current_global_position_2.pose.position.x + posError_wp.pose.position.x ,  current_global_position_2.pose.position.y  +  posError_wp.pose.position.y ,  current_global_position_2.pose.position.z + posError_wp.pose.position.z, drone1_global_position.header.stamp);

				// vel.twist.linear.x = 0;
				// vel.twist.linear.y = 0;
				// vel.twist.linear.z = 0;

			}
			// ROS_INFO("Sampling time: %f", my_time[1]-my_time[0]);
			// ROS_INFO("Force diff_x: prev:%f nxt:%f", Fext_arr[0].vector.x , Fext_arr[1].vector.x);
			// ROS_INFO("Force diff_y: prev:%f nxt:%f", Fext_arr[0].vector.y , Fext_arr[1].vector.y);
		}
		// exert_impedence_force(Fext(posError_wp, velError_tw)); //sub in  setpoint accel acceleration

		// set_linear_accel(1, 0, 0); //not working

		if(sampleCount == 1){
		   sampleCount = 0;
		} else {
			sampleCount++;
		}

		
		velError_tw	= difference_bet_2_twists(drone1_gps_vel_g , curr_gps_vel_g);

		// reach_goalVel(curr_gps_vel_g + velError_tw);
		// if(pow(drone1_gps_vel_g.twist.linear.x + drone1_gps_vel_g.twist.linear.y + drone1_gps_vel_g.twist.linear.z,2) != 0){
			// ROS_INFO("use vel");
			// reach_goalVel(drone1_gps_vel_g);

			/* habd
			if(abs(posError_wp.pose.position.x) > 0){
				vel.twist.linear.x = drone1_gps_vel_g.twist.linear.x + 0.1;
			} else {
				vel.twist.linear.x = drone1_gps_vel_g.twist.linear.x ;
			}
			if(abs(posError_wp.pose.position.y) > 0){
				vel.twist.linear.y = drone1_gps_vel_g.twist.linear.y + 0.1;
			} else {
				vel.twist.linear.y = drone1_gps_vel_g.twist.linear.y ;
			}
			if(abs(posError_wp.pose.position.z) > 0){
				vel.twist.linear.z = drone1_gps_vel_g.twist.linear.z + 0.1;
			} else {
				vel.twist.linear.z = drone1_gps_vel_g.twist.linear.z ;
			}
			*/
		// }


	}
}

int main(int argc, char** argv) {
	//initialize ros 
	//Every time you have to run a ros node you must add these 2 functions
	ros::init(argc, argv, "gnc_node");	//here we name the node gnc_node
	ros::NodeHandle gnc_node("~");	// the node handle is the way that you can access the communications within ros
	
	ros::Rate rate(10);
	
	// ros::Time time = ros::Time::now();
	// curr_gps_g.header.stamp = time;


	
	//initialize control publisher/subscribers
	//This function takes our ros node handle as an input and initializes subcribers that will collect the necessary information from Aurdopilot.
	init_publisher_subscriber(gnc_node);	


	ros::Subscriber drone1Pos;
	ros::Subscriber drone1State;
	ros::Subscriber drone1_globalPos;
	ros::Subscriber drone1_gps_sub;
	ros::Subscriber drone1_gpsVel_sub;
	// ros::Publisher goal_pos_pub;

	if(!flag) {
		//Wait a duration of one second.
		// ros::Duration d = ros::Duration(1, 0);
		// d.sleep();
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

   		drone1State = gnc_node.subscribe<mavros_msgs::State>( "/drone1/mavros/state", 10, drone1_state_cb);
		drone1_gps_sub = gnc_node.subscribe<sensor_msgs::NavSatFix>("/drone1/mavros/global_position/raw/fix", 20, drone1_gpsSub_cb);
		drone1_gpsVel_sub = gnc_node.subscribe<geometry_msgs::TwistStamped>("/drone1/mavros/global_position/raw/gps_vel", 10, drone1_gpsVelSub_cb);
				
	ros::spin();
		
	return 0;
}


