// Copyright 2020 The MathWorks, Inc.
// Common copy functions of server for mavros_msgs/FileOpenResponse
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
#include "mavros_msgs/FileOpen.h"
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
namespace FileOpen_Response {
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT void copy_from_arr(mavros_msgs::FileOpen::Response& msg, const matlab::data::StructArray arr) {
    try {
        //size
        const matlab::data::TypedArray<uint32_t> size_arr = arr[0]["size"];
        msg.size = size_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'size' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'size' is wrong type; expected a uint32.");
    }
    try {
        //success
        const matlab::data::TypedArray<bool> success_arr = arr[0]["success"];
        msg.success = success_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'success' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'success' is wrong type; expected a logical.");
    }
    try {
        //r_errno
        const matlab::data::TypedArray<int32_t> r_errno_arr = arr[0]["r_errno"];
        msg.r_errno = r_errno_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'r_errno' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'r_errno' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::FileOpen::Response& msg) {
    auto outArray = factory.createStructArray({1,1},{"size","success","r_errno"});
    // size
    outArray[0]["size"] = factory.createScalar(msg.size);
    // success
    outArray[0]["success"] = factory.createScalar(static_cast<bool>(msg.success));
    // r_errno
    outArray[0]["r_errno"] = factory.createScalar(msg.r_errno);
    return std::move(outArray);
  }
} //namespace FileOpen_Response
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1