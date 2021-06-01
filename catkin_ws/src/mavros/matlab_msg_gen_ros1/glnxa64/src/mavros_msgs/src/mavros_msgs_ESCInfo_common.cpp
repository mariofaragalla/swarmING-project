// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/ESCInfo
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
#include "mavros_msgs/ESCInfo.h"
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
namespace ESCInfo {
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::ESCInfo::_header_type& val);
  void copy_from_arr_ros_Time(ros::Time& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_ros_Time(MDFactory_T& factory, const std_msgs::Header::_stamp_type& val);
  void copy_from_arr_mavros_msgs_ESCInfoItem_var_arr(mavros_msgs::ESCInfoItem& val, const matlab::data::Struct& arr);
  MDArray_T get_arr_mavros_msgs_ESCInfoItem_var_arr(MDFactory_T& factory, const mavros_msgs::ESCInfo::_esc_info_type& val);
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
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::ESCInfo::_header_type& val) {
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
  void copy_from_arr_mavros_msgs_ESCInfoItem_var_arr(mavros_msgs::ESCInfoItem& val, const matlab::data::Struct& arr) {
    // _mavros_msgs_ESCInfoItem_var_arr.header
    try {
        const matlab::data::StructArray _esc_infoheader_arr = arr["header"];
        copy_from_arr_std_msgs_Header(val.header,_esc_infoheader_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'header' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'header' is wrong type; expected a struct.");
    }
    // _mavros_msgs_ESCInfoItem_var_arr.failure_flags
    try {
        const matlab::data::TypedArray<uint16_t> _esc_infofailure_flags_arr = arr["failure_flags"];
        val.failure_flags = _esc_infofailure_flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'failure_flags' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'failure_flags' is wrong type; expected a uint16.");
    }
    // _mavros_msgs_ESCInfoItem_var_arr.error_count
    try {
        const matlab::data::TypedArray<uint32_t> _esc_infoerror_count_arr = arr["error_count"];
        val.error_count = _esc_infoerror_count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'error_count' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'error_count' is wrong type; expected a uint32.");
    }
    // _mavros_msgs_ESCInfoItem_var_arr.temperature
    try {
        const matlab::data::TypedArray<uint8_t> _esc_infotemperature_arr = arr["temperature"];
        val.temperature = _esc_infotemperature_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'temperature' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'temperature' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_mavros_msgs_ESCInfoItem_var_arr(MDFactory_T& factory, const mavros_msgs::ESCInfo::_esc_info_type& val) {
    auto _esc_infooutArray = factory.createStructArray({1,val.size()},{"header","failure_flags","error_count","temperature"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // _mavros_msgs_ESCInfoItem_var_arr.header
    _esc_infooutArray[idx]["header"] = get_arr_std_msgs_Header(factory, val[idx].header);
    // _mavros_msgs_ESCInfoItem_var_arr.failure_flags
    	_esc_infooutArray[idx]["failure_flags"] = factory.createScalar(val[idx].failure_flags);
    // _mavros_msgs_ESCInfoItem_var_arr.error_count
    	_esc_infooutArray[idx]["error_count"] = factory.createScalar(val[idx].error_count);
    // _mavros_msgs_ESCInfoItem_var_arr.temperature
    	_esc_infooutArray[idx]["temperature"] = factory.createScalar(val[idx].temperature);
    }
    return std::move(_esc_infooutArray);
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::ESCInfo>& msg, const matlab::data::StructArray arr) {
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
        //counter
        const matlab::data::TypedArray<uint16_t> counter_arr = arr[0]["counter"];
        msg->counter = counter_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'counter' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'counter' is wrong type; expected a uint16.");
    }
    try {
        //count
        const matlab::data::TypedArray<uint8_t> count_arr = arr[0]["count"];
        msg->count = count_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'count' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'count' is wrong type; expected a uint8.");
    }
    try {
        //connection_type
        const matlab::data::TypedArray<uint8_t> connection_type_arr = arr[0]["connection_type"];
        msg->connection_type = connection_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'connection_type' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'connection_type' is wrong type; expected a uint8.");
    }
    try {
        //info
        const matlab::data::TypedArray<uint8_t> info_arr = arr[0]["info"];
        msg->info = info_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'info' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'info' is wrong type; expected a uint8.");
    }
    try {
        //esc_info
        const matlab::data::StructArray esc_info_arr = arr[0]["esc_info"];
        for (auto _esc_infoarr : esc_info_arr) {
        	mavros_msgs::ESCInfoItem _val;
        	copy_from_arr_mavros_msgs_ESCInfoItem_var_arr(_val,_esc_infoarr);
        	msg->esc_info.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'esc_info' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'esc_info' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::ESCInfo>& msg) {
    auto outArray = factory.createStructArray({1,1},{"header","counter","count","connection_type","info","esc_info"});
    // header
    outArray[0]["header"] = get_arr_std_msgs_Header(factory, msg->header);
    // counter
    outArray[0]["counter"] = factory.createScalar(msg->counter);
    // count
    outArray[0]["count"] = factory.createScalar(msg->count);
    // connection_type
    outArray[0]["connection_type"] = factory.createScalar(msg->connection_type);
    // info
    outArray[0]["info"] = factory.createScalar(msg->info);
    // esc_info
    outArray[0]["esc_info"] = get_arr_mavros_msgs_ESCInfoItem_var_arr(factory, msg->esc_info);
    return std::move(outArray);
  }
} //namespace ESCInfo
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1