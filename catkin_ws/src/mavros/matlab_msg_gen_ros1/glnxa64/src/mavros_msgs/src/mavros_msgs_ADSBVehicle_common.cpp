// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/ADSBVehicle
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
#include "mavros_msgs/ADSBVehicle.h"
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
namespace ADSBVehicle {
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::ADSBVehicle::_header_type& val);
  void copy_from_arr_ros_Time(ros::Time& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_ros_Time(MDFactory_T& factory, const std_msgs::Header::_stamp_type& val);
  void copy_from_arr_ros_Duration(ros::Duration& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_ros_Duration(MDFactory_T& factory, const mavros_msgs::ADSBVehicle::_tslc_type& val);
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
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::ADSBVehicle::_header_type& val) {
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
  void copy_from_arr_ros_Duration(ros::Duration& val, const matlab::data::StructArray& arr) {
    // _ros_Duration.sec
    try {
        const matlab::data::TypedArray<int32_t> _tslcsec_arr = arr[0]["sec"];
        val.sec = _tslcsec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sec' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'sec' is wrong type; expected a int32.");
    }
    // _ros_Duration.nsec
    try {
        const matlab::data::TypedArray<int32_t> _tslcnsec_arr = arr[0]["nsec"];
        val.nsec = _tslcnsec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'nsec' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'nsec' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_ros_Duration(MDFactory_T& factory, const mavros_msgs::ADSBVehicle::_tslc_type& val) {
    auto _tslcoutArray = factory.createStructArray({1,1},{"sec","nsec"});
    // _ros_Duration.sec
    _tslcoutArray[0]["sec"] = factory.createScalar(val.sec);
    // _ros_Duration.nsec
    _tslcoutArray[0]["nsec"] = factory.createScalar(val.nsec);
    return std::move(_tslcoutArray);
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::ADSBVehicle>& msg, const matlab::data::StructArray arr) {
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
        //ICAO_address
        const matlab::data::TypedArray<uint32_t> ICAO_address_arr = arr[0]["ICAO_address"];
        msg->ICAO_address = ICAO_address_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ICAO_address' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'ICAO_address' is wrong type; expected a uint32.");
    }
    try {
        //callsign
        const matlab::data::CharArray callsign_arr = arr[0]["callsign"];
        msg->callsign = callsign_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'callsign' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'callsign' is wrong type; expected a string.");
    }
    try {
        //latitude
        const matlab::data::TypedArray<double> latitude_arr = arr[0]["latitude"];
        msg->latitude = latitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'latitude' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'latitude' is wrong type; expected a double.");
    }
    try {
        //longitude
        const matlab::data::TypedArray<double> longitude_arr = arr[0]["longitude"];
        msg->longitude = longitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'longitude' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'longitude' is wrong type; expected a double.");
    }
    try {
        //altitude
        const matlab::data::TypedArray<float> altitude_arr = arr[0]["altitude"];
        msg->altitude = altitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'altitude' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'altitude' is wrong type; expected a single.");
    }
    try {
        //heading
        const matlab::data::TypedArray<float> heading_arr = arr[0]["heading"];
        msg->heading = heading_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'heading' is wrong type; expected a single.");
    }
    try {
        //hor_velocity
        const matlab::data::TypedArray<float> hor_velocity_arr = arr[0]["hor_velocity"];
        msg->hor_velocity = hor_velocity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'hor_velocity' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'hor_velocity' is wrong type; expected a single.");
    }
    try {
        //ver_velocity
        const matlab::data::TypedArray<float> ver_velocity_arr = arr[0]["ver_velocity"];
        msg->ver_velocity = ver_velocity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ver_velocity' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'ver_velocity' is wrong type; expected a single.");
    }
    try {
        //altitude_type
        const matlab::data::TypedArray<uint8_t> altitude_type_arr = arr[0]["altitude_type"];
        msg->altitude_type = altitude_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'altitude_type' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'altitude_type' is wrong type; expected a uint8.");
    }
    try {
        //emitter_type
        const matlab::data::TypedArray<uint8_t> emitter_type_arr = arr[0]["emitter_type"];
        msg->emitter_type = emitter_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'emitter_type' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'emitter_type' is wrong type; expected a uint8.");
    }
    try {
        //tslc
        const matlab::data::StructArray tslc_arr = arr[0]["tslc"];
        copy_from_arr_ros_Duration(msg->tslc,tslc_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tslc' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'tslc' is wrong type; expected a struct.");
    }
    try {
        //flags
        const matlab::data::TypedArray<uint16_t> flags_arr = arr[0]["flags"];
        msg->flags = flags_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flags' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'flags' is wrong type; expected a uint16.");
    }
    try {
        //squawk
        const matlab::data::TypedArray<uint16_t> squawk_arr = arr[0]["squawk"];
        msg->squawk = squawk_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'squawk' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'squawk' is wrong type; expected a uint16.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::ADSBVehicle>& msg) {
    auto outArray = factory.createStructArray({1,1},{"ALT_PRESSURE_QNH","ALT_GEOMETRIC","EMITTER_NO_INFO","EMITTER_LIGHT","EMITTER_SMALL","EMITTER_LARGE","EMITTER_HIGH_VORTEX_LARGE","EMITTER_HEAVY","EMITTER_HIGHLY_MANUV","EMITTER_ROTOCRAFT","EMITTER_UNASSIGNED","EMITTER_GLIDER","EMITTER_LIGHTER_AIR","EMITTER_PARACHUTE","EMITTER_ULTRA_LIGHT","EMITTER_UNASSIGNED2","EMITTER_UAV","EMITTER_SPACE","EMITTER_UNASSGINED3","EMITTER_EMERGENCY_SURFACE","EMITTER_SERVICE_SURFACE","EMITTER_POINT_OBSTACLE","FLAG_VALID_COORDS","FLAG_VALID_ALTITUDE","FLAG_VALID_HEADING","FLAG_VALID_VELOCITY","FLAG_VALID_CALLSIGN","FLAG_VALID_SQUAWK","FLAG_SIMULATED","header","ICAO_address","callsign","latitude","longitude","altitude","heading","hor_velocity","ver_velocity","altitude_type","emitter_type","tslc","flags","squawk"});
    // ALT_PRESSURE_QNH
    outArray[0]["ALT_PRESSURE_QNH"] = factory.createScalar(static_cast<uint8_t>(msg->ALT_PRESSURE_QNH));
    // ALT_GEOMETRIC
    outArray[0]["ALT_GEOMETRIC"] = factory.createScalar(static_cast<uint8_t>(msg->ALT_GEOMETRIC));
    // EMITTER_NO_INFO
    outArray[0]["EMITTER_NO_INFO"] = factory.createScalar(static_cast<uint8_t>(msg->EMITTER_NO_INFO));
    // EMITTER_LIGHT
    outArray[0]["EMITTER_LIGHT"] = factory.createScalar(static_cast<uint8_t>(msg->EMITTER_LIGHT));
    // EMITTER_SMALL
    outArray[0]["EMITTER_SMALL"] = factory.createScalar(static_cast<uint8_t>(msg->EMITTER_SMALL));
    // EMITTER_LARGE
    outArray[0]["EMITTER_LARGE"] = factory.createScalar(static_cast<uint8_t>(msg->EMITTER_LARGE));
    // EMITTER_HIGH_VORTEX_LARGE
    outArray[0]["EMITTER_HIGH_VORTEX_LARGE"] = factory.createScalar(static_cast<uint8_t>(msg->EMITTER_HIGH_VORTEX_LARGE));
    // EMITTER_HEAVY
    outArray[0]["EMITTER_HEAVY"] = factory.createScalar(static_cast<uint8_t>(msg->EMITTER_HEAVY));
    // EMITTER_HIGHLY_MANUV
    outArray[0]["EMITTER_HIGHLY_MANUV"] = factory.createScalar(static_cast<uint8_t>(msg->EMITTER_HIGHLY_MANUV));
    // EMITTER_ROTOCRAFT
    outArray[0]["EMITTER_ROTOCRAFT"] = factory.createScalar(static_cast<uint8_t>(msg->EMITTER_ROTOCRAFT));
    // EMITTER_UNASSIGNED
    outArray[0]["EMITTER_UNASSIGNED"] = factory.createScalar(static_cast<uint8_t>(msg->EMITTER_UNASSIGNED));
    // EMITTER_GLIDER
    outArray[0]["EMITTER_GLIDER"] = factory.createScalar(static_cast<uint8_t>(msg->EMITTER_GLIDER));
    // EMITTER_LIGHTER_AIR
    outArray[0]["EMITTER_LIGHTER_AIR"] = factory.createScalar(static_cast<uint8_t>(msg->EMITTER_LIGHTER_AIR));
    // EMITTER_PARACHUTE
    outArray[0]["EMITTER_PARACHUTE"] = factory.createScalar(static_cast<uint8_t>(msg->EMITTER_PARACHUTE));
    // EMITTER_ULTRA_LIGHT
    outArray[0]["EMITTER_ULTRA_LIGHT"] = factory.createScalar(static_cast<uint8_t>(msg->EMITTER_ULTRA_LIGHT));
    // EMITTER_UNASSIGNED2
    outArray[0]["EMITTER_UNASSIGNED2"] = factory.createScalar(static_cast<uint8_t>(msg->EMITTER_UNASSIGNED2));
    // EMITTER_UAV
    outArray[0]["EMITTER_UAV"] = factory.createScalar(static_cast<uint8_t>(msg->EMITTER_UAV));
    // EMITTER_SPACE
    outArray[0]["EMITTER_SPACE"] = factory.createScalar(static_cast<uint8_t>(msg->EMITTER_SPACE));
    // EMITTER_UNASSGINED3
    outArray[0]["EMITTER_UNASSGINED3"] = factory.createScalar(static_cast<uint8_t>(msg->EMITTER_UNASSGINED3));
    // EMITTER_EMERGENCY_SURFACE
    outArray[0]["EMITTER_EMERGENCY_SURFACE"] = factory.createScalar(static_cast<uint8_t>(msg->EMITTER_EMERGENCY_SURFACE));
    // EMITTER_SERVICE_SURFACE
    outArray[0]["EMITTER_SERVICE_SURFACE"] = factory.createScalar(static_cast<uint8_t>(msg->EMITTER_SERVICE_SURFACE));
    // EMITTER_POINT_OBSTACLE
    outArray[0]["EMITTER_POINT_OBSTACLE"] = factory.createScalar(static_cast<uint8_t>(msg->EMITTER_POINT_OBSTACLE));
    // FLAG_VALID_COORDS
    outArray[0]["FLAG_VALID_COORDS"] = factory.createScalar(static_cast<uint16_t>(msg->FLAG_VALID_COORDS));
    // FLAG_VALID_ALTITUDE
    outArray[0]["FLAG_VALID_ALTITUDE"] = factory.createScalar(static_cast<uint16_t>(msg->FLAG_VALID_ALTITUDE));
    // FLAG_VALID_HEADING
    outArray[0]["FLAG_VALID_HEADING"] = factory.createScalar(static_cast<uint16_t>(msg->FLAG_VALID_HEADING));
    // FLAG_VALID_VELOCITY
    outArray[0]["FLAG_VALID_VELOCITY"] = factory.createScalar(static_cast<uint16_t>(msg->FLAG_VALID_VELOCITY));
    // FLAG_VALID_CALLSIGN
    outArray[0]["FLAG_VALID_CALLSIGN"] = factory.createScalar(static_cast<uint16_t>(msg->FLAG_VALID_CALLSIGN));
    // FLAG_VALID_SQUAWK
    outArray[0]["FLAG_VALID_SQUAWK"] = factory.createScalar(static_cast<uint16_t>(msg->FLAG_VALID_SQUAWK));
    // FLAG_SIMULATED
    outArray[0]["FLAG_SIMULATED"] = factory.createScalar(static_cast<uint16_t>(msg->FLAG_SIMULATED));
    // header
    outArray[0]["header"] = get_arr_std_msgs_Header(factory, msg->header);
    // ICAO_address
    outArray[0]["ICAO_address"] = factory.createScalar(msg->ICAO_address);
    // callsign
    outArray[0]["callsign"] = factory.createCharArray(msg->callsign);
    // latitude
    outArray[0]["latitude"] = factory.createScalar(msg->latitude);
    // longitude
    outArray[0]["longitude"] = factory.createScalar(msg->longitude);
    // altitude
    outArray[0]["altitude"] = factory.createScalar(msg->altitude);
    // heading
    outArray[0]["heading"] = factory.createScalar(msg->heading);
    // hor_velocity
    outArray[0]["hor_velocity"] = factory.createScalar(msg->hor_velocity);
    // ver_velocity
    outArray[0]["ver_velocity"] = factory.createScalar(msg->ver_velocity);
    // altitude_type
    outArray[0]["altitude_type"] = factory.createScalar(msg->altitude_type);
    // emitter_type
    outArray[0]["emitter_type"] = factory.createScalar(msg->emitter_type);
    // tslc
    outArray[0]["tslc"] = get_arr_ros_Duration(factory, msg->tslc);
    // flags
    outArray[0]["flags"] = factory.createScalar(msg->flags);
    // squawk
    outArray[0]["squawk"] = factory.createScalar(msg->squawk);
    return std::move(outArray);
  }
} //namespace ADSBVehicle
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1