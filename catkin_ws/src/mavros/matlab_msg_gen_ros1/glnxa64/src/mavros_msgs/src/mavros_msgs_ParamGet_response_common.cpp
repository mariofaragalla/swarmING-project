// Copyright 2020 The MathWorks, Inc.
// Common copy functions of server for mavros_msgs/ParamGetResponse
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
#include "mavros_msgs/ParamGet.h"
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
namespace ParamGet_Response {
  void copy_from_arr_mavros_msgs_ParamValue(mavros_msgs::ParamValue& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_mavros_msgs_ParamValue(MDFactory_T& factory, const mavros_msgs::ParamGet::Response::_value_type& val);
  //----------------------------------------------------------------------------
  void copy_from_arr_mavros_msgs_ParamValue(mavros_msgs::ParamValue& val, const matlab::data::StructArray& arr) {
    // _mavros_msgs_ParamValue.integer
    try {
        const matlab::data::TypedArray<int64_t> _valueinteger_arr = arr[0]["integer"];
        val.integer = _valueinteger_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'integer' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'integer' is wrong type; expected a int64.");
    }
    // _mavros_msgs_ParamValue.real
    try {
        const matlab::data::TypedArray<double> _valuereal_arr = arr[0]["real"];
        val.real = _valuereal_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'real' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'real' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_mavros_msgs_ParamValue(MDFactory_T& factory, const mavros_msgs::ParamGet::Response::_value_type& val) {
    auto _valueoutArray = factory.createStructArray({1,1},{"integer","real"});
    // _mavros_msgs_ParamValue.integer
    _valueoutArray[0]["integer"] = factory.createScalar(val.integer);
    // _mavros_msgs_ParamValue.real
    _valueoutArray[0]["real"] = factory.createScalar(val.real);
    return std::move(_valueoutArray);
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT void copy_from_arr(mavros_msgs::ParamGet::Response& msg, const matlab::data::StructArray arr) {
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
        //value
        const matlab::data::StructArray value_arr = arr[0]["value"];
        copy_from_arr_mavros_msgs_ParamValue(msg.value,value_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'value' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'value' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::ParamGet::Response& msg) {
    auto outArray = factory.createStructArray({1,1},{"success","value"});
    // success
    outArray[0]["success"] = factory.createScalar(static_cast<bool>(msg.success));
    // value
    outArray[0]["value"] = get_arr_mavros_msgs_ParamValue(factory, msg.value);
    return std::move(outArray);
  }
} //namespace ParamGet_Response
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1