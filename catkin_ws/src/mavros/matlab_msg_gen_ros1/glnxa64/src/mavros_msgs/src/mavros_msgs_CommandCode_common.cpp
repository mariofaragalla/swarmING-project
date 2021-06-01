// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/CommandCode
#include "boost/date_time.hpp"
#include "boost/shared_array.hpp"
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4244)
#pragma warning(disable : 4265)
#pragma warning(disable : 4458)
#pragma warning(disable : 4100)
#pragma warning(disable : 4127)
#pragma warning(disable : 4267)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#endif //_MSC_VER
#include "ros/ros.h"
#include "mavros_msgs/CommandCode.h"
#include "visibility_control.h"
#ifndef FOUNDATION_MATLABDATA_API
#include "MDArray.hpp"
#include "StructArray.hpp"
#include "TypedArrayRef.hpp"
#include "Struct.hpp"
#include "ArrayFactory.hpp"
#include "StructRef.hpp"
#include "Reference.hpp"
#endif
#ifndef FOUNDATION_MATLABDATA_API
typedef matlab::data::Array MDArray_T;
typedef matlab::data::ArrayFactory MDFactory_T;
#else
typedef foundation::matlabdata::Array MDArray_T;
typedef foundation::matlabdata::standalone::ClientArrayFactory MDFactory_T;
#endif
namespace mavros_msgs {
namespace matlabhelper {
namespace CommandCode {
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::CommandCode>& msg, const matlab::data::StructArray arr) {
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::CommandCode>& msg) {
    auto outArray = factory.createStructArray({1,1},{"AIRFRAME_CONFIGURATION","ARM_AUTHORIZATION_REQUEST","COMPONENT_ARM_DISARM","CONDITION_DELAY","CONDITION_CHANGE_ALT","CONDITION_DISTANCE","CONDITION_YAW","CONDITION_LAST","CONTROL_HIGH_LATENCY","DO_FOLLOW","DO_FOLLOW_REPOSITION","DO_SET_MODE","DO_JUMP","DO_CHANGE_SPEED","DO_SET_HOME","DO_SET_PARAMETER","DO_SET_RELAY","DO_REPEAT_RELAY","DO_SET_SERVO","DO_REPEAT_SERVO","DO_FLIGHTTERMINATION","DO_CHANGE_ALTITUDE","DO_LAND_START","DO_RALLY_LAND","DO_GO_AROUND","DO_REPOSITION","DO_PAUSE_CONTINUE","DO_SET_REVERSE","DO_SET_ROI_LOCATION","DO_SET_ROI_WPNEXT_OFFSET","DO_SET_ROI_NONE","DO_CONTROL_VIDEO","DO_SET_ROI","DO_DIGICAM_CONFIGURE","DO_DIGICAM_CONTROL","DO_MOUNT_CONFIGURE","DO_MOUNT_CONTROL","DO_SET_CAM_TRIGG_DIST","DO_FENCE_ENABLE","DO_PARACHUTE","DO_MOTOR_TEST","DO_INVERTED_FLIGHT","DO_SET_CAM_TRIGG_INTERVAL","DO_MOUNT_CONTROL_QUAT","DO_GUIDED_MASTER","DO_GUIDED_LIMITS","DO_ENGINE_CONTROL","DO_SET_MISSION_CURRENT","DO_LAST","DO_JUMP_TAG","DO_TRIGGER_CONTROL","DO_VTOL_TRANSITION","GET_HOME_POSITION","GET_MESSAGE_INTERVAL","IMAGE_START_CAPTURE","IMAGE_STOP_CAPTURE","JUMP_TAG","LOGGING_START","LOGGING_STOP","MISSION_START","NAV_WAYPOINT","NAV_LOITER_UNLIM","NAV_LOITER_TURNS","NAV_LOITER_TIME","NAV_RETURN_TO_LAUNCH","NAV_LAND","NAV_TAKEOFF","NAV_LAND_LOCAL","NAV_TAKEOFF_LOCAL","NAV_FOLLOW","NAV_CONTINUE_AND_CHANGE_ALT","NAV_LOITER_TO_ALT","NAV_ROI","NAV_PATHPLANNING","NAV_SPLINE_WAYPOINT","NAV_VTOL_TAKEOFF","NAV_VTOL_LAND","NAV_GUIDED_ENABLE","NAV_DELAY","NAV_PAYLOAD_PLACE","NAV_LAST","NAV_SET_YAW_SPEED","NAV_FENCE_RETURN_POINT","NAV_FENCE_POLYGON_VERTEX_INCLUSION","NAV_FENCE_POLYGON_VERTEX_EXCLUSION","NAV_FENCE_CIRCLE_INCLUSION","NAV_FENCE_CIRCLE_EXCLUSION","NAV_RALLY_POINT","OVERRIDE_GOTO","PANORAMA_CREATE","PAYLOAD_PREPARE_DEPLOY","PAYLOAD_CONTROL_DEPLOY","PREFLIGHT_CALIBRATION","PREFLIGHT_SET_SENSOR_OFFSETS","PREFLIGHT_UAVCAN","PREFLIGHT_STORAGE","PREFLIGHT_REBOOT_SHUTDOWN","REQUEST_MESSAGE","REQUEST_AUTOPILOT_CAPABILITIES","REQUEST_CAMERA_INFORMATION","REQUEST_CAMERA_SETTINGS","REQUEST_STORAGE_INFORMATION","REQUEST_CAMERA_CAPTURE_STATUS","REQUEST_FLIGHT_INFORMATION","RESET_CAMERA_SETTINGS","SET_MESSAGE_INTERVAL","SET_CAMERA_MODE","SET_GUIDED_SUBMODE_STANDARD","SET_GUIDED_SUBMODE_CIRCLE","START_RX_PAIR","STORAGE_FORMAT","UAVCAN_GET_NODE_INFO","VIDEO_START_CAPTURE","VIDEO_STOP_CAPTURE"});
    // AIRFRAME_CONFIGURATION
    outArray[0]["AIRFRAME_CONFIGURATION"] = factory.createScalar(static_cast<uint16_t>(msg->AIRFRAME_CONFIGURATION));
    // ARM_AUTHORIZATION_REQUEST
    outArray[0]["ARM_AUTHORIZATION_REQUEST"] = factory.createScalar(static_cast<uint16_t>(msg->ARM_AUTHORIZATION_REQUEST));
    // COMPONENT_ARM_DISARM
    outArray[0]["COMPONENT_ARM_DISARM"] = factory.createScalar(static_cast<uint16_t>(msg->COMPONENT_ARM_DISARM));
    // CONDITION_DELAY
    outArray[0]["CONDITION_DELAY"] = factory.createScalar(static_cast<uint16_t>(msg->CONDITION_DELAY));
    // CONDITION_CHANGE_ALT
    outArray[0]["CONDITION_CHANGE_ALT"] = factory.createScalar(static_cast<uint16_t>(msg->CONDITION_CHANGE_ALT));
    // CONDITION_DISTANCE
    outArray[0]["CONDITION_DISTANCE"] = factory.createScalar(static_cast<uint16_t>(msg->CONDITION_DISTANCE));
    // CONDITION_YAW
    outArray[0]["CONDITION_YAW"] = factory.createScalar(static_cast<uint16_t>(msg->CONDITION_YAW));
    // CONDITION_LAST
    outArray[0]["CONDITION_LAST"] = factory.createScalar(static_cast<uint16_t>(msg->CONDITION_LAST));
    // CONTROL_HIGH_LATENCY
    outArray[0]["CONTROL_HIGH_LATENCY"] = factory.createScalar(static_cast<uint16_t>(msg->CONTROL_HIGH_LATENCY));
    // DO_FOLLOW
    outArray[0]["DO_FOLLOW"] = factory.createScalar(static_cast<uint16_t>(msg->DO_FOLLOW));
    // DO_FOLLOW_REPOSITION
    outArray[0]["DO_FOLLOW_REPOSITION"] = factory.createScalar(static_cast<uint16_t>(msg->DO_FOLLOW_REPOSITION));
    // DO_SET_MODE
    outArray[0]["DO_SET_MODE"] = factory.createScalar(static_cast<uint16_t>(msg->DO_SET_MODE));
    // DO_JUMP
    outArray[0]["DO_JUMP"] = factory.createScalar(static_cast<uint16_t>(msg->DO_JUMP));
    // DO_CHANGE_SPEED
    outArray[0]["DO_CHANGE_SPEED"] = factory.createScalar(static_cast<uint16_t>(msg->DO_CHANGE_SPEED));
    // DO_SET_HOME
    outArray[0]["DO_SET_HOME"] = factory.createScalar(static_cast<uint16_t>(msg->DO_SET_HOME));
    // DO_SET_PARAMETER
    outArray[0]["DO_SET_PARAMETER"] = factory.createScalar(static_cast<uint16_t>(msg->DO_SET_PARAMETER));
    // DO_SET_RELAY
    outArray[0]["DO_SET_RELAY"] = factory.createScalar(static_cast<uint16_t>(msg->DO_SET_RELAY));
    // DO_REPEAT_RELAY
    outArray[0]["DO_REPEAT_RELAY"] = factory.createScalar(static_cast<uint16_t>(msg->DO_REPEAT_RELAY));
    // DO_SET_SERVO
    outArray[0]["DO_SET_SERVO"] = factory.createScalar(static_cast<uint16_t>(msg->DO_SET_SERVO));
    // DO_REPEAT_SERVO
    outArray[0]["DO_REPEAT_SERVO"] = factory.createScalar(static_cast<uint16_t>(msg->DO_REPEAT_SERVO));
    // DO_FLIGHTTERMINATION
    outArray[0]["DO_FLIGHTTERMINATION"] = factory.createScalar(static_cast<uint16_t>(msg->DO_FLIGHTTERMINATION));
    // DO_CHANGE_ALTITUDE
    outArray[0]["DO_CHANGE_ALTITUDE"] = factory.createScalar(static_cast<uint16_t>(msg->DO_CHANGE_ALTITUDE));
    // DO_LAND_START
    outArray[0]["DO_LAND_START"] = factory.createScalar(static_cast<uint16_t>(msg->DO_LAND_START));
    // DO_RALLY_LAND
    outArray[0]["DO_RALLY_LAND"] = factory.createScalar(static_cast<uint16_t>(msg->DO_RALLY_LAND));
    // DO_GO_AROUND
    outArray[0]["DO_GO_AROUND"] = factory.createScalar(static_cast<uint16_t>(msg->DO_GO_AROUND));
    // DO_REPOSITION
    outArray[0]["DO_REPOSITION"] = factory.createScalar(static_cast<uint16_t>(msg->DO_REPOSITION));
    // DO_PAUSE_CONTINUE
    outArray[0]["DO_PAUSE_CONTINUE"] = factory.createScalar(static_cast<uint16_t>(msg->DO_PAUSE_CONTINUE));
    // DO_SET_REVERSE
    outArray[0]["DO_SET_REVERSE"] = factory.createScalar(static_cast<uint16_t>(msg->DO_SET_REVERSE));
    // DO_SET_ROI_LOCATION
    outArray[0]["DO_SET_ROI_LOCATION"] = factory.createScalar(static_cast<uint16_t>(msg->DO_SET_ROI_LOCATION));
    // DO_SET_ROI_WPNEXT_OFFSET
    outArray[0]["DO_SET_ROI_WPNEXT_OFFSET"] = factory.createScalar(static_cast<uint16_t>(msg->DO_SET_ROI_WPNEXT_OFFSET));
    // DO_SET_ROI_NONE
    outArray[0]["DO_SET_ROI_NONE"] = factory.createScalar(static_cast<uint16_t>(msg->DO_SET_ROI_NONE));
    // DO_CONTROL_VIDEO
    outArray[0]["DO_CONTROL_VIDEO"] = factory.createScalar(static_cast<uint16_t>(msg->DO_CONTROL_VIDEO));
    // DO_SET_ROI
    outArray[0]["DO_SET_ROI"] = factory.createScalar(static_cast<uint16_t>(msg->DO_SET_ROI));
    // DO_DIGICAM_CONFIGURE
    outArray[0]["DO_DIGICAM_CONFIGURE"] = factory.createScalar(static_cast<uint16_t>(msg->DO_DIGICAM_CONFIGURE));
    // DO_DIGICAM_CONTROL
    outArray[0]["DO_DIGICAM_CONTROL"] = factory.createScalar(static_cast<uint16_t>(msg->DO_DIGICAM_CONTROL));
    // DO_MOUNT_CONFIGURE
    outArray[0]["DO_MOUNT_CONFIGURE"] = factory.createScalar(static_cast<uint16_t>(msg->DO_MOUNT_CONFIGURE));
    // DO_MOUNT_CONTROL
    outArray[0]["DO_MOUNT_CONTROL"] = factory.createScalar(static_cast<uint16_t>(msg->DO_MOUNT_CONTROL));
    // DO_SET_CAM_TRIGG_DIST
    outArray[0]["DO_SET_CAM_TRIGG_DIST"] = factory.createScalar(static_cast<uint16_t>(msg->DO_SET_CAM_TRIGG_DIST));
    // DO_FENCE_ENABLE
    outArray[0]["DO_FENCE_ENABLE"] = factory.createScalar(static_cast<uint16_t>(msg->DO_FENCE_ENABLE));
    // DO_PARACHUTE
    outArray[0]["DO_PARACHUTE"] = factory.createScalar(static_cast<uint16_t>(msg->DO_PARACHUTE));
    // DO_MOTOR_TEST
    outArray[0]["DO_MOTOR_TEST"] = factory.createScalar(static_cast<uint16_t>(msg->DO_MOTOR_TEST));
    // DO_INVERTED_FLIGHT
    outArray[0]["DO_INVERTED_FLIGHT"] = factory.createScalar(static_cast<uint16_t>(msg->DO_INVERTED_FLIGHT));
    // DO_SET_CAM_TRIGG_INTERVAL
    outArray[0]["DO_SET_CAM_TRIGG_INTERVAL"] = factory.createScalar(static_cast<uint16_t>(msg->DO_SET_CAM_TRIGG_INTERVAL));
    // DO_MOUNT_CONTROL_QUAT
    outArray[0]["DO_MOUNT_CONTROL_QUAT"] = factory.createScalar(static_cast<uint16_t>(msg->DO_MOUNT_CONTROL_QUAT));
    // DO_GUIDED_MASTER
    outArray[0]["DO_GUIDED_MASTER"] = factory.createScalar(static_cast<uint16_t>(msg->DO_GUIDED_MASTER));
    // DO_GUIDED_LIMITS
    outArray[0]["DO_GUIDED_LIMITS"] = factory.createScalar(static_cast<uint16_t>(msg->DO_GUIDED_LIMITS));
    // DO_ENGINE_CONTROL
    outArray[0]["DO_ENGINE_CONTROL"] = factory.createScalar(static_cast<uint16_t>(msg->DO_ENGINE_CONTROL));
    // DO_SET_MISSION_CURRENT
    outArray[0]["DO_SET_MISSION_CURRENT"] = factory.createScalar(static_cast<uint16_t>(msg->DO_SET_MISSION_CURRENT));
    // DO_LAST
    outArray[0]["DO_LAST"] = factory.createScalar(static_cast<uint16_t>(msg->DO_LAST));
    // DO_JUMP_TAG
    outArray[0]["DO_JUMP_TAG"] = factory.createScalar(static_cast<uint16_t>(msg->DO_JUMP_TAG));
    // DO_TRIGGER_CONTROL
    outArray[0]["DO_TRIGGER_CONTROL"] = factory.createScalar(static_cast<uint16_t>(msg->DO_TRIGGER_CONTROL));
    // DO_VTOL_TRANSITION
    outArray[0]["DO_VTOL_TRANSITION"] = factory.createScalar(static_cast<uint16_t>(msg->DO_VTOL_TRANSITION));
    // GET_HOME_POSITION
    outArray[0]["GET_HOME_POSITION"] = factory.createScalar(static_cast<uint16_t>(msg->GET_HOME_POSITION));
    // GET_MESSAGE_INTERVAL
    outArray[0]["GET_MESSAGE_INTERVAL"] = factory.createScalar(static_cast<uint16_t>(msg->GET_MESSAGE_INTERVAL));
    // IMAGE_START_CAPTURE
    outArray[0]["IMAGE_START_CAPTURE"] = factory.createScalar(static_cast<uint16_t>(msg->IMAGE_START_CAPTURE));
    // IMAGE_STOP_CAPTURE
    outArray[0]["IMAGE_STOP_CAPTURE"] = factory.createScalar(static_cast<uint16_t>(msg->IMAGE_STOP_CAPTURE));
    // JUMP_TAG
    outArray[0]["JUMP_TAG"] = factory.createScalar(static_cast<uint16_t>(msg->JUMP_TAG));
    // LOGGING_START
    outArray[0]["LOGGING_START"] = factory.createScalar(static_cast<uint16_t>(msg->LOGGING_START));
    // LOGGING_STOP
    outArray[0]["LOGGING_STOP"] = factory.createScalar(static_cast<uint16_t>(msg->LOGGING_STOP));
    // MISSION_START
    outArray[0]["MISSION_START"] = factory.createScalar(static_cast<uint16_t>(msg->MISSION_START));
    // NAV_WAYPOINT
    outArray[0]["NAV_WAYPOINT"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_WAYPOINT));
    // NAV_LOITER_UNLIM
    outArray[0]["NAV_LOITER_UNLIM"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_LOITER_UNLIM));
    // NAV_LOITER_TURNS
    outArray[0]["NAV_LOITER_TURNS"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_LOITER_TURNS));
    // NAV_LOITER_TIME
    outArray[0]["NAV_LOITER_TIME"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_LOITER_TIME));
    // NAV_RETURN_TO_LAUNCH
    outArray[0]["NAV_RETURN_TO_LAUNCH"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_RETURN_TO_LAUNCH));
    // NAV_LAND
    outArray[0]["NAV_LAND"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_LAND));
    // NAV_TAKEOFF
    outArray[0]["NAV_TAKEOFF"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_TAKEOFF));
    // NAV_LAND_LOCAL
    outArray[0]["NAV_LAND_LOCAL"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_LAND_LOCAL));
    // NAV_TAKEOFF_LOCAL
    outArray[0]["NAV_TAKEOFF_LOCAL"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_TAKEOFF_LOCAL));
    // NAV_FOLLOW
    outArray[0]["NAV_FOLLOW"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_FOLLOW));
    // NAV_CONTINUE_AND_CHANGE_ALT
    outArray[0]["NAV_CONTINUE_AND_CHANGE_ALT"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_CONTINUE_AND_CHANGE_ALT));
    // NAV_LOITER_TO_ALT
    outArray[0]["NAV_LOITER_TO_ALT"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_LOITER_TO_ALT));
    // NAV_ROI
    outArray[0]["NAV_ROI"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_ROI));
    // NAV_PATHPLANNING
    outArray[0]["NAV_PATHPLANNING"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_PATHPLANNING));
    // NAV_SPLINE_WAYPOINT
    outArray[0]["NAV_SPLINE_WAYPOINT"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_SPLINE_WAYPOINT));
    // NAV_VTOL_TAKEOFF
    outArray[0]["NAV_VTOL_TAKEOFF"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_VTOL_TAKEOFF));
    // NAV_VTOL_LAND
    outArray[0]["NAV_VTOL_LAND"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_VTOL_LAND));
    // NAV_GUIDED_ENABLE
    outArray[0]["NAV_GUIDED_ENABLE"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_GUIDED_ENABLE));
    // NAV_DELAY
    outArray[0]["NAV_DELAY"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_DELAY));
    // NAV_PAYLOAD_PLACE
    outArray[0]["NAV_PAYLOAD_PLACE"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_PAYLOAD_PLACE));
    // NAV_LAST
    outArray[0]["NAV_LAST"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_LAST));
    // NAV_SET_YAW_SPEED
    outArray[0]["NAV_SET_YAW_SPEED"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_SET_YAW_SPEED));
    // NAV_FENCE_RETURN_POINT
    outArray[0]["NAV_FENCE_RETURN_POINT"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_FENCE_RETURN_POINT));
    // NAV_FENCE_POLYGON_VERTEX_INCLUSION
    outArray[0]["NAV_FENCE_POLYGON_VERTEX_INCLUSION"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_FENCE_POLYGON_VERTEX_INCLUSION));
    // NAV_FENCE_POLYGON_VERTEX_EXCLUSION
    outArray[0]["NAV_FENCE_POLYGON_VERTEX_EXCLUSION"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_FENCE_POLYGON_VERTEX_EXCLUSION));
    // NAV_FENCE_CIRCLE_INCLUSION
    outArray[0]["NAV_FENCE_CIRCLE_INCLUSION"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_FENCE_CIRCLE_INCLUSION));
    // NAV_FENCE_CIRCLE_EXCLUSION
    outArray[0]["NAV_FENCE_CIRCLE_EXCLUSION"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_FENCE_CIRCLE_EXCLUSION));
    // NAV_RALLY_POINT
    outArray[0]["NAV_RALLY_POINT"] = factory.createScalar(static_cast<uint16_t>(msg->NAV_RALLY_POINT));
    // OVERRIDE_GOTO
    outArray[0]["OVERRIDE_GOTO"] = factory.createScalar(static_cast<uint16_t>(msg->OVERRIDE_GOTO));
    // PANORAMA_CREATE
    outArray[0]["PANORAMA_CREATE"] = factory.createScalar(static_cast<uint16_t>(msg->PANORAMA_CREATE));
    // PAYLOAD_PREPARE_DEPLOY
    outArray[0]["PAYLOAD_PREPARE_DEPLOY"] = factory.createScalar(static_cast<uint16_t>(msg->PAYLOAD_PREPARE_DEPLOY));
    // PAYLOAD_CONTROL_DEPLOY
    outArray[0]["PAYLOAD_CONTROL_DEPLOY"] = factory.createScalar(static_cast<uint16_t>(msg->PAYLOAD_CONTROL_DEPLOY));
    // PREFLIGHT_CALIBRATION
    outArray[0]["PREFLIGHT_CALIBRATION"] = factory.createScalar(static_cast<uint16_t>(msg->PREFLIGHT_CALIBRATION));
    // PREFLIGHT_SET_SENSOR_OFFSETS
    outArray[0]["PREFLIGHT_SET_SENSOR_OFFSETS"] = factory.createScalar(static_cast<uint16_t>(msg->PREFLIGHT_SET_SENSOR_OFFSETS));
    // PREFLIGHT_UAVCAN
    outArray[0]["PREFLIGHT_UAVCAN"] = factory.createScalar(static_cast<uint16_t>(msg->PREFLIGHT_UAVCAN));
    // PREFLIGHT_STORAGE
    outArray[0]["PREFLIGHT_STORAGE"] = factory.createScalar(static_cast<uint16_t>(msg->PREFLIGHT_STORAGE));
    // PREFLIGHT_REBOOT_SHUTDOWN
    outArray[0]["PREFLIGHT_REBOOT_SHUTDOWN"] = factory.createScalar(static_cast<uint16_t>(msg->PREFLIGHT_REBOOT_SHUTDOWN));
    // REQUEST_MESSAGE
    outArray[0]["REQUEST_MESSAGE"] = factory.createScalar(static_cast<uint16_t>(msg->REQUEST_MESSAGE));
    // REQUEST_AUTOPILOT_CAPABILITIES
    outArray[0]["REQUEST_AUTOPILOT_CAPABILITIES"] = factory.createScalar(static_cast<uint16_t>(msg->REQUEST_AUTOPILOT_CAPABILITIES));
    // REQUEST_CAMERA_INFORMATION
    outArray[0]["REQUEST_CAMERA_INFORMATION"] = factory.createScalar(static_cast<uint16_t>(msg->REQUEST_CAMERA_INFORMATION));
    // REQUEST_CAMERA_SETTINGS
    outArray[0]["REQUEST_CAMERA_SETTINGS"] = factory.createScalar(static_cast<uint16_t>(msg->REQUEST_CAMERA_SETTINGS));
    // REQUEST_STORAGE_INFORMATION
    outArray[0]["REQUEST_STORAGE_INFORMATION"] = factory.createScalar(static_cast<uint16_t>(msg->REQUEST_STORAGE_INFORMATION));
    // REQUEST_CAMERA_CAPTURE_STATUS
    outArray[0]["REQUEST_CAMERA_CAPTURE_STATUS"] = factory.createScalar(static_cast<uint16_t>(msg->REQUEST_CAMERA_CAPTURE_STATUS));
    // REQUEST_FLIGHT_INFORMATION
    outArray[0]["REQUEST_FLIGHT_INFORMATION"] = factory.createScalar(static_cast<uint16_t>(msg->REQUEST_FLIGHT_INFORMATION));
    // RESET_CAMERA_SETTINGS
    outArray[0]["RESET_CAMERA_SETTINGS"] = factory.createScalar(static_cast<uint16_t>(msg->RESET_CAMERA_SETTINGS));
    // SET_MESSAGE_INTERVAL
    outArray[0]["SET_MESSAGE_INTERVAL"] = factory.createScalar(static_cast<uint16_t>(msg->SET_MESSAGE_INTERVAL));
    // SET_CAMERA_MODE
    outArray[0]["SET_CAMERA_MODE"] = factory.createScalar(static_cast<uint16_t>(msg->SET_CAMERA_MODE));
    // SET_GUIDED_SUBMODE_STANDARD
    outArray[0]["SET_GUIDED_SUBMODE_STANDARD"] = factory.createScalar(static_cast<uint16_t>(msg->SET_GUIDED_SUBMODE_STANDARD));
    // SET_GUIDED_SUBMODE_CIRCLE
    outArray[0]["SET_GUIDED_SUBMODE_CIRCLE"] = factory.createScalar(static_cast<uint16_t>(msg->SET_GUIDED_SUBMODE_CIRCLE));
    // START_RX_PAIR
    outArray[0]["START_RX_PAIR"] = factory.createScalar(static_cast<uint16_t>(msg->START_RX_PAIR));
    // STORAGE_FORMAT
    outArray[0]["STORAGE_FORMAT"] = factory.createScalar(static_cast<uint16_t>(msg->STORAGE_FORMAT));
    // UAVCAN_GET_NODE_INFO
    outArray[0]["UAVCAN_GET_NODE_INFO"] = factory.createScalar(static_cast<uint16_t>(msg->UAVCAN_GET_NODE_INFO));
    // VIDEO_START_CAPTURE
    outArray[0]["VIDEO_START_CAPTURE"] = factory.createScalar(static_cast<uint16_t>(msg->VIDEO_START_CAPTURE));
    // VIDEO_STOP_CAPTURE
    outArray[0]["VIDEO_STOP_CAPTURE"] = factory.createScalar(static_cast<uint16_t>(msg->VIDEO_STOP_CAPTURE));
    return std::move(outArray);
  }
} //namespace CommandCode
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1