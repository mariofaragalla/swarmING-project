// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/Mavlink
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
#include "mavros_msgs/Mavlink.h"
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
namespace Mavlink {
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::Mavlink::_header_type& val);
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
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::Mavlink::_header_type& val) {
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
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::Mavlink>& msg, const matlab::data::StructArray arr) {
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
        //framing_status
        const matlab::data::TypedArray<uint8_t> framing_status_arr = arr[0]["framing_status"];
        msg->framing_status = framing_status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'framing_status' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'framing_status' is wrong type; expected a uint8.");
    }
    try {
        //magic
        const matlab::data::TypedArray<uint8_t> magic_arr = arr[0]["magic"];
        msg->magic = magic_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'magic' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'magic' is wrong type; expected a uint8.");
    }
    try {
        //len
        const matlab::data::TypedArray<uint8_t> len_arr = arr[0]["len"];
        msg->len = len_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'len' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'len' is wrong type; expected a uint8.");
    }
    try {
        //incompat_flags
        const matlab::data::TypedArray<uint8_t> incompat_flags_arr = arr[0]["incompat_flags"];
        msg->incompat_flags = incompat_flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'incompat_flags' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'incompat_flags' is wrong type; expected a uint8.");
    }
    try {
        //compat_flags
        const matlab::data::TypedArray<uint8_t> compat_flags_arr = arr[0]["compat_flags"];
        msg->compat_flags = compat_flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'compat_flags' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'compat_flags' is wrong type; expected a uint8.");
    }
    try {
        //seq
        const matlab::data::TypedArray<uint8_t> seq_arr = arr[0]["seq"];
        msg->seq = seq_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'seq' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'seq' is wrong type; expected a uint8.");
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
        //msgid
        const matlab::data::TypedArray<uint32_t> msgid_arr = arr[0]["msgid"];
        msg->msgid = msgid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'msgid' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'msgid' is wrong type; expected a uint32.");
    }
    try {
        //checksum
        const matlab::data::TypedArray<uint16_t> checksum_arr = arr[0]["checksum"];
        msg->checksum = checksum_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'checksum' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'checksum' is wrong type; expected a uint16.");
    }
    try {
        //payload64
        const matlab::data::TypedArray<uint64_t> payload64_arr = arr[0]["payload64"];
        size_t nelem = payload64_arr.getNumberOfElements();
        	msg->payload64.resize(nelem);
        	std::copy(payload64_arr.begin(), payload64_arr.begin()+nelem, msg->payload64.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'payload64' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'payload64' is wrong type; expected a uint64.");
    }
    try {
        //signature
        const matlab::data::TypedArray<uint8_t> signature_arr = arr[0]["signature"];
        size_t nelem = signature_arr.getNumberOfElements();
        	msg->signature.resize(nelem);
        	std::copy(signature_arr.begin(), signature_arr.begin()+nelem, msg->signature.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'signature' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'signature' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::Mavlink>& msg) {
    auto outArray = factory.createStructArray({1,1},{"FRAMING_OK","FRAMING_BAD_CRC","FRAMING_BAD_SIGNATURE","MAVLINK_V10","MAVLINK_V20","header","framing_status","magic","len","incompat_flags","compat_flags","seq","sysid","compid","msgid","checksum","payload64","signature"});
    // FRAMING_OK
    outArray[0]["FRAMING_OK"] = factory.createScalar(static_cast<uint8_t>(msg->FRAMING_OK));
    // FRAMING_BAD_CRC
    outArray[0]["FRAMING_BAD_CRC"] = factory.createScalar(static_cast<uint8_t>(msg->FRAMING_BAD_CRC));
    // FRAMING_BAD_SIGNATURE
    outArray[0]["FRAMING_BAD_SIGNATURE"] = factory.createScalar(static_cast<uint8_t>(msg->FRAMING_BAD_SIGNATURE));
    // MAVLINK_V10
    outArray[0]["MAVLINK_V10"] = factory.createScalar(static_cast<uint8_t>(msg->MAVLINK_V10));
    // MAVLINK_V20
    outArray[0]["MAVLINK_V20"] = factory.createScalar(static_cast<uint8_t>(msg->MAVLINK_V20));
    // header
    outArray[0]["header"] = get_arr_std_msgs_Header(factory, msg->header);
    // framing_status
    outArray[0]["framing_status"] = factory.createScalar(msg->framing_status);
    // magic
    outArray[0]["magic"] = factory.createScalar(msg->magic);
    // len
    outArray[0]["len"] = factory.createScalar(msg->len);
    // incompat_flags
    outArray[0]["incompat_flags"] = factory.createScalar(msg->incompat_flags);
    // compat_flags
    outArray[0]["compat_flags"] = factory.createScalar(msg->compat_flags);
    // seq
    outArray[0]["seq"] = factory.createScalar(msg->seq);
    // sysid
    outArray[0]["sysid"] = factory.createScalar(msg->sysid);
    // compid
    outArray[0]["compid"] = factory.createScalar(msg->compid);
    // msgid
    outArray[0]["msgid"] = factory.createScalar(msg->msgid);
    // checksum
    outArray[0]["checksum"] = factory.createScalar(msg->checksum);
    // payload64
    outArray[0]["payload64"] = factory.createArray<mavros_msgs::Mavlink::_payload64_type::const_iterator, uint64_t>({1, msg->payload64.size()}, msg->payload64.begin(), msg->payload64.end());
    // signature
    outArray[0]["signature"] = factory.createArray<mavros_msgs::Mavlink::_signature_type::const_iterator, uint8_t>({1, msg->signature.size()}, msg->signature.begin(), msg->signature.end());
    return std::move(outArray);
  }
} //namespace Mavlink
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1