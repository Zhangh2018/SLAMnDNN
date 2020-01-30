// Generated by gencpp from file intesight_parkinggo/slamParkingPoint.msg
// DO NOT EDIT!


#ifndef INTESIGHT_PARKINGGO_MESSAGE_SLAMPARKINGPOINT_H
#define INTESIGHT_PARKINGGO_MESSAGE_SLAMPARKINGPOINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace intesight_parkinggo
{
template <class ContainerAllocator>
struct slamParkingPoint_
{
  typedef slamParkingPoint_<ContainerAllocator> Type;

  slamParkingPoint_()
    : leftTopPoint()
    , rightTopPoint()
    , leftBottomPoint()
    , rightBottomPoint()
    , translation()  {
    }
  slamParkingPoint_(const ContainerAllocator& _alloc)
    : leftTopPoint(_alloc)
    , rightTopPoint(_alloc)
    , leftBottomPoint(_alloc)
    , rightBottomPoint(_alloc)
    , translation(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _leftTopPoint_type;
  _leftTopPoint_type leftTopPoint;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _rightTopPoint_type;
  _rightTopPoint_type rightTopPoint;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _leftBottomPoint_type;
  _leftBottomPoint_type leftBottomPoint;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _rightBottomPoint_type;
  _rightBottomPoint_type rightBottomPoint;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _translation_type;
  _translation_type translation;





  typedef boost::shared_ptr< ::intesight_parkinggo::slamParkingPoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intesight_parkinggo::slamParkingPoint_<ContainerAllocator> const> ConstPtr;

}; // struct slamParkingPoint_

typedef ::intesight_parkinggo::slamParkingPoint_<std::allocator<void> > slamParkingPoint;

typedef boost::shared_ptr< ::intesight_parkinggo::slamParkingPoint > slamParkingPointPtr;
typedef boost::shared_ptr< ::intesight_parkinggo::slamParkingPoint const> slamParkingPointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intesight_parkinggo::slamParkingPoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intesight_parkinggo::slamParkingPoint_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace intesight_parkinggo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'intesight_parkinggo': ['/home/intesight/catkin_ws/src/intesight_parkinggo/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::intesight_parkinggo::slamParkingPoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intesight_parkinggo::slamParkingPoint_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intesight_parkinggo::slamParkingPoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intesight_parkinggo::slamParkingPoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intesight_parkinggo::slamParkingPoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intesight_parkinggo::slamParkingPoint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intesight_parkinggo::slamParkingPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f64175c04157a93202931bba67957a87";
  }

  static const char* value(const ::intesight_parkinggo::slamParkingPoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf64175c04157a932ULL;
  static const uint64_t static_value2 = 0x02931bba67957a87ULL;
};

template<class ContainerAllocator>
struct DataType< ::intesight_parkinggo::slamParkingPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intesight_parkinggo/slamParkingPoint";
  }

  static const char* value(const ::intesight_parkinggo::slamParkingPoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intesight_parkinggo::slamParkingPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[] leftTopPoint\n\
float32[] rightTopPoint\n\
float32[] leftBottomPoint\n\
float32[] rightBottomPoint\n\
float32[] translation\n\
";
  }

  static const char* value(const ::intesight_parkinggo::slamParkingPoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intesight_parkinggo::slamParkingPoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.leftTopPoint);
      stream.next(m.rightTopPoint);
      stream.next(m.leftBottomPoint);
      stream.next(m.rightBottomPoint);
      stream.next(m.translation);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct slamParkingPoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intesight_parkinggo::slamParkingPoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intesight_parkinggo::slamParkingPoint_<ContainerAllocator>& v)
  {
    s << indent << "leftTopPoint[]" << std::endl;
    for (size_t i = 0; i < v.leftTopPoint.size(); ++i)
    {
      s << indent << "  leftTopPoint[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.leftTopPoint[i]);
    }
    s << indent << "rightTopPoint[]" << std::endl;
    for (size_t i = 0; i < v.rightTopPoint.size(); ++i)
    {
      s << indent << "  rightTopPoint[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.rightTopPoint[i]);
    }
    s << indent << "leftBottomPoint[]" << std::endl;
    for (size_t i = 0; i < v.leftBottomPoint.size(); ++i)
    {
      s << indent << "  leftBottomPoint[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.leftBottomPoint[i]);
    }
    s << indent << "rightBottomPoint[]" << std::endl;
    for (size_t i = 0; i < v.rightBottomPoint.size(); ++i)
    {
      s << indent << "  rightBottomPoint[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.rightBottomPoint[i]);
    }
    s << indent << "translation[]" << std::endl;
    for (size_t i = 0; i < v.translation.size(); ++i)
    {
      s << indent << "  translation[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.translation[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTESIGHT_PARKINGGO_MESSAGE_SLAMPARKINGPOINT_H