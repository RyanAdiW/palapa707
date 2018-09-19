// Generated by gencpp from file krti18/Shape.msg
// DO NOT EDIT!


#ifndef KRTI18_MESSAGE_SHAPE_H
#define KRTI18_MESSAGE_SHAPE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace krti18
{
template <class ContainerAllocator>
struct Shape_
{
  typedef Shape_<ContainerAllocator> Type;

  Shape_()
    : x_obj(0)
    , y_obj(0)
    , r_obj(0)  {
    }
  Shape_(const ContainerAllocator& _alloc)
    : x_obj(0)
    , y_obj(0)
    , r_obj(0)  {
  (void)_alloc;
    }



   typedef uint32_t _x_obj_type;
  _x_obj_type x_obj;

   typedef uint32_t _y_obj_type;
  _y_obj_type y_obj;

   typedef uint32_t _r_obj_type;
  _r_obj_type r_obj;





  typedef boost::shared_ptr< ::krti18::Shape_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::krti18::Shape_<ContainerAllocator> const> ConstPtr;

}; // struct Shape_

typedef ::krti18::Shape_<std::allocator<void> > Shape;

typedef boost::shared_ptr< ::krti18::Shape > ShapePtr;
typedef boost::shared_ptr< ::krti18::Shape const> ShapeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::krti18::Shape_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::krti18::Shape_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace krti18

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'krti18': ['/home/ubuntu/Documents/auav/palapa707/src/krti18/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::krti18::Shape_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::krti18::Shape_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::krti18::Shape_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::krti18::Shape_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::krti18::Shape_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::krti18::Shape_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::krti18::Shape_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2fbca9de1f9ce5c990e50b663e28ecd0";
  }

  static const char* value(const ::krti18::Shape_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2fbca9de1f9ce5c9ULL;
  static const uint64_t static_value2 = 0x90e50b663e28ecd0ULL;
};

template<class ContainerAllocator>
struct DataType< ::krti18::Shape_<ContainerAllocator> >
{
  static const char* value()
  {
    return "krti18/Shape";
  }

  static const char* value(const ::krti18::Shape_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::krti18::Shape_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 x_obj	    # x coordinates of detected object\n\
uint32 y_obj	    # y coordinates of detected object\n\
uint32 r_obj	    # 		 radius of detected object\n\
";
  }

  static const char* value(const ::krti18::Shape_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::krti18::Shape_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x_obj);
      stream.next(m.y_obj);
      stream.next(m.r_obj);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Shape_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::krti18::Shape_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::krti18::Shape_<ContainerAllocator>& v)
  {
    s << indent << "x_obj: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.x_obj);
    s << indent << "y_obj: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.y_obj);
    s << indent << "r_obj: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.r_obj);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KRTI18_MESSAGE_SHAPE_H