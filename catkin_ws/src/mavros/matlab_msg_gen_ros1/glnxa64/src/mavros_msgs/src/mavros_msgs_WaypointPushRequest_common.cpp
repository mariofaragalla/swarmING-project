// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/WaypointPushRequest
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
#include "mavros_msgs/WaypointPushRequest.h"
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
namespace WaypointPushRequest {
  void copy_from_arr_mavros_msgs_Waypoint_var_arr(mavros_msgs::Waypoint& val, const matlab::data::Struct& arr);
  MDArray_T get_arr_mavros_msgs_Waypoint_var_arr(MDFactory_T& factory, const mavros_msgs::WaypointPushRequest::_waypoints_type& val);
  //----------------------------------------------------------------------------
  void copy_from_arr_mavros_msgs_Waypoint_var_arr(mavros_msgs::Waypoint& val, const matlab::data::Struct& arr) {
    // _mavros_msgs_Waypoint_var_arr.frame
    try {
        const matlab::data::TypedArray<uint8_t> _waypointsframe_arr = arr["frame"];
        val.frame = _waypointsframe_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'frame' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'frame' is wrong type; expected a uint8.");
    }
    // _mavros_msgs_Waypoint_var_arr.FRAME_GLOBAL
    // _mavros_msgs_Waypoint_var_arr.FRAME_LOCAL_NED
    // _mavros_msgs_Waypoint_var_arr.FRAME_MISSION
    // _mavros_msgs_Waypoint_var_arr.FRAME_GLOBAL_REL_ALT
    // _mavros_msgs_Waypoint_var_arr.FRAME_LOCAL_ENU
    // _mavros_msgs_Waypoint_var_arr.command
    try {
        const matlab::data::TypedArray<uint16_t> _waypointscommand_arr = arr["command"];
        val.command = _waypointscommand_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'command' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'command' is wrong type; expected a uint16.");
    }
    // _mavros_msgs_Waypoint_var_arr.is_current
    try {
        const matlab::data::TypedArray<bool> _waypointsis_current_arr = arr["is_current"];
        val.is_current = _waypointsis_current_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'is_current' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'is_current' is wrong type; expected a logical.");
    }
    // _mavros_msgs_Waypoint_var_arr.autocontinue
    try {
        const matlab::data::TypedArray<bool> _waypointsautocontinue_arr = arr["autocontinue"];
        val.autocontinue = _waypointsautocontinue_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'autocontinue' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'autocontinue' is wrong type; expected a logical.");
    }
    // _mavros_msgs_Waypoint_var_arr.param1
    try {
        const matlab::data::TypedArray<float> _waypointsparam1_arr = arr["param1"];
        val.param1 = _waypointsparam1_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'param1' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'param1' is wrong type; expected a single.");
    }
    // _mavros_msgs_Waypoint_var_arr.param2
    try {
        const matlab::data::TypedArray<float> _waypointsparam2_arr = arr["param2"];
        val.param2 = _waypointsparam2_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'param2' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'param2' is wrong type; expected a single.");
    }
    // _mavros_msgs_Waypoint_var_arr.param3
    try {
        const matlab::data::TypedArray<float> _waypointsparam3_arr = arr["param3"];
        val.param3 = _waypointsparam3_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'param3' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'param3' is wrong type; expected a single.");
    }
    // _mavros_msgs_Waypoint_var_arr.param4
    try {
        const matlab::data::TypedArray<float> _waypointsparam4_arr = arr["param4"];
        val.param4 = _waypointsparam4_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'param4' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'param4' is wrong type; expected a single.");
    }
    // _mavros_msgs_Waypoint_var_arr.x_lat
    try {
        const matlab::data::TypedArray<double> _waypointsx_lat_arr = arr["x_lat"];
        val.x_lat = _waypointsx_lat_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x_lat' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x_lat' is wrong type; expected a double.");
    }
    // _mavros_msgs_Waypoint_var_arr.y_long
    try {
        const matlab::data::TypedArray<double> _waypointsy_long_arr = arr["y_long"];
        val.y_long = _waypointsy_long_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y_long' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y_long' is wrong type; expected a double.");
    }
    // _mavros_msgs_Waypoint_var_arr.z_alt
    try {
        const matlab::data::TypedArray<double> _waypointsz_alt_arr = arr["z_alt"];
        val.z_alt = _waypointsz_alt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z_alt' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z_alt' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_mavros_msgs_Waypoint_var_arr(MDFactory_T& factory, const mavros_msgs::WaypointPushRequest::_waypoints_type& val) {
    auto _waypointsoutArray = factory.createStructArray({1,val.size()},{"frame","FRAME_GLOBAL","FRAME_LOCAL_NED","FRAME_MISSION","FRAME_GLOBAL_REL_ALT","FRAME_LOCAL_ENU","command","is_current","autocontinue","param1","param2","param3","param4","x_lat","y_long","z_alt"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // _mavros_msgs_Waypoint_var_arr.frame
    	_waypointsoutArray[idx]["frame"] = factory.createScalar(val[idx].frame);
    // _mavros_msgs_Waypoint_var_arr.FRAME_GLOBAL
    	_waypointsoutArray[idx]["FRAME_GLOBAL"] = factory.createScalar(static_cast<uint8_t>(val[idx].FRAME_GLOBAL));
    // _mavros_msgs_Waypoint_var_arr.FRAME_LOCAL_NED
    	_waypointsoutArray[idx]["FRAME_LOCAL_NED"] = factory.createScalar(static_cast<uint8_t>(val[idx].FRAME_LOCAL_NED));
    // _mavros_msgs_Waypoint_var_arr.FRAME_MISSION
    	_waypointsoutArray[idx]["FRAME_MISSION"] = factory.createScalar(static_cast<uint8_t>(val[idx].FRAME_MISSION));
    // _mavros_msgs_Waypoint_var_arr.FRAME_GLOBAL_REL_ALT
    	_waypointsoutArray[idx]["FRAME_GLOBAL_REL_ALT"] = factory.createScalar(static_cast<uint8_t>(val[idx].FRAME_GLOBAL_REL_ALT));
    // _mavros_msgs_Waypoint_var_arr.FRAME_LOCAL_ENU
    	_waypointsoutArray[idx]["FRAME_LOCAL_ENU"] = factory.createScalar(static_cast<uint8_t>(val[idx].FRAME_LOCAL_ENU));
    // _mavros_msgs_Waypoint_var_arr.command
    	_waypointsoutArray[idx]["command"] = factory.createScalar(val[idx].command);
    // _mavros_msgs_Waypoint_var_arr.is_current
    	_waypointsoutArray[idx]["is_current"] = factory.createScalar(static_cast<bool>(val[idx].is_current));
    // _mavros_msgs_Waypoint_var_arr.autocontinue
    	_waypointsoutArray[idx]["autocontinue"] = factory.createScalar(static_cast<bool>(val[idx].autocontinue));
    // _mavros_msgs_Waypoint_var_arr.param1
    	_waypointsoutArray[idx]["param1"] = factory.createScalar(val[idx].param1);
    // _mavros_msgs_Waypoint_var_arr.param2
    	_waypointsoutArray[idx]["param2"] = factory.createScalar(val[idx].param2);
    // _mavros_msgs_Waypoint_var_arr.param3
    	_waypointsoutArray[idx]["param3"] = factory.createScalar(val[idx].param3);
    // _mavros_msgs_Waypoint_var_arr.param4
    	_waypointsoutArray[idx]["param4"] = factory.createScalar(val[idx].param4);
    // _mavros_msgs_Waypoint_var_arr.x_lat
    	_waypointsoutArray[idx]["x_lat"] = factory.createScalar(val[idx].x_lat);
    // _mavros_msgs_Waypoint_var_arr.y_long
    	_waypointsoutArray[idx]["y_long"] = factory.createScalar(val[idx].y_long);
    // _mavros_msgs_Waypoint_var_arr.z_alt
    	_waypointsoutArray[idx]["z_alt"] = factory.createScalar(val[idx].z_alt);
    }
    return std::move(_waypointsoutArray);
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::WaypointPushRequest>& msg, const matlab::data::StructArray arr) {
    try {
        //start_index
        const matlab::data::TypedArray<uint16_t> start_index_arr = arr[0]["start_index"];
        msg->start_index = start_index_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'start_index' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'start_index' is wrong type; expected a uint16.");
    }
    try {
        //waypoints
        const matlab::data::StructArray waypoints_arr = arr[0]["waypoints"];
        for (auto _waypointsarr : waypoints_arr) {
        	mavros_msgs::Waypoint _val;
        	copy_from_arr_mavros_msgs_Waypoint_var_arr(_val,_waypointsarr);
        	msg->waypoints.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'waypoints' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'waypoints' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::WaypointPushRequest>& msg) {
    auto outArray = factory.createStructArray({1,1},{"start_index","waypoints"});
    // start_index
    outArray[0]["start_index"] = factory.createScalar(msg->start_index);
    // waypoints
    outArray[0]["waypoints"] = get_arr_mavros_msgs_Waypoint_var_arr(factory, msg->waypoints);
    return std::move(outArray);
  }
} //namespace WaypointPushRequest
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1