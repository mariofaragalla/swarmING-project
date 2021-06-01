// Copyright 2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/MountConfigureRequest
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
#include "mavros_msgs/MountConfigure.h"
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
namespace MountConfigure_Request {
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::MountConfigure::Request::_header_type& val);
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
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::MountConfigure::Request::_header_type& val) {
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
  MAVROS_MSGS_EXPORT void copy_from_arr(mavros_msgs::MountConfigure::Request& msg, const matlab::data::StructArray arr) {
    try {
        //header
        const matlab::data::StructArray header_arr = arr[0]["header"];
        copy_from_arr_std_msgs_Header(msg.header,header_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'header' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'header' is wrong type; expected a struct.");
    }
    try {
        //mode
        const matlab::data::TypedArray<uint8_t> mode_arr = arr[0]["mode"];
        msg.mode = mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'mode' is wrong type; expected a uint8.");
    }
    try {
        //stabilize_roll
        const matlab::data::TypedArray<bool> stabilize_roll_arr = arr[0]["stabilize_roll"];
        msg.stabilize_roll = stabilize_roll_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'stabilize_roll' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'stabilize_roll' is wrong type; expected a logical.");
    }
    try {
        //stabilize_pitch
        const matlab::data::TypedArray<bool> stabilize_pitch_arr = arr[0]["stabilize_pitch"];
        msg.stabilize_pitch = stabilize_pitch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'stabilize_pitch' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'stabilize_pitch' is wrong type; expected a logical.");
    }
    try {
        //stabilize_yaw
        const matlab::data::TypedArray<bool> stabilize_yaw_arr = arr[0]["stabilize_yaw"];
        msg.stabilize_yaw = stabilize_yaw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'stabilize_yaw' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'stabilize_yaw' is wrong type; expected a logical.");
    }
    try {
        //roll_input
        const matlab::data::TypedArray<uint8_t> roll_input_arr = arr[0]["roll_input"];
        msg.roll_input = roll_input_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roll_input' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'roll_input' is wrong type; expected a uint8.");
    }
    try {
        //pitch_input
        const matlab::data::TypedArray<uint8_t> pitch_input_arr = arr[0]["pitch_input"];
        msg.pitch_input = pitch_input_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pitch_input' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'pitch_input' is wrong type; expected a uint8.");
    }
    try {
        //yaw_input
        const matlab::data::TypedArray<uint8_t> yaw_input_arr = arr[0]["yaw_input"];
        msg.yaw_input = yaw_input_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw_input' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'yaw_input' is wrong type; expected a uint8.");
    }
  }
  MAVROS_MSGS_EXPORT int64_t get_requestId_from_arr(const matlab::data::StructArray arr) {
    // Get the request ID
    int64_t requestId = 0;
    try {
        // data
        const matlab::data::TypedArray<int64_t> data_arr = arr[0]["requestId"];
        requestId = data_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'requestId' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'requestId' is wrong type; expected a int64.");
    }
    return requestId;
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::MountConfigure::Request& msg) {
    auto outArray = factory.createStructArray({1,1},{"header","mode","MODE_RETRACT","MODE_NEUTRAL","MODE_MAVLINK_TARGETING","MODE_RC_TARGETING","MODE_GPS_POINT","stabilize_roll","stabilize_pitch","stabilize_yaw","roll_input","pitch_input","yaw_input","INPUT_ANGLE_BODY_FRAME","INPUT_ANGULAR_RATE","INPUT_ANGLE_ABSOLUTE_FRAME"});
    // header
    outArray[0]["header"] = get_arr_std_msgs_Header(factory, msg.header);
    // mode
    outArray[0]["mode"] = factory.createScalar(msg.mode);
    // MODE_RETRACT
    outArray[0]["MODE_RETRACT"] = factory.createScalar(static_cast<uint8_t>(msg.MODE_RETRACT));
    // MODE_NEUTRAL
    outArray[0]["MODE_NEUTRAL"] = factory.createScalar(static_cast<uint8_t>(msg.MODE_NEUTRAL));
    // MODE_MAVLINK_TARGETING
    outArray[0]["MODE_MAVLINK_TARGETING"] = factory.createScalar(static_cast<uint8_t>(msg.MODE_MAVLINK_TARGETING));
    // MODE_RC_TARGETING
    outArray[0]["MODE_RC_TARGETING"] = factory.createScalar(static_cast<uint8_t>(msg.MODE_RC_TARGETING));
    // MODE_GPS_POINT
    outArray[0]["MODE_GPS_POINT"] = factory.createScalar(static_cast<uint8_t>(msg.MODE_GPS_POINT));
    // stabilize_roll
    outArray[0]["stabilize_roll"] = factory.createScalar(static_cast<bool>(msg.stabilize_roll));
    // stabilize_pitch
    outArray[0]["stabilize_pitch"] = factory.createScalar(static_cast<bool>(msg.stabilize_pitch));
    // stabilize_yaw
    outArray[0]["stabilize_yaw"] = factory.createScalar(static_cast<bool>(msg.stabilize_yaw));
    // roll_input
    outArray[0]["roll_input"] = factory.createScalar(msg.roll_input);
    // pitch_input
    outArray[0]["pitch_input"] = factory.createScalar(msg.pitch_input);
    // yaw_input
    outArray[0]["yaw_input"] = factory.createScalar(msg.yaw_input);
    // INPUT_ANGLE_BODY_FRAME
    outArray[0]["INPUT_ANGLE_BODY_FRAME"] = factory.createScalar(static_cast<uint8_t>(msg.INPUT_ANGLE_BODY_FRAME));
    // INPUT_ANGULAR_RATE
    outArray[0]["INPUT_ANGULAR_RATE"] = factory.createScalar(static_cast<uint8_t>(msg.INPUT_ANGULAR_RATE));
    // INPUT_ANGLE_ABSOLUTE_FRAME
    outArray[0]["INPUT_ANGLE_ABSOLUTE_FRAME"] = factory.createScalar(static_cast<uint8_t>(msg.INPUT_ANGLE_ABSOLUTE_FRAME));
    return std::move(outArray);
  }
} //namespace MountConfigure_Request
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1