// Generated by gencpp from file mavros_msgs/ESCStatusItem.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_ESCSTATUSITEM_H
#define MAVROS_MSGS_MESSAGE_ESCSTATUSITEM_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct ESCStatusItem_
{
  typedef ESCStatusItem_<ContainerAllocator> Type;

  ESCStatusItem_()
    : header()
    , rpm(0)
    , voltage(0.0)
    , current(0.0)  {
    }
  ESCStatusItem_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , rpm(0)
    , voltage(0.0)
    , current(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _rpm_type;
  _rpm_type rpm;

   typedef float _voltage_type;
  _voltage_type voltage;

   typedef float _current_type;
  _current_type current;





  typedef boost::shared_ptr< ::mavros_msgs::ESCStatusItem_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::ESCStatusItem_<ContainerAllocator> const> ConstPtr;

}; // struct ESCStatusItem_

typedef ::mavros_msgs::ESCStatusItem_<std::allocator<void> > ESCStatusItem;

typedef boost::shared_ptr< ::mavros_msgs::ESCStatusItem > ESCStatusItemPtr;
typedef boost::shared_ptr< ::mavros_msgs::ESCStatusItem const> ESCStatusItemConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::ESCStatusItem_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::ESCStatusItem_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geographic_msgs': ['/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/geographic_msgs/cmake/../msg'], 'actionlib': ['/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/actionlib/cmake/../msg'], 'std_msgs': ['/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'mavros_msgs': ['/home/mario/swarmING project/catkin_ws/src/mavros/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg'], 'geometry_msgs': ['/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/uuid_msgs/cmake/../msg'], 'actionlib_msgs': ['/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::ESCStatusItem_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::ESCStatusItem_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::ESCStatusItem_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::ESCStatusItem_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::ESCStatusItem_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::ESCStatusItem_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::ESCStatusItem_<ContainerAllocator> >
{
  static const char* value()
  {
    return "70651ef564857ec47d6e23206e2f7145";
  }

  static const char* value(const ::mavros_msgs::ESCStatusItem_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x70651ef564857ec4ULL;
  static const uint64_t static_value2 = 0x7d6e23206e2f7145ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::ESCStatusItem_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/ESCStatusItem";
  }

  static const char* value(const ::mavros_msgs::ESCStatusItem_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::ESCStatusItem_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ESCStatusItem.msg\n"
"#\n"
"#\n"
"# See mavlink message documentation here:\n"
"# https://mavlink.io/en/messages/common.html#ESC_STATUS\n"
"\n"
"std_msgs/Header header\n"
"\n"
"int32 rpm\n"
"float32 voltage\n"
"float32 current\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::mavros_msgs::ESCStatusItem_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::ESCStatusItem_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.rpm);
      stream.next(m.voltage);
      stream.next(m.current);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ESCStatusItem_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::ESCStatusItem_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::ESCStatusItem_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "rpm: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rpm);
    s << indent << "voltage: ";
    Printer<float>::stream(s, indent + "  ", v.voltage);
    s << indent << "current: ";
    Printer<float>::stream(s, indent + "  ", v.current);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_ESCSTATUSITEM_H
