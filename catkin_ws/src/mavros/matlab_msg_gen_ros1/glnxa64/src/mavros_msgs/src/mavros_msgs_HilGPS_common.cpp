// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/HilGPS
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
#include "mavros_msgs/HilGPS.h"
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
namespace HilGPS {
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::HilGPS::_header_type& val);
  void copy_from_arr_ros_Time(ros::Time& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_ros_Time(MDFactory_T& factory, const std_msgs::Header::_stamp_type& val);
  void copy_from_arr_geographic_msgs_GeoPoint(geographic_msgs::GeoPoint& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_geographic_msgs_GeoPoint(MDFactory_T& factory, const mavros_msgs::HilGPS::_geo_type& val);
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
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::HilGPS::_header_type& val) {
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
  void copy_from_arr_geographic_msgs_GeoPoint(geographic_msgs::GeoPoint& val, const matlab::data::StructArray& arr) {
    // _geographic_msgs_GeoPoint.latitude
    try {
        const matlab::data::TypedArray<double> _geolatitude_arr = arr[0]["latitude"];
        val.latitude = _geolatitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'latitude' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'latitude' is wrong type; expected a double.");
    }
    // _geographic_msgs_GeoPoint.longitude
    try {
        const matlab::data::TypedArray<double> _geolongitude_arr = arr[0]["longitude"];
        val.longitude = _geolongitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'longitude' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'longitude' is wrong type; expected a double.");
    }
    // _geographic_msgs_GeoPoint.altitude
    try {
        const matlab::data::TypedArray<double> _geoaltitude_arr = arr[0]["altitude"];
        val.altitude = _geoaltitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'altitude' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'altitude' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_geographic_msgs_GeoPoint(MDFactory_T& factory, const mavros_msgs::HilGPS::_geo_type& val) {
    auto _geooutArray = factory.createStructArray({1,1},{"latitude","longitude","altitude"});
    // _geographic_msgs_GeoPoint.latitude
    _geooutArray[0]["latitude"] = factory.createScalar(val.latitude);
    // _geographic_msgs_GeoPoint.longitude
    _geooutArray[0]["longitude"] = factory.createScalar(val.longitude);
    // _geographic_msgs_GeoPoint.altitude
    _geooutArray[0]["altitude"] = factory.createScalar(val.altitude);
    return std::move(_geooutArray);
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::HilGPS>& msg, const matlab::data::StructArray arr) {
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
        //fix_type
        const matlab::data::TypedArray<uint8_t> fix_type_arr = arr[0]["fix_type"];
        msg->fix_type = fix_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fix_type' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'fix_type' is wrong type; expected a uint8.");
    }
    try {
        //geo
        const matlab::data::StructArray geo_arr = arr[0]["geo"];
        copy_from_arr_geographic_msgs_GeoPoint(msg->geo,geo_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'geo' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'geo' is wrong type; expected a struct.");
    }
    try {
        //eph
        const matlab::data::TypedArray<uint16_t> eph_arr = arr[0]["eph"];
        msg->eph = eph_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'eph' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'eph' is wrong type; expected a uint16.");
    }
    try {
        //epv
        const matlab::data::TypedArray<uint16_t> epv_arr = arr[0]["epv"];
        msg->epv = epv_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'epv' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'epv' is wrong type; expected a uint16.");
    }
    try {
        //vel
        const matlab::data::TypedArray<uint16_t> vel_arr = arr[0]["vel"];
        msg->vel = vel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vel' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'vel' is wrong type; expected a uint16.");
    }
    try {
        //vn
        const matlab::data::TypedArray<int16_t> vn_arr = arr[0]["vn"];
        msg->vn = vn_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vn' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'vn' is wrong type; expected a int16.");
    }
    try {
        //ve
        const matlab::data::TypedArray<int16_t> ve_arr = arr[0]["ve"];
        msg->ve = ve_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 've' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 've' is wrong type; expected a int16.");
    }
    try {
        //vd
        const matlab::data::TypedArray<int16_t> vd_arr = arr[0]["vd"];
        msg->vd = vd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vd' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'vd' is wrong type; expected a int16.");
    }
    try {
        //cog
        const matlab::data::TypedArray<uint16_t> cog_arr = arr[0]["cog"];
        msg->cog = cog_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cog' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'cog' is wrong type; expected a uint16.");
    }
    try {
        //satellites_visible
        const matlab::data::TypedArray<uint8_t> satellites_visible_arr = arr[0]["satellites_visible"];
        msg->satellites_visible = satellites_visible_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'satellites_visible' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'satellites_visible' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::HilGPS>& msg) {
    auto outArray = factory.createStructArray({1,1},{"header","fix_type","geo","eph","epv","vel","vn","ve","vd","cog","satellites_visible"});
    // header
    outArray[0]["header"] = get_arr_std_msgs_Header(factory, msg->header);
    // fix_type
    outArray[0]["fix_type"] = factory.createScalar(msg->fix_type);
    // geo
    outArray[0]["geo"] = get_arr_geographic_msgs_GeoPoint(factory, msg->geo);
    // eph
    outArray[0]["eph"] = factory.createScalar(msg->eph);
    // epv
    outArray[0]["epv"] = factory.createScalar(msg->epv);
    // vel
    outArray[0]["vel"] = factory.createScalar(msg->vel);
    // vn
    outArray[0]["vn"] = factory.createScalar(msg->vn);
    // ve
    outArray[0]["ve"] = factory.createScalar(msg->ve);
    // vd
    outArray[0]["vd"] = factory.createScalar(msg->vd);
    // cog
    outArray[0]["cog"] = factory.createScalar(msg->cog);
    // satellites_visible
    outArray[0]["satellites_visible"] = factory.createScalar(msg->satellites_visible);
    return std::move(outArray);
  }
} //namespace HilGPS
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1