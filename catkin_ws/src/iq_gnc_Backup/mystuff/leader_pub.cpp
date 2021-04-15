#include <gnc_functions.hpp>

bool flag = false;

std::string ros_namespace_l;

ros::Publisher current_globalPos;

int main(int argc, char** argv) {
	
	ros::init(argc, argv, "gnc_node");	//here we name the node gnc_node
	ros::NodeHandle gnc_node("~");	// the node handle is the way that you can access the communications within ros
	
	ros::Rate rate(10);
	
	ros::Time time = ros::Time::now();
	curr_gps_g.header.stamp = time;

	//Wait a duration of one second.
	ros::Duration d = ros::Duration(1, 0);
	d.sleep();
	//initialize control publisher/subscribers
	//This function takes our ros node handle as an input and initializes subcribers that will collect the necessary information from Aurdopilot.
	init_publisher_subscriber(gnc_node);


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

	drone1Pos = gnc_node.subscribe<geometry_msgs::PoseStamped>("/drone1/mavros/local_position/pose", 10, drone1_pos_cb);

	
}