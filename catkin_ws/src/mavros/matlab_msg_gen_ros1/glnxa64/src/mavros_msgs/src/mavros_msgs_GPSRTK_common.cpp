// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/GPSRTK
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
#include "mavros_msgs/GPSRTK.h"
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
namespace GPSRTK {
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::GPSRTK::_header_type& val);
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
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::GPSRTK::_header_type& val) {
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
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::GPSRTK>& msg, const matlab::data::StructArray arr) {
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
        //rtk_receiver_id
        const matlab::data::TypedArray<uint8_t> rtk_receiver_id_arr = arr[0]["rtk_receiver_id"];
        msg->rtk_receiver_id = rtk_receiver_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rtk_receiver_id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'rtk_receiver_id' is wrong type; expected a uint8.");
    }
    try {
        //wn
        const matlab::data::TypedArray<int16_t> wn_arr = arr[0]["wn"];
        msg->wn = wn_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'wn' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'wn' is wrong type; expected a int16.");
    }
    try {
        //tow
        const matlab::data::TypedArray<uint32_t> tow_arr = arr[0]["tow"];
        msg->tow = tow_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tow' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'tow' is wrong type; expected a uint32.");
    }
    try {
        //rtk_health
        const matlab::data::TypedArray<uint8_t> rtk_health_arr = arr[0]["rtk_health"];
        msg->rtk_health = rtk_health_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rtk_health' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'rtk_health' is wrong type; expected a uint8.");
    }
    try {
        //rtk_rate
        const matlab::data::TypedArray<uint8_t> rtk_rate_arr = arr[0]["rtk_rate"];
        msg->rtk_rate = rtk_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rtk_rate' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'rtk_rate' is wrong type; expected a uint8.");
    }
    try {
        //nsats
        const matlab::data::TypedArray<uint8_t> nsats_arr = arr[0]["nsats"];
        msg->nsats = nsats_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'nsats' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'nsats' is wrong type; expected a uint8.");
    }
    try {
        //baseline_a
        const matlab::data::TypedArray<int32_t> baseline_a_arr = arr[0]["baseline_a"];
        msg->baseline_a = baseline_a_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'baseline_a' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'baseline_a' is wrong type; expected a int32.");
    }
    try {
        //baseline_b
        const matlab::data::TypedArray<int32_t> baseline_b_arr = arr[0]["baseline_b"];
        msg->baseline_b = baseline_b_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'baseline_b' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'baseline_b' is wrong type; expected a int32.");
    }
    try {
        //baseline_c
        const matlab::data::TypedArray<int32_t> baseline_c_arr = arr[0]["baseline_c"];
        msg->baseline_c = baseline_c_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'baseline_c' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'baseline_c' is wrong type; expected a int32.");
    }
    try {
        //accuracy
        const matlab::data::TypedArray<uint32_t> accuracy_arr = arr[0]["accuracy"];
        msg->accuracy = accuracy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accuracy' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'accuracy' is wrong type; expected a uint32.");
    }
    try {
        //iar_num_hypotheses
        const matlab::data::TypedArray<int32_t> iar_num_hypotheses_arr = arr[0]["iar_num_hypotheses"];
        msg->iar_num_hypotheses = iar_num_hypotheses_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'iar_num_hypotheses' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'iar_num_hypotheses' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::GPSRTK>& msg) {
    auto outArray = factory.createStructArray({1,1},{"header","rtk_receiver_id","wn","tow","rtk_health","rtk_rate","nsats","baseline_a","baseline_b","baseline_c","accuracy","iar_num_hypotheses"});
    // header
    outArray[0]["header"] = get_arr_std_msgs_Header(factory, msg->header);
    // rtk_receiver_id
    outArray[0]["rtk_receiver_id"] = factory.createScalar(msg->rtk_receiver_id);
    // wn
    outArray[0]["wn"] = factory.createScalar(msg->wn);
    // tow
    outArray[0]["tow"] = factory.createScalar(msg->tow);
    // rtk_health
    outArray[0]["rtk_health"] = factory.createScalar(msg->rtk_health);
    // rtk_rate
    outArray[0]["rtk_rate"] = factory.createScalar(msg->rtk_rate);
    // nsats
    outArray[0]["nsats"] = factory.createScalar(msg->nsats);
    // baseline_a
    outArray[0]["baseline_a"] = factory.createScalar(msg->baseline_a);
    // baseline_b
    outArray[0]["baseline_b"] = factory.createScalar(msg->baseline_b);
    // baseline_c
    outArray[0]["baseline_c"] = factory.createScalar(msg->baseline_c);
    // accuracy
    outArray[0]["accuracy"] = factory.createScalar(msg->accuracy);
    // iar_num_hypotheses
    outArray[0]["iar_num_hypotheses"] = factory.createScalar(msg->iar_num_hypotheses);
    return std::move(outArray);
  }
} //namespace GPSRTK
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1