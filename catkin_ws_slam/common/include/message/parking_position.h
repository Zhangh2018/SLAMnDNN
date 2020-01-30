// Generated by gencpp from file ttmsg/parking_position.msg
// DO NOT EDIT!


#ifndef TTMSG_MESSAGE_PARKING_POSITION_H
#define TTMSG_MESSAGE_PARKING_POSITION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ttmsg
{
template <class ContainerAllocator>
struct parking_position_
{
  typedef parking_position_<ContainerAllocator> Type;

  parking_position_()
    : p0_x(0)
    , p0_y(0)
    , p1_x(0)
    , p1_y(0)
    , p2_x(0)
    , p2_y(0)
    , p3_x(0)
    , p3_y(0)  {
    }
  parking_position_(const ContainerAllocator& _alloc)
    : p0_x(0)
    , p0_y(0)
    , p1_x(0)
    , p1_y(0)
    , p2_x(0)
    , p2_y(0)
    , p3_x(0)
    , p3_y(0)  {
  (void)_alloc;
    }



   typedef int64_t _p0_x_type;
  _p0_x_type p0_x;

   typedef int64_t _p0_y_type;
  _p0_y_type p0_y;

   typedef int64_t _p1_x_type;
  _p1_x_type p1_x;

   typedef int64_t _p1_y_type;
  _p1_y_type p1_y;

   typedef int64_t _p2_x_type;
  _p2_x_type p2_x;

   typedef int64_t _p2_y_type;
  _p2_y_type p2_y;

   typedef int64_t _p3_x_type;
  _p3_x_type p3_x;

   typedef int64_t _p3_y_type;
  _p3_y_type p3_y;




  typedef boost::shared_ptr< ::ttmsg::parking_position_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ttmsg::parking_position_<ContainerAllocator> const> ConstPtr;

}; // struct parking_position_

typedef ::ttmsg::parking_position_<std::allocator<void> > parking_position;

typedef boost::shared_ptr< ::ttmsg::parking_position > parking_positionPtr;
typedef boost::shared_ptr< ::ttmsg::parking_position const> parking_positionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ttmsg::parking_position_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ttmsg::parking_position_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ttmsg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'ttmsg': ['/home/wangjiangjing/catkin_ws/src/ttmsg/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ttmsg::parking_position_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ttmsg::parking_position_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ttmsg::parking_position_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ttmsg::parking_position_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ttmsg::parking_position_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ttmsg::parking_position_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ttmsg::parking_position_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4b15067b4f06034b17ed58dad99fbd57";
  }

  static const char* value(const ::ttmsg::parking_position_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4b15067b4f06034bULL;
  static const uint64_t static_value2 = 0x17ed58dad99fbd57ULL;
};

template<class ContainerAllocator>
struct DataType< ::ttmsg::parking_position_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ttmsg/parking_position";
  }

  static const char* value(const ::ttmsg::parking_position_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ttmsg::parking_position_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 p0_x\n\
int64 p0_y\n\
int64 p1_x\n\
int64 p1_y\n\
int64 p2_x\n\
int64 p2_y\n\
int64 p3_x\n\
int64 p3_y\n\
";
  }

  static const char* value(const ::ttmsg::parking_position_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ttmsg::parking_position_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.p0_x);
      stream.next(m.p0_y);
      stream.next(m.p1_x);
      stream.next(m.p1_y);
      stream.next(m.p2_x);
      stream.next(m.p2_y);
      stream.next(m.p3_x);
      stream.next(m.p3_y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct parking_position_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ttmsg::parking_position_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ttmsg::parking_position_<ContainerAllocator>& v)
  {
    s << indent << "p0_x: ";
    Printer<int64_t>::stream(s, indent + "  ", v.p0_x);
    s << indent << "p0_y: ";
    Printer<int64_t>::stream(s, indent + "  ", v.p0_y);
    s << indent << "p1_x: ";
    Printer<int64_t>::stream(s, indent + "  ", v.p1_x);
    s << indent << "p1_y: ";
    Printer<int64_t>::stream(s, indent + "  ", v.p1_y);
    s << indent << "p2_x: ";
    Printer<int64_t>::stream(s, indent + "  ", v.p2_x);
    s << indent << "p2_y: ";
    Printer<int64_t>::stream(s, indent + "  ", v.p2_y);
    s << indent << "p3_x: ";
    Printer<int64_t>::stream(s, indent + "  ", v.p3_x);
    s << indent << "p3_y: ";
    Printer<int64_t>::stream(s, indent + "  ", v.p3_y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TTMSG_MESSAGE_PARKING_POSITION_H
