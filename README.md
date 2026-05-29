# swarmING-project

https://github.com/mariofaragalla/swarmING-project/assets/55330224/cd1ab16a-84fd-4870-bb69-7951880eda6b

## The installation guide can be found here:

- https://ardupilot.org/dev/docs/using-gazebo-simulator-with-sitl.html [deprecated]
- https://ardupilot.org/dev/docs/sitl-with-gazebo.html#sitl-with-gazebo

## After installation we can use the same instructions so that the command 
" gazebo --verbose worlds/iris_arducopter_runway.world " run a different quadcopter model.

Steps:

1. Go to /home/<username>/ardupilot_gazebo/models/iris_with_standoffs directory 
2. In the folder meshes put the .dae CAD file of the drone.
3. Edit the model.sdf file so that it calls the new .dae file instead of the existing one (iris.dae) N.B: search for uri

If you run the command gazebo --verbose worlds/iris_arducopter_runway.world you will find the new drone inside gazebo.


To change the location of the drone on the map:

1. Go to /home/mario/ardupilot/Tools/autotest
2. Open locations.txt on the last line add the name of location then add '=' then the location on maps (latitude,longitude,absolute-altitude,heading)
	for e.g:  TUHH=53.459955,9.969447,23,0
   , then save the file.
3. Open the simulation using gazebo "--verbose worlds/iris_arducopter_runway.world" 
4. Now run " ../Tools/autotest/sim_vehicle.py -L TUHH -f gazebo-iris --console --map " 

Extra:

How to add model to Gazebo:
1. Go to /home/<username>/.gazebo/models 
2. Add a new folder "swarmING" 
3. This folder must contain 3 files:
   3.1. model.config -> contains some textual description name, author, email ...etc
   3.2. model.sdf -> contains the dynamic description of the model.
   3.3. model.dae -> the CAD model for apperance.
4. model.sdf must call model.dae.


------------------------------------------------------------------------------------------------------------------------------------------------
## New library version for Ubuntu 20 Noetic 

check this video out: 
https://www.youtube.com/watch?v=1FpJvUVPxL0&ab_channel=IntelligentQuads

with the following git repo: 
https://github.com/Intelligent-Quads/iq_tutorials/blob/master/docs/ros_intro.md
https://github.com/Intelligent-Quads/iq_tutorials/tree/master/docs

Steps for testing:

For one drone:

1. in one terminal: 	`roslaunch iq_sim runway.launch`
2. in another one:	```cp ~/catkin_ws/src/iq_sim/scripts/startsitl.sh ~
					~/startsitl.sh```
##
For many drones:
1. in one terminal: 	`roslaunch iq_sim multi_drone.launch`
2. For each drone:
   - In another terminal for drone1 run:	`sim_vehicle.py -v ArduCopter -f gazebo-iris --console -I0`
   - In another terminal for drone2 run:	`sim_vehicle.py -v ArduCopter -f gazebo-iris --console -I1`
   - In another terminal for drone3 run:	`sim_vehicle.py -v ArduCopter -f gazebo-iris --console -I2`

N.B: Adjust the no. and the position of drones from the multi_drone.world file

Here you can test each drone via ardupilot commands for example: 
`mode GUIDED`
`arm throttle`
`take off 3`

## Running swarmING concept:

1. In terminal 1: Run the leader-follower principle: `roslaunch iq_gnc swarmING_nodes.launch`
2. In terminal 2: Communication with Ardupilot and the drones, use the bash file `./multi-ardupilot.sh` in ~/catkin_ws/src/iq_sim/scripts
3. In terminal 3: Establish the connection between ROS and Mavproxy using `roslaunch iq_sim multi-apm.launch`
4. In terminal 4: Open the multi drone environment in Gazebo: `roslaunch iq_sim multi_drone.launch`
5. From terminal 2 tabs: 
	- In the first tab wait for `APM: EKF2 IMU1 is using GPS`.
	- Then Control the leader drone in the first tab using ardupilot commands. The other drones should follow it accordingly.

