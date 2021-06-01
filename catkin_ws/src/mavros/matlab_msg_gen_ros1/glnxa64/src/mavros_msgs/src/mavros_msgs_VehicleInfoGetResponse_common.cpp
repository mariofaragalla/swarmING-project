// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/VehicleInfoGetResponse
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
#include "mavros_msgs/VehicleInfoGetResponse.h"
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
namespace VehicleInfoGetResponse {
  void copy_from_arr_mavros_msgs_VehicleInfo_var_arr(mavros_msgs::VehicleInfo& val, const matlab::data::Struct& arr);
  MDArray_T get_arr_mavros_msgs_VehicleInfo_var_arr(MDFactory_T& factory, const mavros_msgs::VehicleInfoGetResponse::_vehicles_type& val);
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::VehicleInfo::_header_type& val);
  void copy_from_arr_ros_Time(ros::Time& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_ros_Time(MDFactory_T& factory, const std_msgs::Header::_stamp_type& val);
  //----------------------------------------------------------------------------
  void copy_from_arr_mavros_msgs_VehicleInfo_var_arr(mavros_msgs::VehicleInfo& val, const matlab::data::Struct& arr) {
    // _mavros_msgs_VehicleInfo_var_arr.header
    try {
        const matlab::data::StructArray _vehiclesheader_arr = arr["header"];
        copy_from_arr_std_msgs_Header(val.header,_vehiclesheader_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'header' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'header' is wrong type; expected a struct.");
    }
    // _mavros_msgs_VehicleInfo_var_arr.HAVE_INFO_HEARTBEAT
    // _mavros_msgs_VehicleInfo_var_arr.HAVE_INFO_AUTOPILOT_VERSION
    // _mavros_msgs_VehicleInfo_var_arr.available_info
    try {
        const matlab::data::TypedArray<uint8_t> _vehiclesavailable_info_arr = arr["available_info"];
        val.available_info = _vehiclesavailable_info_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'available_info' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'available_info' is wrong type; expected a uint8.");
    }
    // _mavros_msgs_VehicleInfo_var_arr.sysid
    try {
        const matlab::data::TypedArray<uint8_t> _vehiclessysid_arr = arr["sysid"];
        val.sysid = _vehiclessysid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sysid' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'sysid' is wrong type; expected a uint8.");
    }
    // _mavros_msgs_VehicleInfo_var_arr.compid
    try {
        const matlab::data::TypedArray<uint8_t> _vehiclescompid_arr = arr["compid"];
        val.compid = _vehiclescompid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'compid' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'compid' is wrong type; expected a uint8.");
    }
    // _mavros_msgs_VehicleInfo_var_arr.autopilot
    try {
        const matlab::data::TypedArray<uint8_t> _vehiclesautopilot_arr = arr["autopilot"];
        val.autopilot = _vehiclesautopilot_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'autopilot' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'autopilot' is wrong type; expected a uint8.");
    }
    // _mavros_msgs_VehicleInfo_var_arr.type
    try {
        const matlab::data::TypedArray<uint8_t> _vehiclestype_arr = arr["type"];
        val.type = _vehiclestype_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'type' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'type' is wrong type; expected a uint8.");
    }
    // _mavros_msgs_VehicleInfo_var_arr.system_status
    try {
        const matlab::data::TypedArray<uint8_t> _vehiclessystem_status_arr = arr["system_status"];
        val.system_status = _vehiclessystem_status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'system_status' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'system_status' is wrong type; expected a uint8.");
    }
    // _mavros_msgs_VehicleInfo_var_arr.base_mode
    try {
        const matlab::data::TypedArray<uint8_t> _vehiclesbase_mode_arr = arr["base_mode"];
        val.base_mode = _vehiclesbase_mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'base_mode' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'base_mode' is wrong type; expected a uint8.");
    }
    // _mavros_msgs_VehicleInfo_var_arr.custom_mode
    try {
        const matlab::data::TypedArray<uint32_t> _vehiclescustom_mode_arr = arr["custom_mode"];
        val.custom_mode = _vehiclescustom_mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'custom_mode' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'custom_mode' is wrong type; expected a uint32.");
    }
    // _mavros_msgs_VehicleInfo_var_arr.mode
    try {
        const matlab::data::CharArray _vehiclesmode_arr = arr["mode"];
        val.mode = _vehiclesmode_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'mode' is wrong type; expected a string.");
    }
    // _mavros_msgs_VehicleInfo_var_arr.mode_id
    try {
        const matlab::data::TypedArray<uint32_t> _vehiclesmode_id_arr = arr["mode_id"];
        val.mode_id = _vehiclesmode_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'mode_id' is wrong type; expected a uint32.");
    }
    // _mavros_msgs_VehicleInfo_var_arr.capabilities
    try {
        const matlab::data::TypedArray<uint64_t> _vehiclescapabilities_arr = arr["capabilities"];
        val.capabilities = _vehiclescapabilities_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'capabilities' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'capabilities' is wrong type; expected a uint64.");
    }
    // _mavros_msgs_VehicleInfo_var_arr.flight_sw_version
    try {
        const matlab::data::TypedArray<uint32_t> _vehiclesflight_sw_version_arr = arr["flight_sw_version"];
        val.flight_sw_version = _vehiclesflight_sw_version_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flight_sw_version' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'flight_sw_version' is wrong type; expected a uint32.");
    }
    // _mavros_msgs_VehicleInfo_var_arr.middleware_sw_version
    try {
        const matlab::data::TypedArray<uint32_t> _vehiclesmiddleware_sw_version_arr = arr["middleware_sw_version"];
        val.middleware_sw_version = _vehiclesmiddleware_sw_version_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'middleware_sw_version' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'middleware_sw_version' is wrong type; expected a uint32.");
    }
    // _mavros_msgs_VehicleInfo_var_arr.os_sw_version
    try {
        const matlab::data::TypedArray<uint32_t> _vehiclesos_sw_version_arr = arr["os_sw_version"];
        val.os_sw_version = _vehiclesos_sw_version_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'os_sw_version' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'os_sw_version' is wrong type; expected a uint32.");
    }
    // _mavros_msgs_VehicleInfo_var_arr.board_version
    try {
        const matlab::data::TypedArray<uint32_t> _vehiclesboard_version_arr = arr["board_version"];
        val.board_version = _vehiclesboard_version_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'board_version' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'board_version' is wrong type; expected a uint32.");
    }
    // _mavros_msgs_VehicleInfo_var_arr.flight_custom_version
    try {
        const matlab::data::CharArray _vehiclesflight_custom_version_arr = arr["flight_custom_version"];
        val.flight_custom_version = _vehiclesflight_custom_version_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flight_custom_version' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'flight_custom_version' is wrong type; expected a string.");
    }
    // _mavros_msgs_VehicleInfo_var_arr.vendor_id
    try {
        const matlab::data::TypedArray<uint16_t> _vehiclesvendor_id_arr = arr["vendor_id"];
        val.vendor_id = _vehiclesvendor_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vendor_id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'vendor_id' is wrong type; expected a uint16.");
    }
    // _mavros_msgs_VehicleInfo_var_arr.product_id
    try {
        const matlab::data::TypedArray<uint16_t> _vehiclesproduct_id_arr = arr["product_id"];
        val.product_id = _vehiclesproduct_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'product_id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'product_id' is wrong type; expected a uint16.");
    }
    // _mavros_msgs_VehicleInfo_var_arr.uid
    try {
        const matlab::data::TypedArray<uint64_t> _vehiclesuid_arr = arr["uid"];
        val.uid = _vehiclesuid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'uid' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'uid' is wrong type; expected a uint64.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_mavros_msgs_VehicleInfo_var_arr(MDFactory_T& factory, const mavros_msgs::VehicleInfoGetResponse::_vehicles_type& val) {
    auto _vehiclesoutArray = factory.createStructArray({1,val.size()},{"header","HAVE_INFO_HEARTBEAT","HAVE_INFO_AUTOPILOT_VERSION","available_info","sysid","compid","autopilot","type","system_status","base_mode","custom_mode","mode","mode_id","capabilities","flight_sw_version","middleware_sw_version","os_sw_version","board_version","flight_custom_version","vendor_id","product_id","uid"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // _mavros_msgs_VehicleInfo_var_arr.header
    _vehiclesoutArray[idx]["header"] = get_arr_std_msgs_Header(factory, val[idx].header);
    // _mavros_msgs_VehicleInfo_var_arr.HAVE_INFO_HEARTBEAT
    	_vehiclesoutArray[idx]["HAVE_INFO_HEARTBEAT"] = factory.createScalar(static_cast<uint8_t>(val[idx].HAVE_INFO_HEARTBEAT));
    // _mavros_msgs_VehicleInfo_var_arr.HAVE_INFO_AUTOPILOT_VERSION
    	_vehiclesoutArray[idx]["HAVE_INFO_AUTOPILOT_VERSION"] = factory.createScalar(static_cast<uint8_t>(val[idx].HAVE_INFO_AUTOPILOT_VERSION));
    // _mavros_msgs_VehicleInfo_var_arr.available_info
    	_vehiclesoutArray[idx]["available_info"] = factory.createScalar(val[idx].available_info);
    // _mavros_msgs_VehicleInfo_var_arr.sysid
    	_vehiclesoutArray[idx]["sysid"] = factory.createScalar(val[idx].sysid);
    // _mavros_msgs_VehicleInfo_var_arr.compid
    	_vehiclesoutArray[idx]["compid"] = factory.createScalar(val[idx].compid);
    // _mavros_msgs_VehicleInfo_var_arr.autopilot
    	_vehiclesoutArray[idx]["autopilot"] = factory.createScalar(val[idx].autopilot);
    // _mavros_msgs_VehicleInfo_var_arr.type
    	_vehiclesoutArray[idx]["type"] = factory.createScalar(val[idx].type);
    // _mavros_msgs_VehicleInfo_var_arr.system_status
    	_vehiclesoutArray[idx]["system_status"] = factory.createScalar(val[idx].system_status);
    // _mavros_msgs_VehicleInfo_var_arr.base_mode
    	_vehiclesoutArray[idx]["base_mode"] = factory.createScalar(val[idx].base_mode);
    // _mavros_msgs_VehicleInfo_var_arr.custom_mode
    	_vehiclesoutArray[idx]["custom_mode"] = factory.createScalar(val[idx].custom_mode);
    // _mavros_msgs_VehicleInfo_var_arr.mode
    	_vehiclesoutArray[idx]["mode"] = factory.createCharArray(val[idx].mode);
    // _mavros_msgs_VehicleInfo_var_arr.mode_id
    	_vehiclesoutArray[idx]["mode_id"] = factory.createScalar(val[idx].mode_id);
    // _mavros_msgs_VehicleInfo_var_arr.capabilities
    	_vehiclesoutArray[idx]["capabilities"] = factory.createScalar(val[idx].capabilities);
    // _mavros_msgs_VehicleInfo_var_arr.flight_sw_version
    	_vehiclesoutArray[idx]["flight_sw_version"] = factory.createScalar(val[idx].flight_sw_version);
    // _mavros_msgs_VehicleInfo_var_arr.middleware_sw_version
    	_vehiclesoutArray[idx]["middleware_sw_version"] = factory.createScalar(val[idx].middleware_sw_version);
    // _mavros_msgs_VehicleInfo_var_arr.os_sw_version
    	_vehiclesoutArray[idx]["os_sw_version"] = factory.createScalar(val[idx].os_sw_version);
    // _mavros_msgs_VehicleInfo_var_arr.board_version
    	_vehiclesoutArray[idx]["board_version"] = factory.createScalar(val[idx].board_version);
    // _mavros_msgs_VehicleInfo_var_arr.flight_custom_version
    	_vehiclesoutArray[idx]["flight_custom_version"] = factory.createCharArray(val[idx].flight_custom_version);
    // _mavros_msgs_VehicleInfo_var_arr.vendor_id
    	_vehiclesoutArray[idx]["vendor_id"] = factory.createScalar(val[idx].vendor_id);
    // _mavros_msgs_VehicleInfo_var_arr.product_id
    	_vehiclesoutArray[idx]["product_id"] = factory.createScalar(val[idx].product_id);
    // _mavros_msgs_VehicleInfo_var_arr.uid
    	_vehiclesoutArray[idx]["uid"] = factory.createScalar(val[idx].uid);
    }
    return std::move(_vehiclesoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr) {
    // _std_msgs_Header.seq
    try {
        const matlab::data::TypedArray<uint32_t> _vehicles_headerseq_arr = arr[0]["seq"];
        val.seq = _vehicles_headerseq_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'seq' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'seq' is wrong type; expected a uint32.");
    }
    // _std_msgs_Header.stamp
    try {
        const matlab::data::StructArray _vehicles_headerstamp_arr = arr[0]["stamp"];
        copy_from_arr_ros_Time(val.stamp,_vehicles_headerstamp_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'stamp' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'stamp' is wrong type; expected a struct.");
    }
    // _std_msgs_Header.frame_id
    try {
        const matlab::data::CharArray _vehicles_headerframe_id_arr = arr[0]["frame_id"];
        val.frame_id = _vehicles_headerframe_id_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'frame_id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'frame_id' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::VehicleInfo::_header_type& val) {
    auto _vehicles_headeroutArray = factory.createStructArray({1,1},{"seq","stamp","frame_id"});
    // _std_msgs_Header.seq
    _vehicles_headeroutArray[0]["seq"] = factory.createScalar(val.seq);
    // _std_msgs_Header.stamp
    _vehicles_headeroutArray[0]["stamp"] = get_arr_ros_Time(factory, val.stamp);
    // _std_msgs_Header.frame_id
    _vehicles_headeroutArray[0]["frame_id"] = factory.createCharArray(val.frame_id);
    return std::move(_vehicles_headeroutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_ros_Time(ros::Time& val, const matlab::data::StructArray& arr) {
    // _ros_Time.sec
    try {
        const matlab::data::TypedArray<uint32_t> _vehicles_header_stampsec_arr = arr[0]["sec"];
        val.sec = _vehicles_header_stampsec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sec' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'sec' is wrong type; expected a uint32.");
    }
    // _ros_Time.nsec
    try {
        const matlab::data::TypedArray<uint32_t> _vehicles_header_stampnsec_arr = arr[0]["nsec"];
        val.nsec = _vehicles_header_stampnsec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'nsec' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'nsec' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_ros_Time(MDFactory_T& factory, const std_msgs::Header::_stamp_type& val) {
    auto _vehicles_header_stampoutArray = factory.createStructArray({1,1},{"sec","nsec"});
    // _ros_Time.sec
    _vehicles_header_stampoutArray[0]["sec"] = factory.createScalar(val.sec);
    // _ros_Time.nsec
    _vehicles_header_stampoutArray[0]["nsec"] = factory.createScalar(val.nsec);
    return std::move(_vehicles_header_stampoutArray);
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::VehicleInfoGetResponse>& msg, const matlab::data::StructArray arr) {
    try {
        //success
        const matlab::data::TypedArray<bool> success_arr = arr[0]["success"];
        msg->success = success_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'success' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'success' is wrong type; expected a logical.");
    }
    try {
        //vehicles
        const matlab::data::StructArray vehicles_arr = arr[0]["vehicles"];
        for (auto _vehiclesarr : vehicles_arr) {
        	mavros_msgs::VehicleInfo _val;
        	copy_from_arr_mavros_msgs_VehicleInfo_var_arr(_val,_vehiclesarr);
        	msg->vehicles.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vehicles' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'vehicles' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::VehicleInfoGetResponse>& msg) {
    auto outArray = factory.createStructArray({1,1},{"success","vehicles"});
    // success
    outArray[0]["success"] = factory.createScalar(static_cast<bool>(msg->success));
    // vehicles
    outArray[0]["vehicles"] = get_arr_mavros_msgs_VehicleInfo_var_arr(factory, msg->vehicles);
    return std::move(outArray);
  }
} //namespace VehicleInfoGetResponse
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1