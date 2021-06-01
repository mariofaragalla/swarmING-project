// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/Trajectory
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
#include "mavros_msgs/Trajectory.h"
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
namespace Trajectory {
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::Trajectory::_header_type& val);
  void copy_from_arr_ros_Time(ros::Time& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_ros_Time(MDFactory_T& factory, const std_msgs::Header::_stamp_type& val);
  void copy_from_arr_mavros_msgs_PositionTarget(mavros_msgs::PositionTarget& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_mavros_msgs_PositionTarget(MDFactory_T& factory, const mavros_msgs::Trajectory::_point_1_type& val);
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
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::Trajectory::_header_type& val) {
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
  void copy_from_arr_mavros_msgs_PositionTarget(mavros_msgs::PositionTarget& val, const matlab::data::StructArray& arr) {
    // _mavros_msgs_PositionTarget.header
    try {
        const matlab::data::StructArray _point_1header_arr = arr[0]["header"];
        copy_from_arr_std_msgs_Header(val.header,_point_1header_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'header' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'header' is wrong type; expected a struct.");
    }
    // _mavros_msgs_PositionTarget.coordinate_frame
    try {
        const matlab::data::TypedArray<uint8_t> _point_1coordinate_frame_arr = arr[0]["coordinate_frame"];
        val.coordinate_frame = _point_1coordinate_frame_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'coordinate_frame' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'coordinate_frame' is wrong type; expected a uint8.");
    }
    // _mavros_msgs_PositionTarget.FRAME_LOCAL_NED
    // _mavros_msgs_PositionTarget.FRAME_LOCAL_OFFSET_NED
    // _mavros_msgs_PositionTarget.FRAME_BODY_NED
    // _mavros_msgs_PositionTarget.FRAME_BODY_OFFSET_NED
    // _mavros_msgs_PositionTarget.type_mask
    try {
        const matlab::data::TypedArray<uint16_t> _point_1type_mask_arr = arr[0]["type_mask"];
        val.type_mask = _point_1type_mask_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'type_mask' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'type_mask' is wrong type; expected a uint16.");
    }
    // _mavros_msgs_PositionTarget.IGNORE_PX
    // _mavros_msgs_PositionTarget.IGNORE_PY
    // _mavros_msgs_PositionTarget.IGNORE_PZ
    // _mavros_msgs_PositionTarget.IGNORE_VX
    // _mavros_msgs_PositionTarget.IGNORE_VY
    // _mavros_msgs_PositionTarget.IGNORE_VZ
    // _mavros_msgs_PositionTarget.IGNORE_AFX
    // _mavros_msgs_PositionTarget.IGNORE_AFY
    // _mavros_msgs_PositionTarget.IGNORE_AFZ
    // _mavros_msgs_PositionTarget.FORCE
    // _mavros_msgs_PositionTarget.IGNORE_YAW
    // _mavros_msgs_PositionTarget.IGNORE_YAW_RATE
    // _mavros_msgs_PositionTarget.position
    try {
        const matlab::data::StructArray _point_1position_arr = arr[0]["position"];
        copy_from_arr_geometry_msgs_Point(val.position,_point_1position_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'position' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'position' is wrong type; expected a struct.");
    }
    // _mavros_msgs_PositionTarget.velocity
    try {
        const matlab::data::StructArray _point_1velocity_arr = arr[0]["velocity"];
        copy_from_arr_geometry_msgs_Vector3(val.velocity,_point_1velocity_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'velocity' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'velocity' is wrong type; expected a struct.");
    }
    // _mavros_msgs_PositionTarget.acceleration_or_force
    try {
        const matlab::data::StructArray _point_1acceleration_or_force_arr = arr[0]["acceleration_or_force"];
        copy_from_arr_geometry_msgs_Vector3(val.acceleration_or_force,_point_1acceleration_or_force_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'acceleration_or_force' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'acceleration_or_force' is wrong type; expected a struct.");
    }
    // _mavros_msgs_PositionTarget.yaw
    try {
        const matlab::data::TypedArray<float> _point_1yaw_arr = arr[0]["yaw"];
        val.yaw = _point_1yaw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'yaw' is wrong type; expected a single.");
    }
    // _mavros_msgs_PositionTarget.yaw_rate
    try {
        const matlab::data::TypedArray<float> _point_1yaw_rate_arr = arr[0]["yaw_rate"];
        val.yaw_rate = _point_1yaw_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw_rate' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'yaw_rate' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_mavros_msgs_PositionTarget(MDFactory_T& factory, const mavros_msgs::Trajectory::_point_1_type& val) {
    auto _point_1outArray = factory.createStructArray({1,1},{"header","coordinate_frame","FRAME_LOCAL_NED","FRAME_LOCAL_OFFSET_NED","FRAME_BODY_NED","FRAME_BODY_OFFSET_NED","type_mask","IGNORE_PX","IGNORE_PY","IGNORE_PZ","IGNORE_VX","IGNORE_VY","IGNORE_VZ","IGNORE_AFX","IGNORE_AFY","IGNORE_AFZ","FORCE","IGNORE_YAW","IGNORE_YAW_RATE","position","velocity","acceleration_or_force","yaw","yaw_rate"});
    // _mavros_msgs_PositionTarget.header
    _point_1outArray[0]["header"] = get_arr_std_msgs_Header(factory, val.header);
    // _mavros_msgs_PositionTarget.coordinate_frame
    _point_1outArray[0]["coordinate_frame"] = factory.createScalar(val.coordinate_frame);
    // _mavros_msgs_PositionTarget.FRAME_LOCAL_NED
    _point_1outArray[0]["FRAME_LOCAL_NED"] = factory.createScalar(static_cast<uint8_t>(val.FRAME_LOCAL_NED));
    // _mavros_msgs_PositionTarget.FRAME_LOCAL_OFFSET_NED
    _point_1outArray[0]["FRAME_LOCAL_OFFSET_NED"] = factory.createScalar(static_cast<uint8_t>(val.FRAME_LOCAL_OFFSET_NED));
    // _mavros_msgs_PositionTarget.FRAME_BODY_NED
    _point_1outArray[0]["FRAME_BODY_NED"] = factory.createScalar(static_cast<uint8_t>(val.FRAME_BODY_NED));
    // _mavros_msgs_PositionTarget.FRAME_BODY_OFFSET_NED
    _point_1outArray[0]["FRAME_BODY_OFFSET_NED"] = factory.createScalar(static_cast<uint8_t>(val.FRAME_BODY_OFFSET_NED));
    // _mavros_msgs_PositionTarget.type_mask
    _point_1outArray[0]["type_mask"] = factory.createScalar(val.type_mask);
    // _mavros_msgs_PositionTarget.IGNORE_PX
    _point_1outArray[0]["IGNORE_PX"] = factory.createScalar(static_cast<uint16_t>(val.IGNORE_PX));
    // _mavros_msgs_PositionTarget.IGNORE_PY
    _point_1outArray[0]["IGNORE_PY"] = factory.createScalar(static_cast<uint16_t>(val.IGNORE_PY));
    // _mavros_msgs_PositionTarget.IGNORE_PZ
    _point_1outArray[0]["IGNORE_PZ"] = factory.createScalar(static_cast<uint16_t>(val.IGNORE_PZ));
    // _mavros_msgs_PositionTarget.IGNORE_VX
    _point_1outArray[0]["IGNORE_VX"] = factory.createScalar(static_cast<uint16_t>(val.IGNORE_VX));
    // _mavros_msgs_PositionTarget.IGNORE_VY
    _point_1outArray[0]["IGNORE_VY"] = factory.createScalar(static_cast<uint16_t>(val.IGNORE_VY));
    // _mavros_msgs_PositionTarget.IGNORE_VZ
    _point_1outArray[0]["IGNORE_VZ"] = factory.createScalar(static_cast<uint16_t>(val.IGNORE_VZ));
    // _mavros_msgs_PositionTarget.IGNORE_AFX
    _point_1outArray[0]["IGNORE_AFX"] = factory.createScalar(static_cast<uint16_t>(val.IGNORE_AFX));
    // _mavros_msgs_PositionTarget.IGNORE_AFY
    _point_1outArray[0]["IGNORE_AFY"] = factory.createScalar(static_cast<uint16_t>(val.IGNORE_AFY));
    // _mavros_msgs_PositionTarget.IGNORE_AFZ
    _point_1outArray[0]["IGNORE_AFZ"] = factory.createScalar(static_cast<uint16_t>(val.IGNORE_AFZ));
    // _mavros_msgs_PositionTarget.FORCE
    _point_1outArray[0]["FORCE"] = factory.createScalar(static_cast<uint16_t>(val.FORCE));
    // _mavros_msgs_PositionTarget.IGNORE_YAW
    _point_1outArray[0]["IGNORE_YAW"] = factory.createScalar(static_cast<uint16_t>(val.IGNORE_YAW));
    // _mavros_msgs_PositionTarget.IGNORE_YAW_RATE
    _point_1outArray[0]["IGNORE_YAW_RATE"] = factory.createScalar(static_cast<uint16_t>(val.IGNORE_YAW_RATE));
    // _mavros_msgs_PositionTarget.position
    _point_1outArray[0]["position"] = get_arr_geometry_msgs_Point(factory, val.position);
    // _mavros_msgs_PositionTarget.velocity
    _point_1outArray[0]["velocity"] = get_arr_geometry_msgs_Vector3(factory, val.velocity);
    // _mavros_msgs_PositionTarget.acceleration_or_force
    _point_1outArray[0]["acceleration_or_force"] = get_arr_geometry_msgs_Vector3(factory, val.acceleration_or_force);
    // _mavros_msgs_PositionTarget.yaw
    _point_1outArray[0]["yaw"] = factory.createScalar(val.yaw);
    // _mavros_msgs_PositionTarget.yaw_rate
    _point_1outArray[0]["yaw_rate"] = factory.createScalar(val.yaw_rate);
    return std::move(_point_1outArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_geometry_msgs_Point(geometry_msgs::Point& val, const matlab::data::StructArray& arr) {
    // _geometry_msgs_Point.x
    try {
        const matlab::data::TypedArray<double> _point_1_positionx_arr = arr[0]["x"];
        val.x = _point_1_positionx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    // _geometry_msgs_Point.y
    try {
        const matlab::data::TypedArray<double> _point_1_positiony_arr = arr[0]["y"];
        val.y = _point_1_positiony_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    // _geometry_msgs_Point.z
    try {
        const matlab::data::TypedArray<double> _point_1_positionz_arr = arr[0]["z"];
        val.z = _point_1_positionz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_geometry_msgs_Point(MDFactory_T& factory, const mavros_msgs::PositionTarget::_position_type& val) {
    auto _point_1_positionoutArray = factory.createStructArray({1,1},{"x","y","z"});
    // _geometry_msgs_Point.x
    _point_1_positionoutArray[0]["x"] = factory.createScalar(val.x);
    // _geometry_msgs_Point.y
    _point_1_positionoutArray[0]["y"] = factory.createScalar(val.y);
    // _geometry_msgs_Point.z
    _point_1_positionoutArray[0]["z"] = factory.createScalar(val.z);
    return std::move(_point_1_positionoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_geometry_msgs_Vector3(geometry_msgs::Vector3& val, const matlab::data::StructArray& arr) {
    // _geometry_msgs_Vector3.x
    try {
        const matlab::data::TypedArray<double> _point_1_velocityx_arr = arr[0]["x"];
        val.x = _point_1_velocityx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    // _geometry_msgs_Vector3.y
    try {
        const matlab::data::TypedArray<double> _point_1_velocityy_arr = arr[0]["y"];
        val.y = _point_1_velocityy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    // _geometry_msgs_Vector3.z
    try {
        const matlab::data::TypedArray<double> _point_1_velocityz_arr = arr[0]["z"];
        val.z = _point_1_velocityz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_geometry_msgs_Vector3(MDFactory_T& factory, const mavros_msgs::PositionTarget::_velocity_type& val) {
    auto _point_1_velocityoutArray = factory.createStructArray({1,1},{"x","y","z"});
    // _geometry_msgs_Vector3.x
    _point_1_velocityoutArray[0]["x"] = factory.createScalar(val.x);
    // _geometry_msgs_Vector3.y
    _point_1_velocityoutArray[0]["y"] = factory.createScalar(val.y);
    // _geometry_msgs_Vector3.z
    _point_1_velocityoutArray[0]["z"] = factory.createScalar(val.z);
    return std::move(_point_1_velocityoutArray);
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::Trajectory>& msg, const matlab::data::StructArray arr) {
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
        //type
        const matlab::data::TypedArray<uint8_t> type_arr = arr[0]["type"];
        msg->type = type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'type' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'type' is wrong type; expected a uint8.");
    }
    try {
        //point_1
        const matlab::data::StructArray point_1_arr = arr[0]["point_1"];
        copy_from_arr_mavros_msgs_PositionTarget(msg->point_1,point_1_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'point_1' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'point_1' is wrong type; expected a struct.");
    }
    try {
        //point_2
        const matlab::data::StructArray point_2_arr = arr[0]["point_2"];
        copy_from_arr_mavros_msgs_PositionTarget(msg->point_2,point_2_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'point_2' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'point_2' is wrong type; expected a struct.");
    }
    try {
        //point_3
        const matlab::data::StructArray point_3_arr = arr[0]["point_3"];
        copy_from_arr_mavros_msgs_PositionTarget(msg->point_3,point_3_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'point_3' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'point_3' is wrong type; expected a struct.");
    }
    try {
        //point_4
        const matlab::data::StructArray point_4_arr = arr[0]["point_4"];
        copy_from_arr_mavros_msgs_PositionTarget(msg->point_4,point_4_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'point_4' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'point_4' is wrong type; expected a struct.");
    }
    try {
        //point_5
        const matlab::data::StructArray point_5_arr = arr[0]["point_5"];
        copy_from_arr_mavros_msgs_PositionTarget(msg->point_5,point_5_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'point_5' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'point_5' is wrong type; expected a struct.");
    }
    try {
        //point_valid
        const matlab::data::TypedArray<uint8_t> point_valid_arr = arr[0]["point_valid"];
        size_t nelem = 5;
        	std::copy(point_valid_arr.begin(), point_valid_arr.begin()+nelem, msg->point_valid.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'point_valid' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'point_valid' is wrong type; expected a uint8.");
    }
    try {
        //command
        const matlab::data::TypedArray<uint16_t> command_arr = arr[0]["command"];
        size_t nelem = 5;
        	std::copy(command_arr.begin(), command_arr.begin()+nelem, msg->command.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'command' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'command' is wrong type; expected a uint16.");
    }
    try {
        //time_horizon
        const matlab::data::TypedArray<float> time_horizon_arr = arr[0]["time_horizon"];
        size_t nelem = 5;
        	std::copy(time_horizon_arr.begin(), time_horizon_arr.begin()+nelem, msg->time_horizon.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'time_horizon' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'time_horizon' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::Trajectory>& msg) {
    auto outArray = factory.createStructArray({1,1},{"header","type","MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS","MAV_TRAJECTORY_REPRESENTATION_BEZIER","point_1","point_2","point_3","point_4","point_5","point_valid","command","time_horizon"});
    // header
    outArray[0]["header"] = get_arr_std_msgs_Header(factory, msg->header);
    // type
    outArray[0]["type"] = factory.createScalar(msg->type);
    // MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS
    outArray[0]["MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS"] = factory.createScalar(static_cast<uint8_t>(msg->MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS));
    // MAV_TRAJECTORY_REPRESENTATION_BEZIER
    outArray[0]["MAV_TRAJECTORY_REPRESENTATION_BEZIER"] = factory.createScalar(static_cast<uint8_t>(msg->MAV_TRAJECTORY_REPRESENTATION_BEZIER));
    // point_1
    outArray[0]["point_1"] = get_arr_mavros_msgs_PositionTarget(factory, msg->point_1);
    // point_2
    outArray[0]["point_2"] = get_arr_mavros_msgs_PositionTarget(factory, msg->point_2);
    // point_3
    outArray[0]["point_3"] = get_arr_mavros_msgs_PositionTarget(factory, msg->point_3);
    // point_4
    outArray[0]["point_4"] = get_arr_mavros_msgs_PositionTarget(factory, msg->point_4);
    // point_5
    outArray[0]["point_5"] = get_arr_mavros_msgs_PositionTarget(factory, msg->point_5);
    // point_valid
    outArray[0]["point_valid"] = factory.createArray<mavros_msgs::Trajectory::_point_valid_type::const_iterator, uint8_t>({1, msg->point_valid.size()}, msg->point_valid.begin(), msg->point_valid.end());
    // command
    outArray[0]["command"] = factory.createArray<mavros_msgs::Trajectory::_command_type::const_iterator, uint16_t>({1, msg->command.size()}, msg->command.begin(), msg->command.end());
    // time_horizon
    outArray[0]["time_horizon"] = factory.createArray<mavros_msgs::Trajectory::_time_horizon_type::const_iterator, float>({1, msg->time_horizon.size()}, msg->time_horizon.begin(), msg->time_horizon.end());
    return std::move(outArray);
  }
} //namespace Trajectory
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1