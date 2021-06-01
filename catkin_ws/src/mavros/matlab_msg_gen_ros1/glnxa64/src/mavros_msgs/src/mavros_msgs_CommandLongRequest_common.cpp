// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/CommandLongRequest
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
#include "mavros_msgs/CommandLongRequest.h"
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
namespace CommandLongRequest {
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::CommandLongRequest>& msg, const matlab::data::StructArray arr) {
    try {
        //broadcast
        const matlab::data::TypedArray<bool> broadcast_arr = arr[0]["broadcast"];
        msg->broadcast = broadcast_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'broadcast' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'broadcast' is wrong type; expected a logical.");
    }
    try {
        //command
        const matlab::data::TypedArray<uint16_t> command_arr = arr[0]["command"];
        msg->command = command_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'command' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'command' is wrong type; expected a uint16.");
    }
    try {
        //confirmation
        const matlab::data::TypedArray<uint8_t> confirmation_arr = arr[0]["confirmation"];
        msg->confirmation = confirmation_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'confirmation' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'confirmation' is wrong type; expected a uint8.");
    }
    try {
        //param1
        const matlab::data::TypedArray<float> param1_arr = arr[0]["param1"];
        msg->param1 = param1_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'param1' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'param1' is wrong type; expected a single.");
    }
    try {
        //param2
        const matlab::data::TypedArray<float> param2_arr = arr[0]["param2"];
        msg->param2 = param2_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'param2' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'param2' is wrong type; expected a single.");
    }
    try {
        //param3
        const matlab::data::TypedArray<float> param3_arr = arr[0]["param3"];
        msg->param3 = param3_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'param3' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'param3' is wrong type; expected a single.");
    }
    try {
        //param4
        const matlab::data::TypedArray<float> param4_arr = arr[0]["param4"];
        msg->param4 = param4_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'param4' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'param4' is wrong type; expected a single.");
    }
    try {
        //param5
        const matlab::data::TypedArray<float> param5_arr = arr[0]["param5"];
        msg->param5 = param5_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'param5' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'param5' is wrong type; expected a single.");
    }
    try {
        //param6
        const matlab::data::TypedArray<float> param6_arr = arr[0]["param6"];
        msg->param6 = param6_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'param6' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'param6' is wrong type; expected a single.");
    }
    try {
        //param7
        const matlab::data::TypedArray<float> param7_arr = arr[0]["param7"];
        msg->param7 = param7_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'param7' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'param7' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::CommandLongRequest>& msg) {
    auto outArray = factory.createStructArray({1,1},{"broadcast","command","confirmation","param1","param2","param3","param4","param5","param6","param7"});
    // broadcast
    outArray[0]["broadcast"] = factory.createScalar(static_cast<bool>(msg->broadcast));
    // command
    outArray[0]["command"] = factory.createScalar(msg->command);
    // confirmation
    outArray[0]["confirmation"] = factory.createScalar(msg->confirmation);
    // param1
    outArray[0]["param1"] = factory.createScalar(msg->param1);
    // param2
    outArray[0]["param2"] = factory.createScalar(msg->param2);
    // param3
    outArray[0]["param3"] = factory.createScalar(msg->param3);
    // param4
    outArray[0]["param4"] = factory.createScalar(msg->param4);
    // param5
    outArray[0]["param5"] = factory.createScalar(msg->param5);
    // param6
    outArray[0]["param6"] = factory.createScalar(msg->param6);
    // param7
    outArray[0]["param7"] = factory.createScalar(msg->param7);
    return std::move(outArray);
  }
} //namespace CommandLongRequest
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1