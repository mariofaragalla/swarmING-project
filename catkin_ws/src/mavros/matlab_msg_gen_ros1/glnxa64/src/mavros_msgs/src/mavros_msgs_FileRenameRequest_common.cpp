// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/FileRenameRequest
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
#include "mavros_msgs/FileRenameRequest.h"
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
namespace FileRenameRequest {
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::FileRenameRequest>& msg, const matlab::data::StructArray arr) {
    try {
        //old_path
        const matlab::data::CharArray old_path_arr = arr[0]["old_path"];
        msg->old_path = old_path_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'old_path' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'old_path' is wrong type; expected a string.");
    }
    try {
        //new_path
        const matlab::data::CharArray new_path_arr = arr[0]["new_path"];
        msg->new_path = new_path_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'new_path' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'new_path' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::FileRenameRequest>& msg) {
    auto outArray = factory.createStructArray({1,1},{"old_path","new_path"});
    // old_path
    outArray[0]["old_path"] = factory.createCharArray(msg->old_path);
    // new_path
    outArray[0]["new_path"] = factory.createCharArray(msg->new_path);
    return std::move(outArray);
  }
} //namespace FileRenameRequest
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1