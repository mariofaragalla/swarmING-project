// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/VehicleInfo
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
#include "mavros_msgs/VehicleInfo.h"
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
namespace VehicleInfo {
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::VehicleInfo::_header_type& val);
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
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::VehicleInfo::_header_type& val) {
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
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::VehicleInfo>& msg, const matlab::data::StructArray arr) {
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
        //available_info
        const matlab::data::TypedArray<uint8_t> available_info_arr = arr[0]["available_info"];
        msg->available_info = available_info_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'available_info' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'available_info' is wrong type; expected a uint8.");
    }
    try {
        //sysid
        const matlab::data::TypedArray<uint8_t> sysid_arr = arr[0]["sysid"];
        msg->sysid = sysid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sysid' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'sysid' is wrong type; expected a uint8.");
    }
    try {
        //compid
        const matlab::data::TypedArray<uint8_t> compid_arr = arr[0]["compid"];
        msg->compid = compid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'compid' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'compid' is wrong type; expected a uint8.");
    }
    try {
        //autopilot
        const matlab::data::TypedArray<uint8_t> autopilot_arr = arr[0]["autopilot"];
        msg->autopilot = autopilot_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'autopilot' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'autopilot' is wrong type; expected a uint8.");
    }
    try {
        //type
        const matlab::data::TypedArray<uint8_t> type_arr = arr[0]["type"];
        msg->type = type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'type' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'type' is wrong type; expected a uint8.");
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
    try {
        //base_mode
        const matlab::data::TypedArray<uint8_t> base_mode_arr = arr[0]["base_mode"];
        msg->base_mode = base_mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'base_mode' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'base_mode' is wrong type; expected a uint8.");
    }
    try {
        //custom_mode
        const matlab::data::TypedArray<uint32_t> custom_mode_arr = arr[0]["custom_mode"];
        msg->custom_mode = custom_mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'custom_mode' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'custom_mode' is wrong type; expected a uint32.");
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
        //mode_id
        const matlab::data::TypedArray<uint32_t> mode_id_arr = arr[0]["mode_id"];
        msg->mode_id = mode_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'mode_id' is wrong type; expected a uint32.");
    }
    try {
        //capabilities
        const matlab::data::TypedArray<uint64_t> capabilities_arr = arr[0]["capabilities"];
        msg->capabilities = capabilities_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'capabilities' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'capabilities' is wrong type; expected a uint64.");
    }
    try {
        //flight_sw_version
        const matlab::data::TypedArray<uint32_t> flight_sw_version_arr = arr[0]["flight_sw_version"];
        msg->flight_sw_version = flight_sw_version_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flight_sw_version' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'flight_sw_version' is wrong type; expected a uint32.");
    }
    try {
        //middleware_sw_version
        const matlab::data::TypedArray<uint32_t> middleware_sw_version_arr = arr[0]["middleware_sw_version"];
        msg->middleware_sw_version = middleware_sw_version_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'middleware_sw_version' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'middleware_sw_version' is wrong type; expected a uint32.");
    }
    try {
        //os_sw_version
        const matlab::data::TypedArray<uint32_t> os_sw_version_arr = arr[0]["os_sw_version"];
        msg->os_sw_version = os_sw_version_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'os_sw_version' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'os_sw_version' is wrong type; expected a uint32.");
    }
    try {
        //board_version
        const matlab::data::TypedArray<uint32_t> board_version_arr = arr[0]["board_version"];
        msg->board_version = board_version_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'board_version' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'board_version' is wrong type; expected a uint32.");
    }
    try {
        //flight_custom_version
        const matlab::data::CharArray flight_custom_version_arr = arr[0]["flight_custom_version"];
        msg->flight_custom_version = flight_custom_version_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flight_custom_version' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'flight_custom_version' is wrong type; expected a string.");
    }
    try {
        //vendor_id
        const matlab::data::TypedArray<uint16_t> vendor_id_arr = arr[0]["vendor_id"];
        msg->vendor_id = vendor_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vendor_id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'vendor_id' is wrong type; expected a uint16.");
    }
    try {
        //product_id
        const matlab::data::TypedArray<uint16_t> product_id_arr = arr[0]["product_id"];
        msg->product_id = product_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'product_id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'product_id' is wrong type; expected a uint16.");
    }
    try {
        //uid
        const matlab::data::TypedArray<uint64_t> uid_arr = arr[0]["uid"];
        msg->uid = uid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'uid' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'uid' is wrong type; expected a uint64.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::VehicleInfo>& msg) {
    auto outArray = factory.createStructArray({1,1},{"header","HAVE_INFO_HEARTBEAT","HAVE_INFO_AUTOPILOT_VERSION","available_info","sysid","compid","autopilot","type","system_status","base_mode","custom_mode","mode","mode_id","capabilities","flight_sw_version","middleware_sw_version","os_sw_version","board_version","flight_custom_version","vendor_id","product_id","uid"});
    // header
    outArray[0]["header"] = get_arr_std_msgs_Header(factory, msg->header);
    // HAVE_INFO_HEARTBEAT
    outArray[0]["HAVE_INFO_HEARTBEAT"] = factory.createScalar(static_cast<uint8_t>(msg->HAVE_INFO_HEARTBEAT));
    // HAVE_INFO_AUTOPILOT_VERSION
    outArray[0]["HAVE_INFO_AUTOPILOT_VERSION"] = factory.createScalar(static_cast<uint8_t>(msg->HAVE_INFO_AUTOPILOT_VERSION));
    // available_info
    outArray[0]["available_info"] = factory.createScalar(msg->available_info);
    // sysid
    outArray[0]["sysid"] = factory.createScalar(msg->sysid);
    // compid
    outArray[0]["compid"] = factory.createScalar(msg->compid);
    // autopilot
    outArray[0]["autopilot"] = factory.createScalar(msg->autopilot);
    // type
    outArray[0]["type"] = factory.createScalar(msg->type);
    // system_status
    outArray[0]["system_status"] = factory.createScalar(msg->system_status);
    // base_mode
    outArray[0]["base_mode"] = factory.createScalar(msg->base_mode);
    // custom_mode
    outArray[0]["custom_mode"] = factory.createScalar(msg->custom_mode);
    // mode
    outArray[0]["mode"] = factory.createCharArray(msg->mode);
    // mode_id
    outArray[0]["mode_id"] = factory.createScalar(msg->mode_id);
    // capabilities
    outArray[0]["capabilities"] = factory.createScalar(msg->capabilities);
    // flight_sw_version
    outArray[0]["flight_sw_version"] = factory.createScalar(msg->flight_sw_version);
    // middleware_sw_version
    outArray[0]["middleware_sw_version"] = factory.createScalar(msg->middleware_sw_version);
    // os_sw_version
    outArray[0]["os_sw_version"] = factory.createScalar(msg->os_sw_version);
    // board_version
    outArray[0]["board_version"] = factory.createScalar(msg->board_version);
    // flight_custom_version
    outArray[0]["flight_custom_version"] = factory.createCharArray(msg->flight_custom_version);
    // vendor_id
    outArray[0]["vendor_id"] = factory.createScalar(msg->vendor_id);
    // product_id
    outArray[0]["product_id"] = factory.createScalar(msg->product_id);
    // uid
    outArray[0]["uid"] = factory.createScalar(msg->uid);
    return std::move(outArray);
  }
} //namespace VehicleInfo
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1