// https://youtu.be/defn-gVdQEU?list=PLy9nLDKxDN683GqAiJ4IVLquYBod_2oA6

#include <gnc_functions.hpp>		//add all functions that are associated with the control api
//include API 

// drone1_pose_g;

float drone1_x;
float drone1_y;
float drone1_z;
float drone1_psi;

void drone1_pos_cb(const geometry_msgs::PoseStamped::ConstPtr& msg)
{
	geometry_msgs::PoseStamped drone1_pose_g = *msg;
	drone1_x = drone1_pose_g.pose.position.x;
	drone1_y = drone1_pose_g.pose.position.y;
	drone1_z = drone1_pose_g.pose.position.z;
	set_destination(drone1_x,drone1_y,drone1_z, 0);
	ROS_INFO("Drone1 local position: x: %f , y: %f, z: %f", drone1_x, drone1_y, drone1_z);
}

int main(int argc, char** argv)
{
	//initialize ros 
	//Every time you have to run a ros node you must add these 2 functions
	ros::init(argc, argv, "gnc_node");	//here we name the node gnc_node
	ros::NodeHandle gnc_node("~");	// the node handle is the way that you can access the communications within ros
	
	
	//initialize control publisher/subscribers
	//This function takes our ros node handle as an input and initializes subcribers that will collect the necessary information from Aurdopilot.
	init_publisher_subscriber(gnc_node);	

	ros::Subscriber drone1Pos_3;

	std::string ros_namespace;
  	
  	gnc_node.getParam("namespace", ros_namespace);
  	// wait for FCU connection  (loop until the node can communicate with the drone's flight control unit (FCU))
	wait4connect();

	//wait for used to switch to mode GUIDED (hold the program until the pilot executes the program by switching the FCU flight mode to GUIDED)
	// wait4start();
	set_mode("GUIDED");

	//create local reference frame 
	initialize_local_frame();

	takeoff(3);

	//specify control loop rate. We recommend a low frequency to not over load the FCU with messages. Too many messages will cause the drone to be sluggish
	ros::Rate rate(2.0);	//For every control loop you will have a rate counter (how quickly does a loop run) -> 2Hz recommended for programming with ardupilot 
	int counter = 0;
	while(ros::ok())		//while the program is not broken (I think no ctrl + C is pressed)
	{
			// Allow all the publishers and subscribers to push and pull the data by repeating the main function
		rate.sleep();		
		//Check if the drone reached a waypoint this function takes a tolerance in meters which specifies how close your drone needs 
		//to be to that waypoint to be considered reached  
		
		//if(check_waypoint_reached(.1) == 1)		
		//{
				//read message from topic drone1//mavros/local_position/pose
				if(!check_waypoint_reached(.1))	{
					// ROS_INFO("this is node %s", ros_namespace.c_str());
				   drone1Pos_3 = gnc_node.subscribe<geometry_msgs::PoseStamped>("/drone1/mavros/local_position/pose", 10, drone1_pos_cb);
				}
				else {
					ROS_INFO("%s : Drone1 local position: x: %f , y: %f, z: %f", ros_namespace.c_str(), drone1_x, drone1_y, drone1_z);
				}
				// for psi check pose_cb in gnc_functions
				
	
		//}	
				ros::spinOnce();
		
	}
	return 0;
}
