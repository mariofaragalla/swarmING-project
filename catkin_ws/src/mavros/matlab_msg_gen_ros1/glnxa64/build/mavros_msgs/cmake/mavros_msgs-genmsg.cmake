# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "mavros_msgs: 55 messages, 36 services")

set(MSG_I_FLAGS "-Imavros_msgs:/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg;-Istd_msgs:/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg;-Igeographic_msgs:/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/geographic_msgs/cmake/../msg;-Igeometry_msgs:/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg;-Istd_msgs:/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg;-Iactionlib:/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/actionlib/cmake/../msg;-Iuuid_msgs:/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/uuid_msgs/cmake/../msg;-Iactionlib_msgs:/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/actionlib_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(mavros_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamSet.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamSet.srv" "mavros_msgs/ParamValue"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandBool.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandBool.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RTKBaseline.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RTKBaseline.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileOpen.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileOpen.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Altitude.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Altitude.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RCIn.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RCIn.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/MessageInterval.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/MessageInterval.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/VFR_HUD.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/VFR_HUD.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileClose.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileClose.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandTriggerInterval.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandTriggerInterval.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/TimesyncStatus.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/TimesyncStatus.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/LogRequestList.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/LogRequestList.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilSensor.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilSensor.msg" "std_msgs/Header:geometry_msgs/Vector3"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/LandingTarget.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/LandingTarget.msg" "geometry_msgs/Point:std_msgs/Header:geometry_msgs/Quaternion:geometry_msgs/Pose"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ActuatorControl.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ActuatorControl.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HomePosition.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HomePosition.msg" "geographic_msgs/GeoPoint:std_msgs/Header:geometry_msgs/Quaternion:geometry_msgs/Vector3:geometry_msgs/Point"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilControls.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilControls.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileWrite.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileWrite.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/GlobalPositionTarget.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/GlobalPositionTarget.msg" "std_msgs/Header:geometry_msgs/Vector3"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointPull.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointPull.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointClear.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointClear.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/FileEntry.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/FileEntry.msg" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointSetCurrent.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointSetCurrent.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/VehicleInfo.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/VehicleInfo.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/OpticalFlowRad.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/OpticalFlowRad.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/AttitudeTarget.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/AttitudeTarget.msg" "std_msgs/Header:geometry_msgs/Quaternion:geometry_msgs/Vector3"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/SetMavFrame.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/SetMavFrame.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilStateQuaternion.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilStateQuaternion.msg" "geographic_msgs/GeoPoint:std_msgs/Header:geometry_msgs/Quaternion:geometry_msgs/Vector3"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileChecksum.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileChecksum.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/PositionTarget.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/PositionTarget.msg" "geometry_msgs/Point:std_msgs/Header:geometry_msgs/Vector3"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/WheelOdomStamped.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/WheelOdomStamped.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRemoveDir.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRemoveDir.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandLong.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandLong.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/State.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/State.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamPull.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamPull.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Vibration.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Vibration.msg" "std_msgs/Header:geometry_msgs/Vector3"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilGPS.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilGPS.msg" "geographic_msgs/GeoPoint:std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Thrust.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Thrust.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RTCM.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RTCM.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/CamIMUStamp.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/CamIMUStamp.msg" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileMakeDir.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileMakeDir.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRead.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRead.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/WaypointReached.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/WaypointReached.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCInfoItem.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCInfoItem.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamPush.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamPush.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/LogData.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/LogData.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileList.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileList.srv" "mavros_msgs/FileEntry"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/OnboardComputerStatus.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/OnboardComputerStatus.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Trajectory.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Trajectory.msg" "geometry_msgs/Point:std_msgs/Header:geometry_msgs/Vector3:mavros_msgs/PositionTarget"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/OverrideRCIn.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/OverrideRCIn.msg" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/WaypointList.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/WaypointList.msg" "mavros_msgs/Waypoint"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/VehicleInfoGet.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/VehicleInfoGet.srv" "mavros_msgs/VehicleInfo:std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/LogRequestEnd.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/LogRequestEnd.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/CompanionProcessStatus.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/CompanionProcessStatus.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/LogEntry.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/LogEntry.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Param.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Param.msg" "std_msgs/Header:mavros_msgs/ParamValue"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ParamValue.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ParamValue.msg" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/EstimatorStatus.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/EstimatorStatus.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandInt.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandInt.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RCOut.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RCOut.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ADSBVehicle.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ADSBVehicle.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCStatus.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCStatus.msg" "std_msgs/Header:mavros_msgs/ESCStatusItem"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ExtendedState.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ExtendedState.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRename.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRename.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointPush.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointPush.srv" "mavros_msgs/Waypoint"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/MountControl.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/MountControl.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCStatusItem.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCStatusItem.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamGet.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamGet.srv" "mavros_msgs/ParamValue"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandTriggerControl.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandTriggerControl.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Waypoint.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Waypoint.msg" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RadioStatus.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RadioStatus.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilActuatorControls.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilActuatorControls.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/DebugValue.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/DebugValue.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileTruncate.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileTruncate.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/GPSRTK.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/GPSRTK.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandTOL.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandTOL.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandVtolTransition.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandVtolTransition.srv" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/LogRequestData.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/LogRequestData.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/GPSRAW.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/GPSRAW.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCInfo.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCInfo.msg" "std_msgs/Header:mavros_msgs/ESCInfoItem"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ManualControl.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ManualControl.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/CommandCode.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/CommandCode.msg" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Mavlink.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Mavlink.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/BatteryStatus.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/BatteryStatus.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandHome.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandHome.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRemove.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRemove.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/PlayTuneV2.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/PlayTuneV2.msg" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/SetMode.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/SetMode.srv" ""
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/StatusText.msg" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/StatusText.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/MountConfigure.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/MountConfigure.srv" "std_msgs/Header"
)

