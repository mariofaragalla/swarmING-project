// https://youtu.be/defn-gVdQEU?list=PLy9nLDKxDN683GqAiJ4IVLquYBod_2oA6

#include <gnc_functions.hpp>		//add all functions that are associated with the control api
//include API 

int main(int argc, char** argv)
{
	//initialize ros 
	//Every time you have to run a ros node you must add these 2 functions
	ros::init(argc, argv, "gnc_node");	//here we name the node gnc_node
	ros::NodeHandle gnc_node("~");	// the node handle is the way that you can access the communications within ros
	
	//initialize control publisher/subscribers
	//This function takes our ros node handle as an input and initializes subcribers that will collect the necessary information from Aurdopilot.
	init_publisher_subscriber(gnc_node);	

  	// wait for FCU connection  (loop until the node can communicate with the drone's flight control unit (FCU))
	wait4connect();

	//wait for used to switch to mode GUIDED (hold the program until the pilot executes the program by switching the FCU flight mode to GUIDED)
	// wait4start();
	set_mode("GUIDED");

	//create local reference frame 
	initialize_local_frame();

	//request takeoff
	takeoff(3);

	//specify some waypoints 
	std::vector<gnc_api_waypoint> waypointList;	// create a vector called waypointList to store gnc_api_waypoints (vector is like a dynamic array(stack)) 
	gnc_api_waypoint nextWayPoint;	//gnc_api_waypoint is a data container to store x,y,z and psi
	nextWayPoint.x = 0;
	nextWayPoint.y = 0;
	nextWayPoint.z = 3;
	nextWayPoint.psi = 0;
	waypointList.push_back(nextWayPoint);	//push_back adds a new waypoint to the vector
	nextWayPoint.x = 5;
	nextWayPoint.y = 0;
	nextWayPoint.z = 3;
	nextWayPoint.psi = -90;
	waypointList.push_back(nextWayPoint);
	nextWayPoint.x = 5;
	nextWayPoint.y = 5;
	nextWayPoint.z = 3;
	nextWayPoint.psi = 0;
	waypointList.push_back(nextWayPoint);
	nextWayPoint.x = 0;
	nextWayPoint.y = 5;
	nextWayPoint.z = 3;
	nextWayPoint.psi = 90;
	waypointList.push_back(nextWayPoint);
	nextWayPoint.x = 0;
	nextWayPoint.y = 0;
	nextWayPoint.z = 3;
	nextWayPoint.psi = 180;
	waypointList.push_back(nextWayPoint);
	nextWayPoint.x = 0;
	nextWayPoint.y = 0;
	nextWayPoint.z = 3;
	nextWayPoint.psi = 0;
	waypointList.push_back(nextWayPoint);


	//specify control loop rate. We recommend a low frequency to not over load the FCU with messages. Too many messages will cause the drone to be sluggish
	ros::Rate rate(2.0);	//For every control loop you will have a rate counter (how quickly does a loop run) -> 2Hz recommended for programming with ardupilot 
	int counter = 0;
	while(ros::ok())		//while the program is not broken (I think no ctrl + C is pressed)
	{
		ros::spinOnce();	// Allow all the publishers and subscribers to push and pull the data by repeating the main function
		rate.sleep();		
		//Check if the drone reached a waypoint this function takes a tolerance in meters which specifies how close your drone needs 
		//to be to that waypoint to be considered reached  
		if(check_waypoint_reached(.3) == 1)		
		{
			if (counter < waypointList.size())
			{
				set_destination(waypointList[counter].x,waypointList[counter].y,waypointList[counter].z, waypointList[counter].psi);
				counter++;	
			}else{
				//land after all waypoints are reached
				land();
			}	
		}	
		
	}
	return 0;
}