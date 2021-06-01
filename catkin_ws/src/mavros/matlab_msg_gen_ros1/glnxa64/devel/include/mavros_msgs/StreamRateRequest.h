// Generated by gencpp from file mavros_msgs/StreamRateRequest.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_STREAMRATEREQUEST_H
#define MAVROS_MSGS_MESSAGE_STREAMRATEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mavros_msgs
{
template <class ContainerAllocator>
struct StreamRateRequest_
{
  typedef StreamRateRequest_<ContainerAllocator> Type;

  StreamRateRequest_()
    : stream_id(0)
    , message_rate(0)
    , on_off(false)  {
    }
  StreamRateRequest_(const ContainerAllocator& _alloc)
    : stream_id(0)
    , message_rate(0)
    , on_off(false)  {
  (void)_alloc;
    }



   typedef uint8_t _stream_id_type;
  _stream_id_type stream_id;

   typedef uint16_t _message_rate_type;
  _message_rate_type message_rate;

   typedef uint8_t _on_off_type;
  _on_off_type on_off;



  enum {
 
    STREAM_ALL = 0u,
 
    STREAM_RAW_SENSORS = 1u,
 
    STREAM_EXTENDED_STATUS = 2u,
 
    STREAM_RC_CHANNELS = 3u,
 
    STREAM_RAW_CONTROLLER = 4u,
 
    STREAM_POSITION = 6u,
 
    STREAM_EXTRA1 = 10u,
 
    STREAM_EXTRA2 = 11u,
 
    STREAM_EXTRA3 = 12u,
  };


  typedef boost::shared_ptr< ::mavros_msgs::StreamRateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::StreamRateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct StreamRateRequest_

typedef ::mavros_msgs::StreamRateRequest_<std::allocator<void> > StreamRateRequest;

typedef boost::shared_ptr< ::mavros_msgs::StreamRateRequest > StreamRateRequestPtr;
typedef boost::shared_ptr< ::mavros_msgs::StreamRateRequest const> StreamRateRequestConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::StreamRateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::StreamRateRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geographic_msgs': ['/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/geographic_msgs/cmake/../msg'], 'actionlib': ['/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/actionlib/cmake/../msg'], 'std_msgs': ['/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'mavros_msgs': ['/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg'], 'geometry_msgs': ['/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/uuid_msgs/cmake/../msg'], 'actionlib_msgs': ['/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::StreamRateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::StreamRateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::StreamRateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::StreamRateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::StreamRateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::StreamRateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::StreamRateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d12f7661724c8ba25f67ba597bb7d039";
  }

  static const char* value(const ::mavros_msgs::StreamRateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd12f7661724c8ba2ULL;
  static const uint64_t static_value2 = 0x5f67ba597bb7d039ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::StreamRateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/StreamRateRequest";
  }

  static const char* value(const ::mavros_msgs::StreamRateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::StreamRateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"\n"
"\n"
"uint8 STREAM_ALL = 0\n"
"uint8 STREAM_RAW_SENSORS = 1\n"
"uint8 STREAM_EXTENDED_STATUS = 2\n"
"uint8 STREAM_RC_CHANNELS = 3\n"
"uint8 STREAM_RAW_CONTROLLER = 4\n"
"uint8 STREAM_POSITION = 6\n"
"uint8 STREAM_EXTRA1 = 10\n"
"uint8 STREAM_EXTRA2 = 11\n"
"uint8 STREAM_EXTRA3 = 12\n"
"\n"
"uint8 stream_id\n"
"uint16 message_rate\n"
"bool on_off\n"
;
  }

  static const char* value(const ::mavros_msgs::StreamRateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::StreamRateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stream_id);
      stream.next(m.message_rate);
      stream.next(m.on_off);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StreamRateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::StreamRateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::StreamRateRequest_<ContainerAllocator>& v)
  {
    s << indent << "stream_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.stream_id);
    s << indent << "message_rate: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.message_rate);
    s << indent << "on_off: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.on_off);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_STREAMRATEREQUEST_H
