// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/FileListResponse
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
#include "mavros_msgs/FileListResponse.h"
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
namespace FileListResponse {
  void copy_from_arr_mavros_msgs_FileEntry_var_arr(mavros_msgs::FileEntry& val, const matlab::data::Struct& arr);
  MDArray_T get_arr_mavros_msgs_FileEntry_var_arr(MDFactory_T& factory, const mavros_msgs::FileListResponse::_list_type& val);
  //----------------------------------------------------------------------------
  void copy_from_arr_mavros_msgs_FileEntry_var_arr(mavros_msgs::FileEntry& val, const matlab::data::Struct& arr) {
    // _mavros_msgs_FileEntry_var_arr.TYPE_FILE
    // _mavros_msgs_FileEntry_var_arr.TYPE_DIRECTORY
    // _mavros_msgs_FileEntry_var_arr.name
    try {
        const matlab::data::CharArray _listname_arr = arr["name"];
        val.name = _listname_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'name' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'name' is wrong type; expected a string.");
    }
    // _mavros_msgs_FileEntry_var_arr.type
    try {
        const matlab::data::TypedArray<uint8_t> _listtype_arr = arr["type"];
        val.type = _listtype_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'type' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'type' is wrong type; expected a uint8.");
    }
    // _mavros_msgs_FileEntry_var_arr.size
    try {
        const matlab::data::TypedArray<uint64_t> _listsize_arr = arr["size"];
        val.size = _listsize_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'size' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'size' is wrong type; expected a uint64.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_mavros_msgs_FileEntry_var_arr(MDFactory_T& factory, const mavros_msgs::FileListResponse::_list_type& val) {
    auto _listoutArray = factory.createStructArray({1,val.size()},{"TYPE_FILE","TYPE_DIRECTORY","name","type","size"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // _mavros_msgs_FileEntry_var_arr.TYPE_FILE
    	_listoutArray[idx]["TYPE_FILE"] = factory.createScalar(static_cast<uint8_t>(val[idx].TYPE_FILE));
    // _mavros_msgs_FileEntry_var_arr.TYPE_DIRECTORY
    	_listoutArray[idx]["TYPE_DIRECTORY"] = factory.createScalar(static_cast<uint8_t>(val[idx].TYPE_DIRECTORY));
    // _mavros_msgs_FileEntry_var_arr.name
    	_listoutArray[idx]["name"] = factory.createCharArray(val[idx].name);
    // _mavros_msgs_FileEntry_var_arr.type
    	_listoutArray[idx]["type"] = factory.createScalar(val[idx].type);
    // _mavros_msgs_FileEntry_var_arr.size
    	_listoutArray[idx]["size"] = factory.createScalar(val[idx].size);
    }
    return std::move(_listoutArray);
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::FileListResponse>& msg, const matlab::data::StructArray arr) {
    try {
        //list
        const matlab::data::StructArray list_arr = arr[0]["list"];
        for (auto _listarr : list_arr) {
        	mavros_msgs::FileEntry _val;
        	copy_from_arr_mavros_msgs_FileEntry_var_arr(_val,_listarr);
        	msg->list.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'list' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'list' is wrong type; expected a struct.");
    }
    try {
        //success
        const matlab::data::TypedArray<bool> success_arr = arr[0]["success"];
        msg->success = success_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'success' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'success' is wrong type; expected a logical.");
    }
    try {
        //r_errno
        const matlab::data::TypedArray<int32_t> r_errno_arr = arr[0]["r_errno"];
        msg->r_errno = r_errno_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'r_errno' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'r_errno' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::FileListResponse>& msg) {
    auto outArray = factory.createStructArray({1,1},{"list","success","r_errno"});
    // list
    outArray[0]["list"] = get_arr_mavros_msgs_FileEntry_var_arr(factory, msg->list);
    // success
    outArray[0]["success"] = factory.createScalar(static_cast<bool>(msg->success));
    // r_errno
    outArray[0]["r_errno"] = factory.createScalar(msg->r_errno);
    return std::move(outArray);
  }
} //namespace FileListResponse
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1