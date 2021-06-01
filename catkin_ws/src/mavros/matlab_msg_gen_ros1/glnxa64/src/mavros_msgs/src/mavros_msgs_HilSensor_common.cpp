// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/HilSensor
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
#include "mavros_msgs/HilSensor.h"
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
namespace HilSensor {
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::HilSensor::_header_type& val);
  void copy_from_arr_ros_Time(ros::Time& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_ros_Time(MDFactory_T& factory, const std_msgs::Header::_stamp_type& val);
  void copy_from_arr_geometry_msgs_Vector3(geometry_msgs::Vector3& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_geometry_msgs_Vector3(MDFactory_T& factory, const mavros_msgs::HilSensor::_acc_type& val);
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
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::HilSensor::_header_type& val) {
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
  void copy_from_arr_geometry_msgs_Vector3(geometry_msgs::Vector3& val, const matlab::data::StructArray& arr) {
    // _geometry_msgs_Vector3.x
    try {
        const matlab::data::TypedArray<double> _accx_arr = arr[0]["x"];
        val.x = _accx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    // _geometry_msgs_Vector3.y
    try {
        const matlab::data::TypedArray<double> _accy_arr = arr[0]["y"];
        val.y = _accy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    // _geometry_msgs_Vector3.z
    try {
        const matlab::data::TypedArray<double> _accz_arr = arr[0]["z"];
        val.z = _accz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_geometry_msgs_Vector3(MDFactory_T& factory, const mavros_msgs::HilSensor::_acc_type& val) {
    auto _accoutArray = factory.createStructArray({1,1},{"x","y","z"});
    // _geometry_msgs_Vector3.x
    _accoutArray[0]["x"] = factory.createScalar(val.x);
    // _geometry_msgs_Vector3.y
    _accoutArray[0]["y"] = factory.createScalar(val.y);
    // _geometry_msgs_Vector3.z
    _accoutArray[0]["z"] = factory.createScalar(val.z);
    return std::move(_accoutArray);
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::HilSensor>& msg, const matlab::data::StructArray arr) {
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
        //acc
        const matlab::data::StructArray acc_arr = arr[0]["acc"];
        copy_from_arr_geometry_msgs_Vector3(msg->acc,acc_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'acc' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'acc' is wrong type; expected a struct.");
    }
    try {
        //gyro
        const matlab::data::StructArray gyro_arr = arr[0]["gyro"];
        copy_from_arr_geometry_msgs_Vector3(msg->gyro,gyro_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gyro' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'gyro' is wrong type; expected a struct.");
    }
    try {
        //mag
        const matlab::data::StructArray mag_arr = arr[0]["mag"];
        copy_from_arr_geometry_msgs_Vector3(msg->mag,mag_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mag' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'mag' is wrong type; expected a struct.");
    }
    try {
        //abs_pressure
        const matlab::data::TypedArray<float> abs_pressure_arr = arr[0]["abs_pressure"];
        msg->abs_pressure = abs_pressure_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'abs_pressure' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'abs_pressure' is wrong type; expected a single.");
    }
    try {
        //diff_pressure
        const matlab::data::TypedArray<float> diff_pressure_arr = arr[0]["diff_pressure"];
        msg->diff_pressure = diff_pressure_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'diff_pressure' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'diff_pressure' is wrong type; expected a single.");
    }
    try {
        //pressure_alt
        const matlab::data::TypedArray<float> pressure_alt_arr = arr[0]["pressure_alt"];
        msg->pressure_alt = pressure_alt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pressure_alt' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'pressure_alt' is wrong type; expected a single.");
    }
    try {
        //temperature
        const matlab::data::TypedArray<float> temperature_arr = arr[0]["temperature"];
        msg->temperature = temperature_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'temperature' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'temperature' is wrong type; expected a single.");
    }
    try {
        //fields_updated
        const matlab::data::TypedArray<uint32_t> fields_updated_arr = arr[0]["fields_updated"];
        msg->fields_updated = fields_updated_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fields_updated' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'fields_updated' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::HilSensor>& msg) {
    auto outArray = factory.createStructArray({1,1},{"header","acc","gyro","mag","abs_pressure","diff_pressure","pressure_alt","temperature","fields_updated"});
    // header
    outArray[0]["header"] = get_arr_std_msgs_Header(factory, msg->header);
    // acc
    outArray[0]["acc"] = get_arr_geometry_msgs_Vector3(factory, msg->acc);
    // gyro
    outArray[0]["gyro"] = get_arr_geometry_msgs_Vector3(factory, msg->gyro);
    // mag
    outArray[0]["mag"] = get_arr_geometry_msgs_Vector3(factory, msg->mag);
    // abs_pressure
    outArray[0]["abs_pressure"] = factory.createScalar(msg->abs_pressure);
    // diff_pressure
    outArray[0]["diff_pressure"] = factory.createScalar(msg->diff_pressure);
    // pressure_alt
    outArray[0]["pressure_alt"] = factory.createScalar(msg->pressure_alt);
    // temperature
    outArray[0]["temperature"] = factory.createScalar(msg->temperature);
    // fields_updated
    outArray[0]["fields_updated"] = factory.createScalar(msg->fields_updated);
    return std::move(outArray);
  }
} //namespace HilSensor
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1