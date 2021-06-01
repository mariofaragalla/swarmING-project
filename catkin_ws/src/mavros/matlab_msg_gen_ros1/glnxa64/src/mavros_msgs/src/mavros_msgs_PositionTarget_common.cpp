// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/PositionTarget
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
#include "mavros_msgs/PositionTarget.h"
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
namespace PositionTarget {
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::PositionTarget::_header_type& val);
  void copy_from_arr_ros_Time(ros::Time& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_ros_Time(MDFactory_T& factory, const std_msgs::Header::_stamp_type& val);
  void copy_from_arr_geometry_msgs_Point(geometry_msgs::Point& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_geometry_msgs_Point(MDFactory_T& factory, const mavros_msgs::PositionTarget::_position_type& val);
  void copy_from_arr_geometry_msgs_Vector3(geometry_msgs::Vector3& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_geometry_msgs_Vector3(MDFactory_T& factory, const mavros_msgs::PositionTarget::_velocity_type& val);
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
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::PositionTarget::_header_type& val) {
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
  void copy_from_arr_geometry_msgs_Point(geometry_msgs::Point& val, const matlab::data::StructArray& arr) {
    // _geometry_msgs_Point.x
    try {
        const matlab::data::TypedArray<double> _positionx_arr = arr[0]["x"];
        val.x = _positionx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    // _geometry_msgs_Point.y
    try {
        const matlab::data::TypedArray<double> _positiony_arr = arr[0]["y"];
        val.y = _positiony_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    // _geometry_msgs_Point.z
    try {
        const matlab::data::TypedArray<double> _positionz_arr = arr[0]["z"];
        val.z = _positionz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_geometry_msgs_Point(MDFactory_T& factory, const mavros_msgs::PositionTarget::_position_type& val) {
    auto _positionoutArray = factory.createStructArray({1,1},{"x","y","z"});
    // _geometry_msgs_Point.x
    _positionoutArray[0]["x"] = factory.createScalar(val.x);
    // _geometry_msgs_Point.y
    _positionoutArray[0]["y"] = factory.createScalar(val.y);
    // _geometry_msgs_Point.z
    _positionoutArray[0]["z"] = factory.createScalar(val.z);
    return std::move(_positionoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_geometry_msgs_Vector3(geometry_msgs::Vector3& val, const matlab::data::StructArray& arr) {
    // _geometry_msgs_Vector3.x
    try {
        const matlab::data::TypedArray<double> _velocityx_arr = arr[0]["x"];
        val.x = _velocityx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    // _geometry_msgs_Vector3.y
    try {
        const matlab::data::TypedArray<double> _velocityy_arr = arr[0]["y"];
        val.y = _velocityy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    // _geometry_msgs_Vector3.z
    try {
        const matlab::data::TypedArray<double> _velocityz_arr = arr[0]["z"];
        val.z = _velocityz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_geometry_msgs_Vector3(MDFactory_T& factory, const mavros_msgs::PositionTarget::_velocity_type& val) {
    auto _velocityoutArray = factory.createStructArray({1,1},{"x","y","z"});
    // _geometry_msgs_Vector3.x
    _velocityoutArray[0]["x"] = factory.createScalar(val.x);
    // _geometry_msgs_Vector3.y
    _velocityoutArray[0]["y"] = factory.createScalar(val.y);
    // _geometry_msgs_Vector3.z
    _velocityoutArray[0]["z"] = factory.createScalar(val.z);
    return std::move(_velocityoutArray);
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::PositionTarget>& msg, const matlab::data::StructArray arr) {
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
        //coordinate_frame
        const matlab::data::TypedArray<uint8_t> coordinate_frame_arr = arr[0]["coordinate_frame"];
        msg->coordinate_frame = coordinate_frame_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'coordinate_frame' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'coordinate_frame' is wrong type; expected a uint8.");
    }
    try {
        //type_mask
        const matlab::data::TypedArray<uint16_t> type_mask_arr = arr[0]["type_mask"];
        msg->type_mask = type_mask_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'type_mask' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'type_mask' is wrong type; expected a uint16.");
    }
    try {
        //position
        const matlab::data::StructArray position_arr = arr[0]["position"];
        copy_from_arr_geometry_msgs_Point(msg->position,position_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'position' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'position' is wrong type; expected a struct.");
    }
    try {
        //velocity
        const matlab::data::StructArray velocity_arr = arr[0]["velocity"];
        copy_from_arr_geometry_msgs_Vector3(msg->velocity,velocity_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'velocity' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'velocity' is wrong type; expected a struct.");
    }
    try {
        //acceleration_or_force
        const matlab::data::StructArray acceleration_or_force_arr = arr[0]["acceleration_or_force"];
        copy_from_arr_geometry_msgs_Vector3(msg->acceleration_or_force,acceleration_or_force_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'acceleration_or_force' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'acceleration_or_force' is wrong type; expected a struct.");
    }
    try {
        //yaw
        const matlab::data::TypedArray<float> yaw_arr = arr[0]["yaw"];
        msg->yaw = yaw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'yaw' is wrong type; expected a single.");
    }
    try {
        //yaw_rate
        const matlab::data::TypedArray<float> yaw_rate_arr = arr[0]["yaw_rate"];
        msg->yaw_rate = yaw_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw_rate' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'yaw_rate' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::PositionTarget>& msg) {
    auto outArray = factory.createStructArray({1,1},{"header","coordinate_frame","FRAME_LOCAL_NED","FRAME_LOCAL_OFFSET_NED","FRAME_BODY_NED","FRAME_BODY_OFFSET_NED","type_mask","IGNORE_PX","IGNORE_PY","IGNORE_PZ","IGNORE_VX","IGNORE_VY","IGNORE_VZ","IGNORE_AFX","IGNORE_AFY","IGNORE_AFZ","FORCE","IGNORE_YAW","IGNORE_YAW_RATE","position","velocity","acceleration_or_force","yaw","yaw_rate"});
    // header
    outArray[0]["header"] = get_arr_std_msgs_Header(factory, msg->header);
    // coordinate_frame
    outArray[0]["coordinate_frame"] = factory.createScalar(msg->coordinate_frame);
    // FRAME_LOCAL_NED
    outArray[0]["FRAME_LOCAL_NED"] = factory.createScalar(static_cast<uint8_t>(msg->FRAME_LOCAL_NED));
    // FRAME_LOCAL_OFFSET_NED
    outArray[0]["FRAME_LOCAL_OFFSET_NED"] = factory.createScalar(static_cast<uint8_t>(msg->FRAME_LOCAL_OFFSET_NED));
    // FRAME_BODY_NED
    outArray[0]["FRAME_BODY_NED"] = factory.createScalar(static_cast<uint8_t>(msg->FRAME_BODY_NED));
    // FRAME_BODY_OFFSET_NED
    outArray[0]["FRAME_BODY_OFFSET_NED"] = factory.createScalar(static_cast<uint8_t>(msg->FRAME_BODY_OFFSET_NED));
    // type_mask
    outArray[0]["type_mask"] = factory.createScalar(msg->type_mask);
    // IGNORE_PX
    outArray[0]["IGNORE_PX"] = factory.createScalar(static_cast<uint16_t>(msg->IGNORE_PX));
    // IGNORE_PY
    outArray[0]["IGNORE_PY"] = factory.createScalar(static_cast<uint16_t>(msg->IGNORE_PY));
    // IGNORE_PZ
    outArray[0]["IGNORE_PZ"] = factory.createScalar(static_cast<uint16_t>(msg->IGNORE_PZ));
    // IGNORE_VX
    outArray[0]["IGNORE_VX"] = factory.createScalar(static_cast<uint16_t>(msg->IGNORE_VX));
    // IGNORE_VY
    outArray[0]["IGNORE_VY"] = factory.createScalar(static_cast<uint16_t>(msg->IGNORE_VY));
    // IGNORE_VZ
    outArray[0]["IGNORE_VZ"] = factory.createScalar(static_cast<uint16_t>(msg->IGNORE_VZ));
    // IGNORE_AFX
    outArray[0]["IGNORE_AFX"] = factory.createScalar(static_cast<uint16_t>(msg->IGNORE_AFX));
    // IGNORE_AFY
    outArray[0]["IGNORE_AFY"] = factory.createScalar(static_cast<uint16_t>(msg->IGNORE_AFY));
    // IGNORE_AFZ
    outArray[0]["IGNORE_AFZ"] = factory.createScalar(static_cast<uint16_t>(msg->IGNORE_AFZ));
    // FORCE
    outArray[0]["FORCE"] = factory.createScalar(static_cast<uint16_t>(msg->FORCE));
    // IGNORE_YAW
    outArray[0]["IGNORE_YAW"] = factory.createScalar(static_cast<uint16_t>(msg->IGNORE_YAW));
    // IGNORE_YAW_RATE
    outArray[0]["IGNORE_YAW_RATE"] = factory.createScalar(static_cast<uint16_t>(msg->IGNORE_YAW_RATE));
    // position
    outArray[0]["position"] = get_arr_geometry_msgs_Point(factory, msg->position);
    // velocity
    outArray[0]["velocity"] = get_arr_geometry_msgs_Vector3(factory, msg->velocity);
    // acceleration_or_force
    outArray[0]["acceleration_or_force"] = get_arr_geometry_msgs_Vector3(factory, msg->acceleration_or_force);
    // yaw
    outArray[0]["yaw"] = factory.createScalar(msg->yaw);
    // yaw_rate
    outArray[0]["yaw_rate"] = factory.createScalar(msg->yaw_rate);
    return std::move(outArray);
  }
} //namespace PositionTarget
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1