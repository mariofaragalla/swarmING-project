// Generated by gencpp from file mavros_msgs/LogRequestListResponse.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_LOGREQUESTLISTRESPONSE_H
#define MAVROS_MSGS_MESSAGE_LOGREQUESTLISTRESPONSE_H


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
struct LogRequestListResponse_
{
  typedef LogRequestListResponse_<ContainerAllocator> Type;

  LogRequestListResponse_()
    : success(false)  {
    }
  LogRequestListResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::mavros_msgs::LogRequestListResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::LogRequestListResponse_<ContainerAllocator> const> ConstPtr;

}; // struct LogRequestListResponse_

typedef ::mavros_msgs::LogRequestListResponse_<std::allocator<void> > LogRequestListResponse;

typedef boost::shared_ptr< ::mavros_msgs::LogRequestListResponse > LogRequestListResponsePtr;
typedef boost::shared_ptr< ::mavros_msgs::LogRequestListResponse const> LogRequestListResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::LogRequestListResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::LogRequestListResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::mavros_msgs::LogRequestListResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::LogRequestListResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::LogRequestListResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::LogRequestListResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::LogRequestListResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::LogRequestListResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::LogRequestListResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::mavros_msgs::LogRequestListResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::LogRequestListResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/LogRequestListResponse";
  }

  static const char* value(const ::mavros_msgs::LogRequestListResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::LogRequestListResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"\n"
;
  }

  static const char* value(const ::mavros_msgs::LogRequestListResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::LogRequestListResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LogRequestListResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::LogRequestListResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::LogRequestListResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_LOGREQUESTLISTRESPONSE_H
