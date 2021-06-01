// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/State
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
#include "mavros_msgs/State.h"
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
namespace State {
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::State::_header_type& val);
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
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::State::_header_type& val) {
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
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::State>& msg, const matlab::data::StructArray arr) {
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
        //connected
        const matlab::data::TypedArray<bool> connected_arr = arr[0]["connected"];
        msg->connected = connected_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'connected' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'connected' is wrong type; expected a logical.");
    }
    try {
        //armed
        const matlab::data::TypedArray<bool> armed_arr = arr[0]["armed"];
        msg->armed = armed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'armed' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'armed' is wrong type; expected a logical.");
    }
    try {
        //guided
        const matlab::data::TypedArray<bool> guided_arr = arr[0]["guided"];
        msg->guided = guided_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'guided' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'guided' is wrong type; expected a logical.");
    }
    try {
        //manual_input
        const matlab::data::TypedArray<bool> manual_input_arr = arr[0]["manual_input"];
        msg->manual_input = manual_input_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'manual_input' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'manual_input' is wrong type; expected a logical.");
    }
    try {
        //mode
        const matlab::data::CharArray mode_arr = arr[0]["mode"];
        msg->mode = mode_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'mode' is wrong type; expected a string.");
    }
    try {
        //system_status
        const matlab::data::TypedArray<uint8_t> system_status_arr = arr[0]["system_status"];
        msg->system_status = system_status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'system_status' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'system_status' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::State>& msg) {
    auto outArray = factory.createStructArray({1,1},{"header","connected","armed","guided","manual_input","mode","system_status","MODE_APM_PLANE_MANUAL","MODE_APM_PLANE_CIRCLE","MODE_APM_PLANE_STABILIZE","MODE_APM_PLANE_TRAINING","MODE_APM_PLANE_ACRO","MODE_APM_PLANE_FBWA","MODE_APM_PLANE_FBWB","MODE_APM_PLANE_CRUISE","MODE_APM_PLANE_AUTOTUNE","MODE_APM_PLANE_AUTO","MODE_APM_PLANE_RTL","MODE_APM_PLANE_LOITER","MODE_APM_PLANE_LAND","MODE_APM_PLANE_GUIDED","MODE_APM_PLANE_INITIALISING","MODE_APM_PLANE_QSTABILIZE","MODE_APM_PLANE_QHOVER","MODE_APM_PLANE_QLOITER","MODE_APM_PLANE_QLAND","MODE_APM_PLANE_QRTL","MODE_APM_COPTER_STABILIZE","MODE_APM_COPTER_ACRO","MODE_APM_COPTER_ALT_HOLD","MODE_APM_COPTER_AUTO","MODE_APM_COPTER_GUIDED","MODE_APM_COPTER_LOITER","MODE_APM_COPTER_RTL","MODE_APM_COPTER_CIRCLE","MODE_APM_COPTER_POSITION","MODE_APM_COPTER_LAND","MODE_APM_COPTER_OF_LOITER","MODE_APM_COPTER_DRIFT","MODE_APM_COPTER_SPORT","MODE_APM_COPTER_FLIP","MODE_APM_COPTER_AUTOTUNE","MODE_APM_COPTER_POSHOLD","MODE_APM_COPTER_BRAKE","MODE_APM_COPTER_THROW","MODE_APM_COPTER_AVOID_ADSB","MODE_APM_COPTER_GUIDED_NOGPS","MODE_APM_ROVER_MANUAL","MODE_APM_ROVER_LEARNING","MODE_APM_ROVER_STEERING","MODE_APM_ROVER_HOLD","MODE_APM_ROVER_AUTO","MODE_APM_ROVER_RTL","MODE_APM_ROVER_GUIDED","MODE_APM_ROVER_INITIALISING","MODE_PX4_MANUAL","MODE_PX4_ACRO","MODE_PX4_ALTITUDE","MODE_PX4_POSITION","MODE_PX4_OFFBOARD","MODE_PX4_STABILIZED","MODE_PX4_RATTITUDE","MODE_PX4_MISSION","MODE_PX4_LOITER","MODE_PX4_RTL","MODE_PX4_LAND","MODE_PX4_RTGS","MODE_PX4_READY","MODE_PX4_TAKEOFF"});
    // header
    outArray[0]["header"] = get_arr_std_msgs_Header(factory, msg->header);
    // connected
    outArray[0]["connected"] = factory.createScalar(static_cast<bool>(msg->connected));
    // armed
    outArray[0]["armed"] = factory.createScalar(static_cast<bool>(msg->armed));
    // guided
    outArray[0]["guided"] = factory.createScalar(static_cast<bool>(msg->guided));
    // manual_input
    outArray[0]["manual_input"] = factory.createScalar(static_cast<bool>(msg->manual_input));
    // mode
    outArray[0]["mode"] = factory.createCharArray(msg->mode);
    // system_status
    outArray[0]["system_status"] = factory.createScalar(msg->system_status);
    // MODE_APM_PLANE_MANUAL
    outArray[0]["MODE_APM_PLANE_MANUAL"] = factory.createCharArray(msg->MODE_APM_PLANE_MANUAL);
    // MODE_APM_PLANE_CIRCLE
    outArray[0]["MODE_APM_PLANE_CIRCLE"] = factory.createCharArray(msg->MODE_APM_PLANE_CIRCLE);
    // MODE_APM_PLANE_STABILIZE
    outArray[0]["MODE_APM_PLANE_STABILIZE"] = factory.createCharArray(msg->MODE_APM_PLANE_STABILIZE);
    // MODE_APM_PLANE_TRAINING
    outArray[0]["MODE_APM_PLANE_TRAINING"] = factory.createCharArray(msg->MODE_APM_PLANE_TRAINING);
    // MODE_APM_PLANE_ACRO
    outArray[0]["MODE_APM_PLANE_ACRO"] = factory.createCharArray(msg->MODE_APM_PLANE_ACRO);
    // MODE_APM_PLANE_FBWA
    outArray[0]["MODE_APM_PLANE_FBWA"] = factory.createCharArray(msg->MODE_APM_PLANE_FBWA);
    // MODE_APM_PLANE_FBWB
    outArray[0]["MODE_APM_PLANE_FBWB"] = factory.createCharArray(msg->MODE_APM_PLANE_FBWB);
    // MODE_APM_PLANE_CRUISE
    outArray[0]["MODE_APM_PLANE_CRUISE"] = factory.createCharArray(msg->MODE_APM_PLANE_CRUISE);
    // MODE_APM_PLANE_AUTOTUNE
    outArray[0]["MODE_APM_PLANE_AUTOTUNE"] = factory.createCharArray(msg->MODE_APM_PLANE_AUTOTUNE);
    // MODE_APM_PLANE_AUTO
    outArray[0]["MODE_APM_PLANE_AUTO"] = factory.createCharArray(msg->MODE_APM_PLANE_AUTO);
    // MODE_APM_PLANE_RTL
    outArray[0]["MODE_APM_PLANE_RTL"] = factory.createCharArray(msg->MODE_APM_PLANE_RTL);
    // MODE_APM_PLANE_LOITER
    outArray[0]["MODE_APM_PLANE_LOITER"] = factory.createCharArray(msg->MODE_APM_PLANE_LOITER);
    // MODE_APM_PLANE_LAND
    outArray[0]["MODE_APM_PLANE_LAND"] = factory.createCharArray(msg->MODE_APM_PLANE_LAND);
    // MODE_APM_PLANE_GUIDED
    outArray[0]["MODE_APM_PLANE_GUIDED"] = factory.createCharArray(msg->MODE_APM_PLANE_GUIDED);
    // MODE_APM_PLANE_INITIALISING
    outArray[0]["MODE_APM_PLANE_INITIALISING"] = factory.createCharArray(msg->MODE_APM_PLANE_INITIALISING);
    // MODE_APM_PLANE_QSTABILIZE
    outArray[0]["MODE_APM_PLANE_QSTABILIZE"] = factory.createCharArray(msg->MODE_APM_PLANE_QSTABILIZE);
    // MODE_APM_PLANE_QHOVER
    outArray[0]["MODE_APM_PLANE_QHOVER"] = factory.createCharArray(msg->MODE_APM_PLANE_QHOVER);
    // MODE_APM_PLANE_QLOITER
    outArray[0]["MODE_APM_PLANE_QLOITER"] = factory.createCharArray(msg->MODE_APM_PLANE_QLOITER);
    // MODE_APM_PLANE_QLAND
    outArray[0]["MODE_APM_PLANE_QLAND"] = factory.createCharArray(msg->MODE_APM_PLANE_QLAND);
    // MODE_APM_PLANE_QRTL
    outArray[0]["MODE_APM_PLANE_QRTL"] = factory.createCharArray(msg->MODE_APM_PLANE_QRTL);
    // MODE_APM_COPTER_STABILIZE
    outArray[0]["MODE_APM_COPTER_STABILIZE"] = factory.createCharArray(msg->MODE_APM_COPTER_STABILIZE);
    // MODE_APM_COPTER_ACRO
    outArray[0]["MODE_APM_COPTER_ACRO"] = factory.createCharArray(msg->MODE_APM_COPTER_ACRO);
    // MODE_APM_COPTER_ALT_HOLD
    outArray[0]["MODE_APM_COPTER_ALT_HOLD"] = factory.createCharArray(msg->MODE_APM_COPTER_ALT_HOLD);
    // MODE_APM_COPTER_AUTO
    outArray[0]["MODE_APM_COPTER_AUTO"] = factory.createCharArray(msg->MODE_APM_COPTER_AUTO);
    // MODE_APM_COPTER_GUIDED
    outArray[0]["MODE_APM_COPTER_GUIDED"] = factory.createCharArray(msg->MODE_APM_COPTER_GUIDED);
    // MODE_APM_COPTER_LOITER
    outArray[0]["MODE_APM_COPTER_LOITER"] = factory.createCharArray(msg->MODE_APM_COPTER_LOITER);
    // MODE_APM_COPTER_RTL
    outArray[0]["MODE_APM_COPTER_RTL"] = factory.createCharArray(msg->MODE_APM_COPTER_RTL);
    // MODE_APM_COPTER_CIRCLE
    outArray[0]["MODE_APM_COPTER_CIRCLE"] = factory.createCharArray(msg->MODE_APM_COPTER_CIRCLE);
    // MODE_APM_COPTER_POSITION
    outArray[0]["MODE_APM_COPTER_POSITION"] = factory.createCharArray(msg->MODE_APM_COPTER_POSITION);
    // MODE_APM_COPTER_LAND
    outArray[0]["MODE_APM_COPTER_LAND"] = factory.createCharArray(msg->MODE_APM_COPTER_LAND);
    // MODE_APM_COPTER_OF_LOITER
    outArray[0]["MODE_APM_COPTER_OF_LOITER"] = factory.createCharArray(msg->MODE_APM_COPTER_OF_LOITER);
    // MODE_APM_COPTER_DRIFT
    outArray[0]["MODE_APM_COPTER_DRIFT"] = factory.createCharArray(msg->MODE_APM_COPTER_DRIFT);
    // MODE_APM_COPTER_SPORT
    outArray[0]["MODE_APM_COPTER_SPORT"] = factory.createCharArray(msg->MODE_APM_COPTER_SPORT);
    // MODE_APM_COPTER_FLIP
    outArray[0]["MODE_APM_COPTER_FLIP"] = factory.createCharArray(msg->MODE_APM_COPTER_FLIP);
    // MODE_APM_COPTER_AUTOTUNE
    outArray[0]["MODE_APM_COPTER_AUTOTUNE"] = factory.createCharArray(msg->MODE_APM_COPTER_AUTOTUNE);
    // MODE_APM_COPTER_POSHOLD
    outArray[0]["MODE_APM_COPTER_POSHOLD"] = factory.createCharArray(msg->MODE_APM_COPTER_POSHOLD);
    // MODE_APM_COPTER_BRAKE
    outArray[0]["MODE_APM_COPTER_BRAKE"] = factory.createCharArray(msg->MODE_APM_COPTER_BRAKE);
    // MODE_APM_COPTER_THROW
    outArray[0]["MODE_APM_COPTER_THROW"] = factory.createCharArray(msg->MODE_APM_COPTER_THROW);
    // MODE_APM_COPTER_AVOID_ADSB
    outArray[0]["MODE_APM_COPTER_AVOID_ADSB"] = factory.createCharArray(msg->MODE_APM_COPTER_AVOID_ADSB);
    // MODE_APM_COPTER_GUIDED_NOGPS
    outArray[0]["MODE_APM_COPTER_GUIDED_NOGPS"] = factory.createCharArray(msg->MODE_APM_COPTER_GUIDED_NOGPS);
    // MODE_APM_ROVER_MANUAL
    outArray[0]["MODE_APM_ROVER_MANUAL"] = factory.createCharArray(msg->MODE_APM_ROVER_MANUAL);
    // MODE_APM_ROVER_LEARNING
    outArray[0]["MODE_APM_ROVER_LEARNING"] = factory.createCharArray(msg->MODE_APM_ROVER_LEARNING);
    // MODE_APM_ROVER_STEERING
    outArray[0]["MODE_APM_ROVER_STEERING"] = factory.createCharArray(msg->MODE_APM_ROVER_STEERING);
    // MODE_APM_ROVER_HOLD
    outArray[0]["MODE_APM_ROVER_HOLD"] = factory.createCharArray(msg->MODE_APM_ROVER_HOLD);
    // MODE_APM_ROVER_AUTO
    outArray[0]["MODE_APM_ROVER_AUTO"] = factory.createCharArray(msg->MODE_APM_ROVER_AUTO);
    // MODE_APM_ROVER_RTL
    outArray[0]["MODE_APM_ROVER_RTL"] = factory.createCharArray(msg->MODE_APM_ROVER_RTL);
    // MODE_APM_ROVER_GUIDED
    outArray[0]["MODE_APM_ROVER_GUIDED"] = factory.createCharArray(msg->MODE_APM_ROVER_GUIDED);
    // MODE_APM_ROVER_INITIALISING
    outArray[0]["MODE_APM_ROVER_INITIALISING"] = factory.createCharArray(msg->MODE_APM_ROVER_INITIALISING);
    // MODE_PX4_MANUAL
    outArray[0]["MODE_PX4_MANUAL"] = factory.createCharArray(msg->MODE_PX4_MANUAL);
    // MODE_PX4_ACRO
    outArray[0]["MODE_PX4_ACRO"] = factory.createCharArray(msg->MODE_PX4_ACRO);
    // MODE_PX4_ALTITUDE
    outArray[0]["MODE_PX4_ALTITUDE"] = factory.createCharArray(msg->MODE_PX4_ALTITUDE);
    // MODE_PX4_POSITION
    outArray[0]["MODE_PX4_POSITION"] = factory.createCharArray(msg->MODE_PX4_POSITION);
    // MODE_PX4_OFFBOARD
    outArray[0]["MODE_PX4_OFFBOARD"] = factory.createCharArray(msg->MODE_PX4_OFFBOARD);
    // MODE_PX4_STABILIZED
    outArray[0]["MODE_PX4_STABILIZED"] = factory.createCharArray(msg->MODE_PX4_STABILIZED);
    // MODE_PX4_RATTITUDE
    outArray[0]["MODE_PX4_RATTITUDE"] = factory.createCharArray(msg->MODE_PX4_RATTITUDE);
    // MODE_PX4_MISSION
    outArray[0]["MODE_PX4_MISSION"] = factory.createCharArray(msg->MODE_PX4_MISSION);
    // MODE_PX4_LOITER
    outArray[0]["MODE_PX4_LOITER"] = factory.createCharArray(msg->MODE_PX4_LOITER);
    // MODE_PX4_RTL
    outArray[0]["MODE_PX4_RTL"] = factory.createCharArray(msg->MODE_PX4_RTL);
    // MODE_PX4_LAND
    outArray[0]["MODE_PX4_LAND"] = factory.createCharArray(msg->MODE_PX4_LAND);
    // MODE_PX4_RTGS
    outArray[0]["MODE_PX4_RTGS"] = factory.createCharArray(msg->MODE_PX4_RTGS);
    // MODE_PX4_READY
    outArray[0]["MODE_PX4_READY"] = factory.createCharArray(msg->MODE_PX4_READY);
    // MODE_PX4_TAKEOFF
    outArray[0]["MODE_PX4_TAKEOFF"] = factory.createCharArray(msg->MODE_PX4_TAKEOFF);
    return std::move(outArray);
  }
} //namespace State
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1