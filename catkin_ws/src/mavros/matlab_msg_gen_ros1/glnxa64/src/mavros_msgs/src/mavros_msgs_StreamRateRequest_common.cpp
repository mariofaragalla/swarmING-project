// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/StreamRateRequest
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
#include "mavros_msgs/StreamRateRequest.h"
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
namespace StreamRateRequest {
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::StreamRateRequest>& msg, const matlab::data::StructArray arr) {
    try {
        //stream_id
        const matlab::data::TypedArray<uint8_t> stream_id_arr = arr[0]["stream_id"];
        msg->stream_id = stream_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'stream_id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'stream_id' is wrong type; expected a uint8.");
    }
    try {
        //message_rate
        const matlab::data::TypedArray<uint16_t> message_rate_arr = arr[0]["message_rate"];
        msg->message_rate = message_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'message_rate' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'message_rate' is wrong type; expected a uint16.");
    }
    try {
        //on_off
        const matlab::data::TypedArray<bool> on_off_arr = arr[0]["on_off"];
        msg->on_off = on_off_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'on_off' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'on_off' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::StreamRateRequest>& msg) {
    auto outArray = factory.createStructArray({1,1},{"STREAM_ALL","STREAM_RAW_SENSORS","STREAM_EXTENDED_STATUS","STREAM_RC_CHANNELS","STREAM_RAW_CONTROLLER","STREAM_POSITION","STREAM_EXTRA1","STREAM_EXTRA2","STREAM_EXTRA3","stream_id","message_rate","on_off"});
    // STREAM_ALL
    outArray[0]["STREAM_ALL"] = factory.createScalar(static_cast<uint8_t>(msg->STREAM_ALL));
    // STREAM_RAW_SENSORS
    outArray[0]["STREAM_RAW_SENSORS"] = factory.createScalar(static_cast<uint8_t>(msg->STREAM_RAW_SENSORS));
    // STREAM_EXTENDED_STATUS
    outArray[0]["STREAM_EXTENDED_STATUS"] = factory.createScalar(static_cast<uint8_t>(msg->STREAM_EXTENDED_STATUS));
    // STREAM_RC_CHANNELS
    outArray[0]["STREAM_RC_CHANNELS"] = factory.createScalar(static_cast<uint8_t>(msg->STREAM_RC_CHANNELS));
    // STREAM_RAW_CONTROLLER
    outArray[0]["STREAM_RAW_CONTROLLER"] = factory.createScalar(static_cast<uint8_t>(msg->STREAM_RAW_CONTROLLER));
    // STREAM_POSITION
    outArray[0]["STREAM_POSITION"] = factory.createScalar(static_cast<uint8_t>(msg->STREAM_POSITION));
    // STREAM_EXTRA1
    outArray[0]["STREAM_EXTRA1"] = factory.createScalar(static_cast<uint8_t>(msg->STREAM_EXTRA1));
    // STREAM_EXTRA2
    outArray[0]["STREAM_EXTRA2"] = factory.createScalar(static_cast<uint8_t>(msg->STREAM_EXTRA2));
    // STREAM_EXTRA3
    outArray[0]["STREAM_EXTRA3"] = factory.createScalar(static_cast<uint8_t>(msg->STREAM_EXTRA3));
    // stream_id
    outArray[0]["stream_id"] = factory.createScalar(msg->stream_id);
    // message_rate
    outArray[0]["message_rate"] = factory.createScalar(msg->message_rate);
    // on_off
    outArray[0]["on_off"] = factory.createScalar(static_cast<bool>(msg->on_off));
    return std::move(outArray);
  }
} //namespace StreamRateRequest
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1