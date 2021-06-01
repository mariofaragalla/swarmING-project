// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/CompanionProcessStatus
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
#include "mavros_msgs/CompanionProcessStatus.h"
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
namespace CompanionProcessStatus {
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::CompanionProcessStatus::_header_type& val);
  void copy_from_arr_ros_Time(ros::Time& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_ros_Time(MDFactory_T& factory, const std_msgs::Header::_stamp_type& val);
  //----------------------------------------------------------------------------
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr) {
    // _std_msgs_Header.seq
    try {
        const matlab::data::TypedArray<uint32_t> _headerseq_arr = arr[0]["seq"];
        val.seq = _headerseq_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'seq' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'seq' is wrong type; expected a uint32.");
    }
    // _std_msgs_Header.stamp
    try {
        const matlab::data::StructArray _headerstamp_arr = arr[0]["stamp"];
        copy_from_arr_ros_Time(val.stamp,_headerstamp_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'stamp' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'stamp' is wrong type; expected a struct.");
    }
    // _std_msgs_Header.frame_id
    try {
        const matlab::data::CharArray _headerframe_id_arr = arr[0]["frame_id"];
        val.frame_id = _headerframe_id_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'frame_id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'frame_id' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::CompanionProcessStatus::_header_type& val) {
    auto _headeroutArray = factory.createStructArray({1,1},{"seq","stamp","frame_id"});
    // _std_msgs_Header.seq
    _headeroutArray[0]["seq"] = factory.createScalar(val.seq);
    // _std_msgs_Header.stamp
    _headeroutArray[0]["stamp"] = get_arr_ros_Time(factory, val.stamp);
    // _std_msgs_Header.frame_id
    _headeroutArray[0]["frame_id"] = factory.createCharArray(val.frame_id);
    return std::move(_headeroutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_ros_Time(ros::Time& val, const matlab::data::StructArray& arr) {
    // _ros_Time.sec
    try {
        const matlab::data::TypedArray<uint32_t> _header_stampsec_arr = arr[0]["sec"];
        val.sec = _header_stampsec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sec' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'sec' is wrong type; expected a uint32.");
    }
    // _ros_Time.nsec
    try {
        const matlab::data::TypedArray<uint32_t> _header_stampnsec_arr = arr[0]["nsec"];
        val.nsec = _header_stampnsec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'nsec' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'nsec' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_ros_Time(MDFactory_T& factory, const std_msgs::Header::_stamp_type& val) {
    auto _header_stampoutArray = factory.createStructArray({1,1},{"sec","nsec"});
    // _ros_Time.sec
    _header_stampoutArray[0]["sec"] = factory.createScalar(val.sec);
    // _ros_Time.nsec
    _header_stampoutArray[0]["nsec"] = factory.createScalar(val.nsec);
    return std::move(_header_stampoutArray);
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::CompanionProcessStatus>& msg, const matlab::data::StructArray arr) {
    try {
        //header
        const matlab::data::StructArray header_arr = arr[0]["header"];
        copy_from_arr_std_msgs_Header(msg->header,header_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'header' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'header' is wrong type; expected a struct.");
    }
    try {
        //state
        const matlab::data::TypedArray<uint8_t> state_arr = arr[0]["state"];
        msg->state = state_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'state' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'state' is wrong type; expected a uint8.");
    }
    try {
        //component
        const matlab::data::TypedArray<uint8_t> component_arr = arr[0]["component"];
        msg->component = component_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'component' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'component' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::CompanionProcessStatus>& msg) {
    auto outArray = factory.createStructArray({1,1},{"header","state","component","MAV_STATE_UNINIT","MAV_STATE_BOOT","MAV_STATE_CALIBRATING","MAV_STATE_STANDBY","MAV_STATE_ACTIVE","MAV_STATE_CRITICAL","MAV_STATE_EMERGENCY","MAV_STATE_POWEROFF","MAV_STATE_FLIGHT_TERMINATION","MAV_COMP_ID_OBSTACLE_AVOIDANCE","MAV_COMP_ID_VISUAL_INERTIAL_ODOMETRY"});
    // header
    outArray[0]["header"] = get_arr_std_msgs_Header(factory, msg->header);
    // state
    outArray[0]["state"] = factory.createScalar(msg->state);
    // component
    outArray[0]["component"] = factory.createScalar(msg->component);
    // MAV_STATE_UNINIT
    outArray[0]["MAV_STATE_UNINIT"] = factory.createScalar(static_cast<uint8_t>(msg->MAV_STATE_UNINIT));
    // MAV_STATE_BOOT
    outArray[0]["MAV_STATE_BOOT"] = factory.createScalar(static_cast<uint8_t>(msg->MAV_STATE_BOOT));
    // MAV_STATE_CALIBRATING
    outArray[0]["MAV_STATE_CALIBRATING"] = factory.createScalar(static_cast<uint8_t>(msg->MAV_STATE_CALIBRATING));
    // MAV_STATE_STANDBY
    outArray[0]["MAV_STATE_STANDBY"] = factory.createScalar(static_cast<uint8_t>(msg->MAV_STATE_STANDBY));
    // MAV_STATE_ACTIVE
    outArray[0]["MAV_STATE_ACTIVE"] = factory.createScalar(static_cast<uint8_t>(msg->MAV_STATE_ACTIVE));
    // MAV_STATE_CRITICAL
    outArray[0]["MAV_STATE_CRITICAL"] = factory.createScalar(static_cast<uint8_t>(msg->MAV_STATE_CRITICAL));
    // MAV_STATE_EMERGENCY
    outArray[0]["MAV_STATE_EMERGENCY"] = factory.createScalar(static_cast<uint8_t>(msg->MAV_STATE_EMERGENCY));
    // MAV_STATE_POWEROFF
    outArray[0]["MAV_STATE_POWEROFF"] = factory.createScalar(static_cast<uint8_t>(msg->MAV_STATE_POWEROFF));
    // MAV_STATE_FLIGHT_TERMINATION
    outArray[0]["MAV_STATE_FLIGHT_TERMINATION"] = factory.createScalar(static_cast<uint8_t>(msg->MAV_STATE_FLIGHT_TERMINATION));
    // MAV_COMP_ID_OBSTACLE_AVOIDANCE
    outArray[0]["MAV_COMP_ID_OBSTACLE_AVOIDANCE"] = factory.createScalar(static_cast<uint8_t>(msg->MAV_COMP_ID_OBSTACLE_AVOIDANCE));
    // MAV_COMP_ID_VISUAL_INERTIAL_ODOMETRY
    outArray[0]["MAV_COMP_ID_VISUAL_INERTIAL_ODOMETRY"] = factory.createScalar(static_cast<uint8_t>(msg->MAV_COMP_ID_VISUAL_INERTIAL_ODOMETRY));
    return std::move(outArray);
  }
} //namespace CompanionProcessStatus
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1