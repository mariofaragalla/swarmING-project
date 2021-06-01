// Copyright 2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/SetMavFrameRequest
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
#include "mavros_msgs/SetMavFrame.h"
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
namespace SetMavFrame_Request {
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT void copy_from_arr(mavros_msgs::SetMavFrame::Request& msg, const matlab::data::StructArray arr) {
    try {
        //mav_frame
        const matlab::data::TypedArray<uint8_t> mav_frame_arr = arr[0]["mav_frame"];
        msg.mav_frame = mav_frame_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mav_frame' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'mav_frame' is wrong type; expected a uint8.");
    }
  }
  MAVROS_MSGS_EXPORT int64_t get_requestId_from_arr(const matlab::data::StructArray arr) {
    // Get the request ID
    int64_t requestId = 0;
    try {
        // data
        const matlab::data::TypedArray<int64_t> data_arr = arr[0]["requestId"];
        requestId = data_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'requestId' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'requestId' is wrong type; expected a int64.");
    }
    return requestId;
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::SetMavFrame::Request& msg) {
    auto outArray = factory.createStructArray({1,1},{"FRAME_GLOBAL","FRAME_LOCAL_NED","FRAME_MISSION","FRAME_GLOBAL_RELATIVE_ALT","FRAME_LOCAL_ENU","FRAME_GLOBAL_INT","FRAME_GLOBAL_RELATIVE_ALT_INT","FRAME_LOCAL_OFFSET_NED","FRAME_BODY_NED","FRAME_BODY_OFFSET_NED","FRAME_GLOBAL_TERRAIN_ALT","FRAME_GLOBAL_TERRAIN_ALT_INT","FRAME_BODY_FRD","FRAME_BODY_FLU","FRAME_MOCAP_NED","FRAME_MOCAP_ENU","FRAME_VISION_NED","FRAME_VISION_ENU","FRAME_ESTIM_NED","FRAME_ESTIM_ENU","mav_frame"});
    // FRAME_GLOBAL
    outArray[0]["FRAME_GLOBAL"] = factory.createScalar(static_cast<uint8_t>(msg.FRAME_GLOBAL));
    // FRAME_LOCAL_NED
    outArray[0]["FRAME_LOCAL_NED"] = factory.createScalar(static_cast<uint8_t>(msg.FRAME_LOCAL_NED));
    // FRAME_MISSION
    outArray[0]["FRAME_MISSION"] = factory.createScalar(static_cast<uint8_t>(msg.FRAME_MISSION));
    // FRAME_GLOBAL_RELATIVE_ALT
    outArray[0]["FRAME_GLOBAL_RELATIVE_ALT"] = factory.createScalar(static_cast<uint8_t>(msg.FRAME_GLOBAL_RELATIVE_ALT));
    // FRAME_LOCAL_ENU
    outArray[0]["FRAME_LOCAL_ENU"] = factory.createScalar(static_cast<uint8_t>(msg.FRAME_LOCAL_ENU));
    // FRAME_GLOBAL_INT
    outArray[0]["FRAME_GLOBAL_INT"] = factory.createScalar(static_cast<uint8_t>(msg.FRAME_GLOBAL_INT));
    // FRAME_GLOBAL_RELATIVE_ALT_INT
    outArray[0]["FRAME_GLOBAL_RELATIVE_ALT_INT"] = factory.createScalar(static_cast<uint8_t>(msg.FRAME_GLOBAL_RELATIVE_ALT_INT));
    // FRAME_LOCAL_OFFSET_NED
    outArray[0]["FRAME_LOCAL_OFFSET_NED"] = factory.createScalar(static_cast<uint8_t>(msg.FRAME_LOCAL_OFFSET_NED));
    // FRAME_BODY_NED
    outArray[0]["FRAME_BODY_NED"] = factory.createScalar(static_cast<uint8_t>(msg.FRAME_BODY_NED));
    // FRAME_BODY_OFFSET_NED
    outArray[0]["FRAME_BODY_OFFSET_NED"] = factory.createScalar(static_cast<uint8_t>(msg.FRAME_BODY_OFFSET_NED));
    // FRAME_GLOBAL_TERRAIN_ALT
    outArray[0]["FRAME_GLOBAL_TERRAIN_ALT"] = factory.createScalar(static_cast<uint8_t>(msg.FRAME_GLOBAL_TERRAIN_ALT));
    // FRAME_GLOBAL_TERRAIN_ALT_INT
    outArray[0]["FRAME_GLOBAL_TERRAIN_ALT_INT"] = factory.createScalar(static_cast<uint8_t>(msg.FRAME_GLOBAL_TERRAIN_ALT_INT));
    // FRAME_BODY_FRD
    outArray[0]["FRAME_BODY_FRD"] = factory.createScalar(static_cast<uint8_t>(msg.FRAME_BODY_FRD));
    // FRAME_BODY_FLU
    outArray[0]["FRAME_BODY_FLU"] = factory.createScalar(static_cast<uint8_t>(msg.FRAME_BODY_FLU));
    // FRAME_MOCAP_NED
    outArray[0]["FRAME_MOCAP_NED"] = factory.createScalar(static_cast<uint8_t>(msg.FRAME_MOCAP_NED));
    // FRAME_MOCAP_ENU
    outArray[0]["FRAME_MOCAP_ENU"] = factory.createScalar(static_cast<uint8_t>(msg.FRAME_MOCAP_ENU));
    // FRAME_VISION_NED
    outArray[0]["FRAME_VISION_NED"] = factory.createScalar(static_cast<uint8_t>(msg.FRAME_VISION_NED));
    // FRAME_VISION_ENU
    outArray[0]["FRAME_VISION_ENU"] = factory.createScalar(static_cast<uint8_t>(msg.FRAME_VISION_ENU));
    // FRAME_ESTIM_NED
    outArray[0]["FRAME_ESTIM_NED"] = factory.createScalar(static_cast<uint8_t>(msg.FRAME_ESTIM_NED));
    // FRAME_ESTIM_ENU
    outArray[0]["FRAME_ESTIM_ENU"] = factory.createScalar(static_cast<uint8_t>(msg.FRAME_ESTIM_ENU));
    // mav_frame
    outArray[0]["mav_frame"] = factory.createScalar(msg.mav_frame);
    return std::move(outArray);
  }
} //namespace SetMavFrame_Request
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1