// Generated by gencpp from file cam_capture/parkinggo_image.msg
// DO NOT EDIT!


#ifndef CAM_CAPTURE_MESSAGE_PARKINGGO_IMAGE_H
#define CAM_CAPTURE_MESSAGE_PARKINGGO_IMAGE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <sensor_msgs/Image.h>

namespace cam_capture
{
template <class ContainerAllocator>
struct parkinggo_image_
{
  typedef parkinggo_image_<ContainerAllocator> Type;

  parkinggo_image_()
    : header()
    , image()
    , coordX(0)
    , coordY(0)
    , coordZ(0)  {
    }
  parkinggo_image_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , image(_alloc)
    , coordX(0)
    , coordY(0)
    , coordZ(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::sensor_msgs::Image_<ContainerAllocator>  _image_type;
  _image_type image;

   typedef int16_t _coordX_type;
  _coordX_type coordX;

   typedef int16_t _coordY_type;
  _coordY_type coordY;

   typedef int16_t _coordZ_type;
  _coordZ_type coordZ;





  typedef boost::shared_ptr< ::cam_capture::parkinggo_image_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cam_capture::parkinggo_image_<ContainerAllocator> const> ConstPtr;

}; // struct parkinggo_image_

typedef ::cam_capture::parkinggo_image_<std::allocator<void> > parkinggo_image;

typedef boost::shared_ptr< ::cam_capture::parkinggo_image > parkinggo_imagePtr;
typedef boost::shared_ptr< ::cam_capture::parkinggo_image const> parkinggo_imageConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cam_capture::parkinggo_image_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cam_capture::parkinggo_image_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cam_capture

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'cam_capture': ['/home/intesight/catkin_ws_slam/src/cam_capture/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cam_capture::parkinggo_image_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cam_capture::parkinggo_image_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cam_capture::parkinggo_image_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cam_capture::parkinggo_image_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cam_capture::parkinggo_image_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cam_capture::parkinggo_image_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cam_capture::parkinggo_image_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2663054139590bd2ada540c01d3d8f87";
  }

  static const char* value(const ::cam_capture::parkinggo_image_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2663054139590bd2ULL;
  static const uint64_t static_value2 = 0xada540c01d3d8f87ULL;
};

template<class ContainerAllocator>
struct DataType< ::cam_capture::parkinggo_image_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cam_capture/parkinggo_image";
  }

  static const char* value(const ::cam_capture::parkinggo_image_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cam_capture::parkinggo_image_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
sensor_msgs/Image image\n\
int16 coordX\n\
int16 coordY\n\
int16 coordZ\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: sensor_msgs/Image\n\
# This message contains an uncompressed image\n\
# (0, 0) is at top-left corner of image\n\
#\n\
\n\
Header header        # Header timestamp should be acquisition time of image\n\
                     # Header frame_id should be optical frame of camera\n\
                     # origin of frame should be optical center of cameara\n\
                     # +x should point to the right in the image\n\
                     # +y should point down in the image\n\
                     # +z should point into to plane of the image\n\
                     # If the frame_id here and the frame_id of the CameraInfo\n\
                     # message associated with the image conflict\n\
                     # the behavior is undefined\n\
\n\
uint32 height         # image height, that is, number of rows\n\
uint32 width          # image width, that is, number of columns\n\
\n\
# The legal values for encoding are in file src/image_encodings.cpp\n\
# If you want to standardize a new string format, join\n\
# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n\
\n\
string encoding       # Encoding of pixels -- channel meaning, ordering, size\n\
                      # taken from the list of strings in include/sensor_msgs/image_encodings.h\n\
\n\
uint8 is_bigendian    # is this data bigendian?\n\
uint32 step           # Full row length in bytes\n\
uint8[] data          # actual matrix data, size is (step * rows)\n\
";
  }

  static const char* value(const ::cam_capture::parkinggo_image_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cam_capture::parkinggo_image_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.image);
      stream.next(m.coordX);
      stream.next(m.coordY);
      stream.next(m.coordZ);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct parkinggo_image_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cam_capture::parkinggo_image_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cam_capture::parkinggo_image_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "image: ";
    s << std::endl;
    Printer< ::sensor_msgs::Image_<ContainerAllocator> >::stream(s, indent + "  ", v.image);
    s << indent << "coordX: ";
    Printer<int16_t>::stream(s, indent + "  ", v.coordX);
    s << indent << "coordY: ";
    Printer<int16_t>::stream(s, indent + "  ", v.coordY);
    s << indent << "coordZ: ";
    Printer<int16_t>::stream(s, indent + "  ", v.coordZ);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAM_CAPTURE_MESSAGE_PARKINGGO_IMAGE_H