// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/OnboardComputerStatus
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
#include "mavros_msgs/OnboardComputerStatus.h"
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
namespace OnboardComputerStatus {
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::OnboardComputerStatus::_header_type& val);
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
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::OnboardComputerStatus::_header_type& val) {
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
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::OnboardComputerStatus>& msg, const matlab::data::StructArray arr) {
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
        //component
        const matlab::data::TypedArray<uint8_t> component_arr = arr[0]["component"];
        msg->component = component_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'component' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'component' is wrong type; expected a uint8.");
    }
    try {
        //uptime
        const matlab::data::TypedArray<uint32_t> uptime_arr = arr[0]["uptime"];
        msg->uptime = uptime_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'uptime' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'uptime' is wrong type; expected a uint32.");
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
        //cpu_cores
        const matlab::data::TypedArray<uint8_t> cpu_cores_arr = arr[0]["cpu_cores"];
        size_t nelem = 8;
        	std::copy(cpu_cores_arr.begin(), cpu_cores_arr.begin()+nelem, msg->cpu_cores.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cpu_cores' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'cpu_cores' is wrong type; expected a uint8.");
    }
    try {
        //cpu_combined
        const matlab::data::TypedArray<uint8_t> cpu_combined_arr = arr[0]["cpu_combined"];
        size_t nelem = 10;
        	std::copy(cpu_combined_arr.begin(), cpu_combined_arr.begin()+nelem, msg->cpu_combined.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cpu_combined' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'cpu_combined' is wrong type; expected a uint8.");
    }
    try {
        //gpu_cores
        const matlab::data::TypedArray<uint8_t> gpu_cores_arr = arr[0]["gpu_cores"];
        size_t nelem = 4;
        	std::copy(gpu_cores_arr.begin(), gpu_cores_arr.begin()+nelem, msg->gpu_cores.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gpu_cores' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'gpu_cores' is wrong type; expected a uint8.");
    }
    try {
        //gpu_combined
        const matlab::data::TypedArray<uint8_t> gpu_combined_arr = arr[0]["gpu_combined"];
        size_t nelem = 10;
        	std::copy(gpu_combined_arr.begin(), gpu_combined_arr.begin()+nelem, msg->gpu_combined.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gpu_combined' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'gpu_combined' is wrong type; expected a uint8.");
    }
    try {
        //temperature_board
        const matlab::data::TypedArray<int8_t> temperature_board_arr = arr[0]["temperature_board"];
        msg->temperature_board = temperature_board_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'temperature_board' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'temperature_board' is wrong type; expected a int8.");
    }
    try {
        //temperature_core
        const matlab::data::TypedArray<int8_t> temperature_core_arr = arr[0]["temperature_core"];
        size_t nelem = 8;
        	std::copy(temperature_core_arr.begin(), temperature_core_arr.begin()+nelem, msg->temperature_core.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'temperature_core' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'temperature_core' is wrong type; expected a int8.");
    }
    try {
        //fan_speed
        const matlab::data::TypedArray<int16_t> fan_speed_arr = arr[0]["fan_speed"];
        size_t nelem = 4;
        	std::copy(fan_speed_arr.begin(), fan_speed_arr.begin()+nelem, msg->fan_speed.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fan_speed' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'fan_speed' is wrong type; expected a int16.");
    }
    try {
        //ram_usage
        const matlab::data::TypedArray<uint32_t> ram_usage_arr = arr[0]["ram_usage"];
        msg->ram_usage = ram_usage_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ram_usage' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'ram_usage' is wrong type; expected a uint32.");
    }
    try {
        //ram_total
        const matlab::data::TypedArray<uint32_t> ram_total_arr = arr[0]["ram_total"];
        msg->ram_total = ram_total_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ram_total' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'ram_total' is wrong type; expected a uint32.");
    }
    try {
        //storage_type
        const matlab::data::TypedArray<uint32_t> storage_type_arr = arr[0]["storage_type"];
        size_t nelem = 4;
        	std::copy(storage_type_arr.begin(), storage_type_arr.begin()+nelem, msg->storage_type.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'storage_type' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'storage_type' is wrong type; expected a uint32.");
    }
    try {
        //storage_usage
        const matlab::data::TypedArray<uint32_t> storage_usage_arr = arr[0]["storage_usage"];
        size_t nelem = 4;
        	std::copy(storage_usage_arr.begin(), storage_usage_arr.begin()+nelem, msg->storage_usage.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'storage_usage' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'storage_usage' is wrong type; expected a uint32.");
    }
    try {
        //storage_total
        const matlab::data::TypedArray<uint32_t> storage_total_arr = arr[0]["storage_total"];
        size_t nelem = 4;
        	std::copy(storage_total_arr.begin(), storage_total_arr.begin()+nelem, msg->storage_total.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'storage_total' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'storage_total' is wrong type; expected a uint32.");
    }
    try {
        //link_type
        const matlab::data::TypedArray<uint32_t> link_type_arr = arr[0]["link_type"];
        size_t nelem = 6;
        	std::copy(link_type_arr.begin(), link_type_arr.begin()+nelem, msg->link_type.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'link_type' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'link_type' is wrong type; expected a uint32.");
    }
    try {
        //link_tx_rate
        const matlab::data::TypedArray<uint32_t> link_tx_rate_arr = arr[0]["link_tx_rate"];
        size_t nelem = 6;
        	std::copy(link_tx_rate_arr.begin(), link_tx_rate_arr.begin()+nelem, msg->link_tx_rate.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'link_tx_rate' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'link_tx_rate' is wrong type; expected a uint32.");
    }
    try {
        //link_rx_rate
        const matlab::data::TypedArray<uint32_t> link_rx_rate_arr = arr[0]["link_rx_rate"];
        size_t nelem = 6;
        	std::copy(link_rx_rate_arr.begin(), link_rx_rate_arr.begin()+nelem, msg->link_rx_rate.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'link_rx_rate' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'link_rx_rate' is wrong type; expected a uint32.");
    }
    try {
        //link_tx_max
        const matlab::data::TypedArray<uint32_t> link_tx_max_arr = arr[0]["link_tx_max"];
        size_t nelem = 6;
        	std::copy(link_tx_max_arr.begin(), link_tx_max_arr.begin()+nelem, msg->link_tx_max.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'link_tx_max' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'link_tx_max' is wrong type; expected a uint32.");
    }
    try {
        //link_rx_max
        const matlab::data::TypedArray<uint32_t> link_rx_max_arr = arr[0]["link_rx_max"];
        size_t nelem = 6;
        	std::copy(link_rx_max_arr.begin(), link_rx_max_arr.begin()+nelem, msg->link_rx_max.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'link_rx_max' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'link_rx_max' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::OnboardComputerStatus>& msg) {
    auto outArray = factory.createStructArray({1,1},{"header","component","uptime","type","cpu_cores","cpu_combined","gpu_cores","gpu_combined","temperature_board","temperature_core","fan_speed","ram_usage","ram_total","storage_type","storage_usage","storage_total","link_type","link_tx_rate","link_rx_rate","link_tx_max","link_rx_max"});
    // header
    outArray[0]["header"] = get_arr_std_msgs_Header(factory, msg->header);
    // component
    outArray[0]["component"] = factory.createScalar(msg->component);
    // uptime
    outArray[0]["uptime"] = factory.createScalar(msg->uptime);
    // type
    outArray[0]["type"] = factory.createScalar(msg->type);
    // cpu_cores
    outArray[0]["cpu_cores"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_cpu_cores_type::const_iterator, uint8_t>({1, msg->cpu_cores.size()}, msg->cpu_cores.begin(), msg->cpu_cores.end());
    // cpu_combined
    outArray[0]["cpu_combined"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_cpu_combined_type::const_iterator, uint8_t>({1, msg->cpu_combined.size()}, msg->cpu_combined.begin(), msg->cpu_combined.end());
    // gpu_cores
    outArray[0]["gpu_cores"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_gpu_cores_type::const_iterator, uint8_t>({1, msg->gpu_cores.size()}, msg->gpu_cores.begin(), msg->gpu_cores.end());
    // gpu_combined
    outArray[0]["gpu_combined"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_gpu_combined_type::const_iterator, uint8_t>({1, msg->gpu_combined.size()}, msg->gpu_combined.begin(), msg->gpu_combined.end());
    // temperature_board
    outArray[0]["temperature_board"] = factory.createScalar(msg->temperature_board);
    // temperature_core
    outArray[0]["temperature_core"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_temperature_core_type::const_iterator, int8_t>({1, msg->temperature_core.size()}, msg->temperature_core.begin(), msg->temperature_core.end());
    // fan_speed
    outArray[0]["fan_speed"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_fan_speed_type::const_iterator, int16_t>({1, msg->fan_speed.size()}, msg->fan_speed.begin(), msg->fan_speed.end());
    // ram_usage
    outArray[0]["ram_usage"] = factory.createScalar(msg->ram_usage);
    // ram_total
    outArray[0]["ram_total"] = factory.createScalar(msg->ram_total);
    // storage_type
    outArray[0]["storage_type"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_storage_type_type::const_iterator, uint32_t>({1, msg->storage_type.size()}, msg->storage_type.begin(), msg->storage_type.end());
    // storage_usage
    outArray[0]["storage_usage"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_storage_usage_type::const_iterator, uint32_t>({1, msg->storage_usage.size()}, msg->storage_usage.begin(), msg->storage_usage.end());
    // storage_total
    outArray[0]["storage_total"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_storage_total_type::const_iterator, uint32_t>({1, msg->storage_total.size()}, msg->storage_total.begin(), msg->storage_total.end());
    // link_type
    outArray[0]["link_type"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_link_type_type::const_iterator, uint32_t>({1, msg->link_type.size()}, msg->link_type.begin(), msg->link_type.end());
    // link_tx_rate
    outArray[0]["link_tx_rate"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_link_tx_rate_type::const_iterator, uint32_t>({1, msg->link_tx_rate.size()}, msg->link_tx_rate.begin(), msg->link_tx_rate.end());
    // link_rx_rate
    outArray[0]["link_rx_rate"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_link_rx_rate_type::const_iterator, uint32_t>({1, msg->link_rx_rate.size()}, msg->link_rx_rate.begin(), msg->link_rx_rate.end());
    // link_tx_max
    outArray[0]["link_tx_max"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_link_tx_max_type::const_iterator, uint32_t>({1, msg->link_tx_max.size()}, msg->link_tx_max.begin(), msg->link_tx_max.end());
    // link_rx_max
    outArray[0]["link_rx_max"] = factory.createArray<mavros_msgs::OnboardComputerStatus::_link_rx_max_type::const_iterator, uint32_t>({1, msg->link_rx_max.size()}, msg->link_rx_max.begin(), msg->link_rx_max.end());
    return std::move(outArray);
  }
} //namespace OnboardComputerStatus
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1