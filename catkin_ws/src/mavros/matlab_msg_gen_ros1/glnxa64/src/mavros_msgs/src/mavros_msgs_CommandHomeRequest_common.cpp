// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/CommandHomeRequest
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
#include "mavros_msgs/CommandHomeRequest.h"
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
namespace CommandHomeRequest {
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::CommandHomeRequest>& msg, const matlab::data::StructArray arr) {
    try {
        //current_gps
        const matlab::data::TypedArray<bool> current_gps_arr = arr[0]["current_gps"];
        msg->current_gps = current_gps_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'current_gps' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'current_gps' is wrong type; expected a logical.");
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
        //latitude
        const matlab::data::TypedArray<float> latitude_arr = arr[0]["latitude"];
        msg->latitude = latitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'latitude' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'latitude' is wrong type; expected a single.");
    }
    try {
        //longitude
        const matlab::data::TypedArray<float> longitude_arr = arr[0]["longitude"];
        msg->longitude = longitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'longitude' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'longitude' is wrong type; expected a single.");
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
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::CommandHomeRequest>& msg) {
    auto outArray = factory.createStructArray({1,1},{"current_gps","yaw","latitude","longitude","altitude"});
    // current_gps
    outArray[0]["current_gps"] = factory.createScalar(static_cast<bool>(msg->current_gps));
    // yaw
    outArray[0]["yaw"] = factory.createScalar(msg->yaw);
    // latitude
    outArray[0]["latitude"] = factory.createScalar(msg->latitude);
    // longitude
    outArray[0]["longitude"] = factory.createScalar(msg->longitude);
    // altitude
    outArray[0]["altitude"] = factory.createScalar(msg->altitude);
    return std::move(outArray);
  }
} //namespace CommandHomeRequest
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1