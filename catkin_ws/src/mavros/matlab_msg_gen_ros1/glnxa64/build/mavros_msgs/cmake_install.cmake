# Install script for directory: /home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mavros_msgs/msg" TYPE FILE FILES
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ADSBVehicle.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ActuatorControl.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Altitude.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/AttitudeTarget.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/BatteryStatus.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/CamIMUStamp.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/CommandCode.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/CompanionProcessStatus.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/DebugValue.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCInfo.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCInfoItem.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCStatus.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCStatusItem.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/EstimatorStatus.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ExtendedState.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/FileEntry.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/GPSRAW.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/GPSRTK.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/GlobalPositionTarget.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilActuatorControls.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilControls.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilGPS.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilSensor.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilStateQuaternion.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HomePosition.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/LandingTarget.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/LogData.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/LogEntry.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ManualControl.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Mavlink.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/MountControl.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/OnboardComputerStatus.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/OpticalFlowRad.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/OverrideRCIn.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Param.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ParamValue.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/PlayTuneV2.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/PositionTarget.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RCIn.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RCOut.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RTCM.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RTKBaseline.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RadioStatus.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/State.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/StatusText.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Thrust.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/TimesyncStatus.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Trajectory.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/VFR_HUD.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/VehicleInfo.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Vibration.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Waypoint.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/WaypointList.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/WaypointReached.msg"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/WheelOdomStamped.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mavros_msgs/srv" TYPE FILE FILES
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandBool.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandHome.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandInt.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandLong.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandTOL.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandTriggerControl.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandTriggerInterval.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandVtolTransition.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileChecksum.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileClose.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileList.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileMakeDir.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileOpen.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRead.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRemove.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRemoveDir.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRename.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileTruncate.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileWrite.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/LogRequestData.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/LogRequestEnd.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/LogRequestList.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/MessageInterval.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/MountConfigure.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamGet.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamPull.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamPush.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamSet.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/SetMavFrame.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/SetMode.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/StreamRate.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/VehicleInfoGet.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointClear.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointPull.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointPush.srv"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointSetCurrent.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mavros_msgs/cmake" TYPE FILE FILES "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/build/mavros_msgs/catkin_generated/installspace/mavros_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/devel/include/mavros_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/home/mario/.matlab/R2020b/ros1/glnxa64/venv/bin/python2" -m compileall "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/devel/lib/python2.7/dist-packages/mavros_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/devel/lib/python2.7/dist-packages/mavros_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/build/mavros_msgs/catkin_generated/installspace/mavros_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mavros_msgs/cmake" TYPE FILE FILES "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/build/mavros_msgs/catkin_generated/installspace/mavros_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mavros_msgs/cmake" TYPE FILE FILES
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/build/mavros_msgs/catkin_generated/installspace/mavros_msgsConfig.cmake"
    "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/build/mavros_msgs/catkin_generated/installspace/mavros_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mavros_msgs" TYPE FILE FILES "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/include/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/devel/lib/libmavros_msgs_matlab.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmavros_msgs_matlab.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmavros_msgs_matlab.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmavros_msgs_matlab.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/m/" TYPE DIRECTORY FILES "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/m/" FILES_MATCHING REGEX "/[^/]*\\.m$")
endif()

