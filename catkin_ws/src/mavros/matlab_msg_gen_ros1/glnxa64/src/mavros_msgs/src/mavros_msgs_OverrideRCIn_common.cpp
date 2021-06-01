// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/OverrideRCIn
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
#include "mavros_msgs/OverrideRCIn.h"
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
namespace OverrideRCIn {
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<mavros_msgs::OverrideRCIn>& msg, const matlab::data::StructArray arr) {
    try {
        //channels
        const matlab::data::TypedArray<uint16_t> channels_arr = arr[0]["channels"];
        size_t nelem = 8;
        	std::copy(channels_arr.begin(), channels_arr.begin()+nelem, msg->channels.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'channels' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'channels' is wrong type; expected a uint16.");
    }
  }
  //----------------------------------------------------------------------------
  MAVROS_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const mavros_msgs::OverrideRCIn>& msg) {
    auto outArray = factory.createStructArray({1,1},{"CHAN_RELEASE","CHAN_NOCHANGE","channels"});
    // CHAN_RELEASE
    outArray[0]["CHAN_RELEASE"] = factory.createScalar(static_cast<uint16_t>(msg->CHAN_RELEASE));
    // CHAN_NOCHANGE
    outArray[0]["CHAN_NOCHANGE"] = factory.createScalar(static_cast<uint16_t>(msg->CHAN_NOCHANGE));
    // channels
    outArray[0]["channels"] = factory.createArray<mavros_msgs::OverrideRCIn::_channels_type::const_iterator, uint16_t>({1, msg->channels.size()}, msg->channels.begin(), msg->channels.end());
    return std::move(outArray);
  }
} //namespace OverrideRCIn
} //namespace matlabhelper
} //namespace mavros_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1