// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/FileListRequest
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
#include "mavros_msgs/FileListRequest.h"
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
namespace FileListRequest {
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::FileListRequest>& msg, const matlab::data::StructArray arr) {
    try {
        //dir_path
        const matlab::data::CharArray dir_path_arr = arr[0]["dir_path"];
        msg->dir_path = dir_path_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'dir_path' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'dir_path' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::FileListRequest>& msg) {
    auto outArray = factory.createStructArray({1,1},{"dir_path"});
    // dir_path
    outArray[0]["dir_path"] = factory.createCharArray(msg->dir_path);
    return std::move(outArray);
  }
} //namespace FileListRequest
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1