get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/StreamRate.srv" NAME_WE)
add_custom_target(_mavros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mavros_msgs" "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/StreamRate.srv" ""
)

#
#  langs = gencpp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/AttitudeTarget.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/WaypointReached.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Waypoint.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RadioStatus.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCInfoItem.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilStateQuaternion.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/geographic_msgs/cmake/../msg/GeoPoint.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RTKBaseline.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilActuatorControls.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/LogData.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RTCM.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/DebugValue.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Altitude.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/GPSRTK.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Trajectory.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg;/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/PositionTarget.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/OverrideRCIn.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/GlobalPositionTarget.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilSensor.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/OnboardComputerStatus.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/State.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/WaypointList.msg"
  "${MSG_I_FLAGS}"
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Waypoint.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/CompanionProcessStatus.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/GPSRAW.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/TimesyncStatus.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RCIn.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/LogEntry.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Param.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ParamValue.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCInfo.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCInfoItem.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/LandingTarget.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ParamValue.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/EstimatorStatus.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ManualControl.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ActuatorControl.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/CommandCode.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/WheelOdomStamped.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HomePosition.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/geographic_msgs/cmake/../msg/GeoPoint.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Mavlink.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/BatteryStatus.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RCOut.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ADSBVehicle.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCStatus.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCStatusItem.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/VFR_HUD.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilControls.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ExtendedState.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/PlayTuneV2.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/PositionTarget.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilGPS.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/geographic_msgs/cmake/../msg/GeoPoint.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Thrust.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/StatusText.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/MountControl.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCStatusItem.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/CamIMUStamp.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/FileEntry.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Vibration.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/VehicleInfo.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_msg_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/OpticalFlowRad.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)

### Generating Services
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileMakeDir.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRead.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandTriggerControl.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamSet.srv"
  "${MSG_I_FLAGS}"
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ParamValue.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandBool.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileOpen.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointClear.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileChecksum.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileList.srv"
  "${MSG_I_FLAGS}"
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/FileEntry.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileTruncate.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/MessageInterval.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamPull.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandTOL.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/VehicleInfoGet.srv"
  "${MSG_I_FLAGS}"
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/VehicleInfo.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/LogRequestEnd.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileClose.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandVtolTransition.srv"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/LogRequestData.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandTriggerInterval.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileWrite.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/SetMavFrame.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRemoveDir.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/LogRequestList.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandLong.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandInt.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandHome.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamPush.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRemove.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/SetMode.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRename.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointPush.srv"
  "${MSG_I_FLAGS}"
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Waypoint.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointPull.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/MountConfigure.srv"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointSetCurrent.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/StreamRate.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)
_generate_srv_cpp(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamGet.srv"
  "${MSG_I_FLAGS}"
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ParamValue.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
)

