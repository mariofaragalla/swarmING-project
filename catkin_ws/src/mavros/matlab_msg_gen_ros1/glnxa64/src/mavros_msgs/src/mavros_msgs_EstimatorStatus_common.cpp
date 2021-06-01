// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/EstimatorStatus
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
#include "mavros_msgs/EstimatorStatus.h"
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
namespace EstimatorStatus {
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::EstimatorStatus::_header_type& val);
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
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::EstimatorStatus::_header_type& val) {
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
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::EstimatorStatus>& msg, const matlab::data::StructArray arr) {
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
        //attitude_status_flag
        const matlab::data::TypedArray<bool> attitude_status_flag_arr = arr[0]["attitude_status_flag"];
        msg->attitude_status_flag = attitude_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'attitude_status_flag' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'attitude_status_flag' is wrong type; expected a logical.");
    }
    try {
        //velocity_horiz_status_flag
        const matlab::data::TypedArray<bool> velocity_horiz_status_flag_arr = arr[0]["velocity_horiz_status_flag"];
        msg->velocity_horiz_status_flag = velocity_horiz_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'velocity_horiz_status_flag' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'velocity_horiz_status_flag' is wrong type; expected a logical.");
    }
    try {
        //velocity_vert_status_flag
        const matlab::data::TypedArray<bool> velocity_vert_status_flag_arr = arr[0]["velocity_vert_status_flag"];
        msg->velocity_vert_status_flag = velocity_vert_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'velocity_vert_status_flag' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'velocity_vert_status_flag' is wrong type; expected a logical.");
    }
    try {
        //pos_horiz_rel_status_flag
        const matlab::data::TypedArray<bool> pos_horiz_rel_status_flag_arr = arr[0]["pos_horiz_rel_status_flag"];
        msg->pos_horiz_rel_status_flag = pos_horiz_rel_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pos_horiz_rel_status_flag' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'pos_horiz_rel_status_flag' is wrong type; expected a logical.");
    }
    try {
        //pos_horiz_abs_status_flag
        const matlab::data::TypedArray<bool> pos_horiz_abs_status_flag_arr = arr[0]["pos_horiz_abs_status_flag"];
        msg->pos_horiz_abs_status_flag = pos_horiz_abs_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pos_horiz_abs_status_flag' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'pos_horiz_abs_status_flag' is wrong type; expected a logical.");
    }
    try {
        //pos_vert_abs_status_flag
        const matlab::data::TypedArray<bool> pos_vert_abs_status_flag_arr = arr[0]["pos_vert_abs_status_flag"];
        msg->pos_vert_abs_status_flag = pos_vert_abs_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pos_vert_abs_status_flag' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'pos_vert_abs_status_flag' is wrong type; expected a logical.");
    }
    try {
        //pos_vert_agl_status_flag
        const matlab::data::TypedArray<bool> pos_vert_agl_status_flag_arr = arr[0]["pos_vert_agl_status_flag"];
        msg->pos_vert_agl_status_flag = pos_vert_agl_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pos_vert_agl_status_flag' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'pos_vert_agl_status_flag' is wrong type; expected a logical.");
    }
    try {
        //const_pos_mode_status_flag
        const matlab::data::TypedArray<bool> const_pos_mode_status_flag_arr = arr[0]["const_pos_mode_status_flag"];
        msg->const_pos_mode_status_flag = const_pos_mode_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'const_pos_mode_status_flag' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'const_pos_mode_status_flag' is wrong type; expected a logical.");
    }
    try {
        //pred_pos_horiz_rel_status_flag
        const matlab::data::TypedArray<bool> pred_pos_horiz_rel_status_flag_arr = arr[0]["pred_pos_horiz_rel_status_flag"];
        msg->pred_pos_horiz_rel_status_flag = pred_pos_horiz_rel_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pred_pos_horiz_rel_status_flag' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'pred_pos_horiz_rel_status_flag' is wrong type; expected a logical.");
    }
    try {
        //pred_pos_horiz_abs_status_flag
        const matlab::data::TypedArray<bool> pred_pos_horiz_abs_status_flag_arr = arr[0]["pred_pos_horiz_abs_status_flag"];
        msg->pred_pos_horiz_abs_status_flag = pred_pos_horiz_abs_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pred_pos_horiz_abs_status_flag' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'pred_pos_horiz_abs_status_flag' is wrong type; expected a logical.");
    }
    try {
        //gps_glitch_status_flag
        const matlab::data::TypedArray<bool> gps_glitch_status_flag_arr = arr[0]["gps_glitch_status_flag"];
        msg->gps_glitch_status_flag = gps_glitch_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gps_glitch_status_flag' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'gps_glitch_status_flag' is wrong type; expected a logical.");
    }
    try {
        //accel_error_status_flag
        const matlab::data::TypedArray<bool> accel_error_status_flag_arr = arr[0]["accel_error_status_flag"];
        msg->accel_error_status_flag = accel_error_status_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accel_error_status_flag' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'accel_error_status_flag' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::EstimatorStatus>& msg) {
    auto outArray = factory.createStructArray({1,1},{"header","attitude_status_flag","velocity_horiz_status_flag","velocity_vert_status_flag","pos_horiz_rel_status_flag","pos_horiz_abs_status_flag","pos_vert_abs_status_flag","pos_vert_agl_status_flag","const_pos_mode_status_flag","pred_pos_horiz_rel_status_flag","pred_pos_horiz_abs_status_flag","gps_glitch_status_flag","accel_error_status_flag"});
    // header
    outArray[0]["header"] = get_arr_std_msgs_Header(factory, msg->header);
    // attitude_status_flag
    outArray[0]["attitude_status_flag"] = factory.createScalar(static_cast<bool>(msg->attitude_status_flag));
    // velocity_horiz_status_flag
    outArray[0]["velocity_horiz_status_flag"] = factory.createScalar(static_cast<bool>(msg->velocity_horiz_status_flag));
    // velocity_vert_status_flag
    outArray[0]["velocity_vert_status_flag"] = factory.createScalar(static_cast<bool>(msg->velocity_vert_status_flag));
    // pos_horiz_rel_status_flag
    outArray[0]["pos_horiz_rel_status_flag"] = factory.createScalar(static_cast<bool>(msg->pos_horiz_rel_status_flag));
    // pos_horiz_abs_status_flag
    outArray[0]["pos_horiz_abs_status_flag"] = factory.createScalar(static_cast<bool>(msg->pos_horiz_abs_status_flag));
    // pos_vert_abs_status_flag
    outArray[0]["pos_vert_abs_status_flag"] = factory.createScalar(static_cast<bool>(msg->pos_vert_abs_status_flag));
    // pos_vert_agl_status_flag
    outArray[0]["pos_vert_agl_status_flag"] = factory.createScalar(static_cast<bool>(msg->pos_vert_agl_status_flag));
    // const_pos_mode_status_flag
    outArray[0]["const_pos_mode_status_flag"] = factory.createScalar(static_cast<bool>(msg->const_pos_mode_status_flag));
    // pred_pos_horiz_rel_status_flag
    outArray[0]["pred_pos_horiz_rel_status_flag"] = factory.createScalar(static_cast<bool>(msg->pred_pos_horiz_rel_status_flag));
    // pred_pos_horiz_abs_status_flag
    outArray[0]["pred_pos_horiz_abs_status_flag"] = factory.createScalar(static_cast<bool>(msg->pred_pos_horiz_abs_status_flag));
    // gps_glitch_status_flag
    outArray[0]["gps_glitch_status_flag"] = factory.createScalar(static_cast<bool>(msg->gps_glitch_status_flag));
    // accel_error_status_flag
    outArray[0]["accel_error_status_flag"] = factory.createScalar(static_cast<bool>(msg->accel_error_status_flag));
    return std::move(outArray);
  }
} //namespace EstimatorStatus
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1