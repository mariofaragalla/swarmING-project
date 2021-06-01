// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/Waypoint
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
#include "mavros_msgs/Waypoint.h"
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
namespace Waypoint {
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::Waypoint>& msg, const matlab::data::StructArray arr) {
    try {
        //frame
        const matlab::data::TypedArray<uint8_t> frame_arr = arr[0]["frame"];
        msg->frame = frame_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'frame' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'frame' is wrong type; expected a uint8.");
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
        //is_current
        const matlab::data::TypedArray<bool> is_current_arr = arr[0]["is_current"];
        msg->is_current = is_current_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'is_current' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'is_current' is wrong type; expected a logical.");
    }
    try {
        //autocontinue
        const matlab::data::TypedArray<bool> autocontinue_arr = arr[0]["autocontinue"];
        msg->autocontinue = autocontinue_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'autocontinue' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'autocontinue' is wrong type; expected a logical.");
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
        //x_lat
        const matlab::data::TypedArray<double> x_lat_arr = arr[0]["x_lat"];
        msg->x_lat = x_lat_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x_lat' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x_lat' is wrong type; expected a double.");
    }
    try {
        //y_long
        const matlab::data::TypedArray<double> y_long_arr = arr[0]["y_long"];
        msg->y_long = y_long_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y_long' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y_long' is wrong type; expected a double.");
    }
    try {
        //z_alt
        const matlab::data::TypedArray<double> z_alt_arr = arr[0]["z_alt"];
        msg->z_alt = z_alt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z_alt' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z_alt' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::Waypoint>& msg) {
    auto outArray = factory.createStructArray({1,1},{"frame","FRAME_GLOBAL","FRAME_LOCAL_NED","FRAME_MISSION","FRAME_GLOBAL_REL_ALT","FRAME_LOCAL_ENU","command","is_current","autocontinue","param1","param2","param3","param4","x_lat","y_long","z_alt"});
    // frame
    outArray[0]["frame"] = factory.createScalar(msg->frame);
    // FRAME_GLOBAL
    outArray[0]["FRAME_GLOBAL"] = factory.createScalar(static_cast<uint8_t>(msg->FRAME_GLOBAL));
    // FRAME_LOCAL_NED
    outArray[0]["FRAME_LOCAL_NED"] = factory.createScalar(static_cast<uint8_t>(msg->FRAME_LOCAL_NED));
    // FRAME_MISSION
    outArray[0]["FRAME_MISSION"] = factory.createScalar(static_cast<uint8_t>(msg->FRAME_MISSION));
    // FRAME_GLOBAL_REL_ALT
    outArray[0]["FRAME_GLOBAL_REL_ALT"] = factory.createScalar(static_cast<uint8_t>(msg->FRAME_GLOBAL_REL_ALT));
    // FRAME_LOCAL_ENU
    outArray[0]["FRAME_LOCAL_ENU"] = factory.createScalar(static_cast<uint8_t>(msg->FRAME_LOCAL_ENU));
    // command
    outArray[0]["command"] = factory.createScalar(msg->command);
    // is_current
    outArray[0]["is_current"] = factory.createScalar(static_cast<bool>(msg->is_current));
    // autocontinue
    outArray[0]["autocontinue"] = factory.createScalar(static_cast<bool>(msg->autocontinue));
    // param1
    outArray[0]["param1"] = factory.createScalar(msg->param1);
    // param2
    outArray[0]["param2"] = factory.createScalar(msg->param2);
    // param3
    outArray[0]["param3"] = factory.createScalar(msg->param3);
    // param4
    outArray[0]["param4"] = factory.createScalar(msg->param4);
    // x_lat
    outArray[0]["x_lat"] = factory.createScalar(msg->x_lat);
    // y_long
    outArray[0]["y_long"] = factory.createScalar(msg->y_long);
    // z_alt
    outArray[0]["z_alt"] = factory.createScalar(msg->z_alt);
    return std::move(outArray);
  }
} //namespace Waypoint
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1