### Generating Module File
_generate_module_cpp(mavros_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(mavros_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(mavros_msgs_generate_messages mavros_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamSet.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandBool.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RTKBaseline.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileOpen.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Altitude.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RCIn.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/MessageInterval.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/VFR_HUD.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileClose.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandTriggerInterval.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/TimesyncStatus.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/LogRequestList.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilSensor.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/LandingTarget.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ActuatorControl.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HomePosition.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilControls.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileWrite.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/GlobalPositionTarget.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointPull.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointClear.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/FileEntry.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointSetCurrent.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/VehicleInfo.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/OpticalFlowRad.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/AttitudeTarget.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/SetMavFrame.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilStateQuaternion.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileChecksum.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/PositionTarget.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/WheelOdomStamped.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRemoveDir.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandLong.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/State.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamPull.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Vibration.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilGPS.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Thrust.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RTCM.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/CamIMUStamp.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileMakeDir.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRead.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/WaypointReached.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCInfoItem.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamPush.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/LogData.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileList.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/OnboardComputerStatus.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Trajectory.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/OverrideRCIn.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/WaypointList.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/VehicleInfoGet.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/LogRequestEnd.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/CompanionProcessStatus.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/LogEntry.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Param.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ParamValue.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/EstimatorStatus.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandInt.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RCOut.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ADSBVehicle.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCStatus.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ExtendedState.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRename.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointPush.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/MountControl.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCStatusItem.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamGet.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandTriggerControl.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Waypoint.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RadioStatus.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilActuatorControls.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/DebugValue.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileTruncate.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/GPSRTK.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandTOL.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandVtolTransition.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/LogRequestData.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/GPSRAW.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCInfo.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ManualControl.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/CommandCode.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Mavlink.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/BatteryStatus.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandHome.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRemove.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/PlayTuneV2.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/SetMode.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/StatusText.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/MountConfigure.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/StreamRate.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_cpp _mavros_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(mavros_msgs_gencpp)
add_dependencies(mavros_msgs_gencpp mavros_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS mavros_msgs_generate_messages_cpp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/AttitudeTarget.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/WaypointReached.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Waypoint.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RadioStatus.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCInfoItem.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilStateQuaternion.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/geographic_msgs/cmake/../msg/GeoPoint.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RTKBaseline.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilActuatorControls.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/LogData.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RTCM.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/DebugValue.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Altitude.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/GPSRTK.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Trajectory.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg;/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/PositionTarget.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/OverrideRCIn.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/GlobalPositionTarget.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilSensor.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/OnboardComputerStatus.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/State.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/WaypointList.msg"
  "${MSG_I_FLAGS}"
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Waypoint.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/CompanionProcessStatus.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/GPSRAW.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/TimesyncStatus.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RCIn.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/LogEntry.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Param.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ParamValue.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCInfo.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCInfoItem.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/LandingTarget.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ParamValue.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/EstimatorStatus.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ManualControl.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ActuatorControl.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/CommandCode.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/WheelOdomStamped.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HomePosition.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/geographic_msgs/cmake/../msg/GeoPoint.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Mavlink.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/BatteryStatus.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RCOut.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ADSBVehicle.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCStatus.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCStatusItem.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/VFR_HUD.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilControls.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ExtendedState.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/PlayTuneV2.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/PositionTarget.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilGPS.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/geographic_msgs/cmake/../msg/GeoPoint.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Thrust.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/StatusText.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/MountControl.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCStatusItem.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/CamIMUStamp.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/FileEntry.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Vibration.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/VehicleInfo.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_msg_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/OpticalFlowRad.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)

### Generating Services
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileMakeDir.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRead.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandTriggerControl.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamSet.srv"
  "${MSG_I_FLAGS}"
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ParamValue.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandBool.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileOpen.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointClear.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileChecksum.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileList.srv"
  "${MSG_I_FLAGS}"
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/FileEntry.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileTruncate.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/MessageInterval.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamPull.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandTOL.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/VehicleInfoGet.srv"
  "${MSG_I_FLAGS}"
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/VehicleInfo.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/LogRequestEnd.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileClose.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandVtolTransition.srv"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/LogRequestData.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandTriggerInterval.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileWrite.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/SetMavFrame.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRemoveDir.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/LogRequestList.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandLong.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandInt.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandHome.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamPush.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRemove.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/SetMode.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRename.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointPush.srv"
  "${MSG_I_FLAGS}"
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Waypoint.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointPull.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/MountConfigure.srv"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointSetCurrent.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/StreamRate.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)
_generate_srv_py(mavros_msgs
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamGet.srv"
  "${MSG_I_FLAGS}"
  "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ParamValue.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
)

### Generating Module File
_generate_module_py(mavros_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(mavros_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(mavros_msgs_generate_messages mavros_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamSet.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandBool.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RTKBaseline.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileOpen.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Altitude.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RCIn.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/MessageInterval.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/VFR_HUD.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileClose.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandTriggerInterval.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/TimesyncStatus.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/LogRequestList.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilSensor.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/LandingTarget.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ActuatorControl.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HomePosition.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilControls.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileWrite.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/GlobalPositionTarget.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointPull.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointClear.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/FileEntry.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointSetCurrent.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/VehicleInfo.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/OpticalFlowRad.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/AttitudeTarget.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/SetMavFrame.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilStateQuaternion.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileChecksum.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/PositionTarget.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/WheelOdomStamped.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRemoveDir.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandLong.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/State.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamPull.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Vibration.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilGPS.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Thrust.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RTCM.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/CamIMUStamp.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileMakeDir.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRead.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/WaypointReached.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCInfoItem.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamPush.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/LogData.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileList.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/OnboardComputerStatus.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Trajectory.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/OverrideRCIn.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/WaypointList.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/VehicleInfoGet.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/LogRequestEnd.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/CompanionProcessStatus.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/LogEntry.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Param.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ParamValue.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/EstimatorStatus.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandInt.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RCOut.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ADSBVehicle.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCStatus.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ExtendedState.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRename.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/WaypointPush.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/MountControl.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCStatusItem.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/ParamGet.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandTriggerControl.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Waypoint.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/RadioStatus.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/HilActuatorControls.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/DebugValue.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileTruncate.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/GPSRTK.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandTOL.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandVtolTransition.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/LogRequestData.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/GPSRAW.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ESCInfo.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/ManualControl.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/CommandCode.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/Mavlink.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/BatteryStatus.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/CommandHome.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/FileRemove.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/PlayTuneV2.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/SetMode.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg/StatusText.msg" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/MountConfigure.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/srv/StreamRate.srv" NAME_WE)
add_dependencies(mavros_msgs_generate_messages_py _mavros_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(mavros_msgs_genpy)
add_dependencies(mavros_msgs_genpy mavros_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS mavros_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mavros_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(mavros_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET geographic_msgs_generate_messages_cpp)
  add_dependencies(mavros_msgs_generate_messages_cpp geographic_msgs_generate_messages_cpp)
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(mavros_msgs_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(mavros_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs)
  install(CODE "execute_process(COMMAND \"/home/mario/.matlab/R2020b/ros1/glnxa64/venv/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mavros_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(mavros_msgs_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET geographic_msgs_generate_messages_py)
  add_dependencies(mavros_msgs_generate_messages_py geographic_msgs_generate_messages_py)
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(mavros_msgs_generate_messages_py geometry_msgs_generate_messages_py)
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(mavros_msgs_generate_messages_py std_msgs_generate_messages_py)
endif()
