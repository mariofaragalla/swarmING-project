// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/VehicleInfoGetRequest
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
#include "mavros_msgs/VehicleInfoGetRequest.h"
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
namespace VehicleInfoGetRequest {
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::VehicleInfoGetRequest>& msg, const matlab::data::StructArray arr) {
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
        //get_all
        const matlab::data::TypedArray<bool> get_all_arr = arr[0]["get_all"];
        msg->get_all = get_all_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'get_all' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'get_all' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::VehicleInfoGetRequest>& msg) {
    auto outArray = factory.createStructArray({1,1},{"GET_MY_SYSID","GET_MY_COMPID","sysid","compid","get_all"});
    // GET_MY_SYSID
    outArray[0]["GET_MY_SYSID"] = factory.createScalar(static_cast<uint8_t>(msg->GET_MY_SYSID));
    // GET_MY_COMPID
    outArray[0]["GET_MY_COMPID"] = factory.createScalar(static_cast<uint8_t>(msg->GET_MY_COMPID));
    // sysid
    outArray[0]["sysid"] = factory.createScalar(msg->sysid);
    // compid
    outArray[0]["compid"] = factory.createScalar(msg->compid);
    // get_all
    outArray[0]["get_all"] = factory.createScalar(static_cast<bool>(msg->get_all));
    return std::move(outArray);
  }
} //namespace VehicleInfoGetRequest
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1