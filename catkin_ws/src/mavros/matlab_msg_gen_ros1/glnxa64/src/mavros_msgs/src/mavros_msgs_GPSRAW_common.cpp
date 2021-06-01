// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/GPSRAW
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
#include "mavros_msgs/GPSRAW.h"
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
namespace GPSRAW {
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::GPSRAW::_header_type& val);
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
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const mavros_msgs::GPSRAW::_header_type& val) {
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
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::GPSRAW>& msg, const matlab::data::StructArray arr) {
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
        //lat
        const matlab::data::TypedArray<int32_t> lat_arr = arr[0]["lat"];
        msg->lat = lat_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'lat' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'lat' is wrong type; expected a int32.");
    }
    try {
        //lon
        const matlab::data::TypedArray<int32_t> lon_arr = arr[0]["lon"];
        msg->lon = lon_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'lon' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'lon' is wrong type; expected a int32.");
    }
    try {
        //alt
        const matlab::data::TypedArray<int32_t> alt_arr = arr[0]["alt"];
        msg->alt = alt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'alt' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'alt' is wrong type; expected a int32.");
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
    try {
        //alt_ellipsoid
        const matlab::data::TypedArray<int32_t> alt_ellipsoid_arr = arr[0]["alt_ellipsoid"];
        msg->alt_ellipsoid = alt_ellipsoid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'alt_ellipsoid' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'alt_ellipsoid' is wrong type; expected a int32.");
    }
    try {
        //h_acc
        const matlab::data::TypedArray<uint32_t> h_acc_arr = arr[0]["h_acc"];
        msg->h_acc = h_acc_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'h_acc' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'h_acc' is wrong type; expected a uint32.");
    }
    try {
        //v_acc
        const matlab::data::TypedArray<uint32_t> v_acc_arr = arr[0]["v_acc"];
        msg->v_acc = v_acc_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'v_acc' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'v_acc' is wrong type; expected a uint32.");
    }
    try {
        //vel_acc
        const matlab::data::TypedArray<uint32_t> vel_acc_arr = arr[0]["vel_acc"];
        msg->vel_acc = vel_acc_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vel_acc' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'vel_acc' is wrong type; expected a uint32.");
    }
    try {
        //hdg_acc
        const matlab::data::TypedArray<int32_t> hdg_acc_arr = arr[0]["hdg_acc"];
        msg->hdg_acc = hdg_acc_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'hdg_acc' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'hdg_acc' is wrong type; expected a int32.");
    }
    try {
        //dgps_numch
        const matlab::data::TypedArray<uint8_t> dgps_numch_arr = arr[0]["dgps_numch"];
        msg->dgps_numch = dgps_numch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'dgps_numch' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'dgps_numch' is wrong type; expected a uint8.");
    }
    try {
        //dgps_age
        const matlab::data::TypedArray<uint32_t> dgps_age_arr = arr[0]["dgps_age"];
        msg->dgps_age = dgps_age_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'dgps_age' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'dgps_age' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::GPSRAW>& msg) {
    auto outArray = factory.createStructArray({1,1},{"header","GPS_FIX_TYPE_NO_GPS","GPS_FIX_TYPE_NO_FIX","GPS_FIX_TYPE_2D_FIX","GPS_FIX_TYPE_3D_FIX","GPS_FIX_TYPE_DGPS","GPS_FIX_TYPE_RTK_FLOATR","GPS_FIX_TYPE_RTK_FIXEDR","GPS_FIX_TYPE_STATIC","GPS_FIX_TYPE_PPP","fix_type","lat","lon","alt","eph","epv","vel","cog","satellites_visible","alt_ellipsoid","h_acc","v_acc","vel_acc","hdg_acc","dgps_numch","dgps_age"});
    // header
    outArray[0]["header"] = get_arr_std_msgs_Header(factory, msg->header);
    // GPS_FIX_TYPE_NO_GPS
    outArray[0]["GPS_FIX_TYPE_NO_GPS"] = factory.createScalar(static_cast<uint8_t>(msg->GPS_FIX_TYPE_NO_GPS));
    // GPS_FIX_TYPE_NO_FIX
    outArray[0]["GPS_FIX_TYPE_NO_FIX"] = factory.createScalar(static_cast<uint8_t>(msg->GPS_FIX_TYPE_NO_FIX));
    // GPS_FIX_TYPE_2D_FIX
    outArray[0]["GPS_FIX_TYPE_2D_FIX"] = factory.createScalar(static_cast<uint8_t>(msg->GPS_FIX_TYPE_2D_FIX));
    // GPS_FIX_TYPE_3D_FIX
    outArray[0]["GPS_FIX_TYPE_3D_FIX"] = factory.createScalar(static_cast<uint8_t>(msg->GPS_FIX_TYPE_3D_FIX));
    // GPS_FIX_TYPE_DGPS
    outArray[0]["GPS_FIX_TYPE_DGPS"] = factory.createScalar(static_cast<uint8_t>(msg->GPS_FIX_TYPE_DGPS));
    // GPS_FIX_TYPE_RTK_FLOATR
    outArray[0]["GPS_FIX_TYPE_RTK_FLOATR"] = factory.createScalar(static_cast<uint8_t>(msg->GPS_FIX_TYPE_RTK_FLOATR));
    // GPS_FIX_TYPE_RTK_FIXEDR
    outArray[0]["GPS_FIX_TYPE_RTK_FIXEDR"] = factory.createScalar(static_cast<uint8_t>(msg->GPS_FIX_TYPE_RTK_FIXEDR));
    // GPS_FIX_TYPE_STATIC
    outArray[0]["GPS_FIX_TYPE_STATIC"] = factory.createScalar(static_cast<uint8_t>(msg->GPS_FIX_TYPE_STATIC));
    // GPS_FIX_TYPE_PPP
    outArray[0]["GPS_FIX_TYPE_PPP"] = factory.createScalar(static_cast<uint8_t>(msg->GPS_FIX_TYPE_PPP));
    // fix_type
    outArray[0]["fix_type"] = factory.createScalar(msg->fix_type);
    // lat
    outArray[0]["lat"] = factory.createScalar(msg->lat);
    // lon
    outArray[0]["lon"] = factory.createScalar(msg->lon);
    // alt
    outArray[0]["alt"] = factory.createScalar(msg->alt);
    // eph
    outArray[0]["eph"] = factory.createScalar(msg->eph);
    // epv
    outArray[0]["epv"] = factory.createScalar(msg->epv);
    // vel
    outArray[0]["vel"] = factory.createScalar(msg->vel);
    // cog
    outArray[0]["cog"] = factory.createScalar(msg->cog);
    // satellites_visible
    outArray[0]["satellites_visible"] = factory.createScalar(msg->satellites_visible);
    // alt_ellipsoid
    outArray[0]["alt_ellipsoid"] = factory.createScalar(msg->alt_ellipsoid);
    // h_acc
    outArray[0]["h_acc"] = factory.createScalar(msg->h_acc);
    // v_acc
    outArray[0]["v_acc"] = factory.createScalar(msg->v_acc);
    // vel_acc
    outArray[0]["vel_acc"] = factory.createScalar(msg->vel_acc);
    // hdg_acc
    outArray[0]["hdg_acc"] = factory.createScalar(msg->hdg_acc);
    // dgps_numch
    outArray[0]["dgps_numch"] = factory.createScalar(msg->dgps_numch);
    // dgps_age
    outArray[0]["dgps_age"] = factory.createScalar(msg->dgps_age);
    return std::move(outArray);
  }
} //namespace GPSRAW
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1