// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vision_pkg:msg/DetectedObject3D.idl
// generated code does not contain a copyright notice

#ifndef VISION_PKG__MSG__DETAIL__DETECTED_OBJECT3_D__TRAITS_HPP_
#define VISION_PKG__MSG__DETAIL__DETECTED_OBJECT3_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "vision_pkg/msg/detail/detected_object3_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace vision_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const DetectedObject3D & msg,
  std::ostream & out)
{
  out << "{";
  // member: class_name
  {
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectedObject3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: class_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectedObject3D & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace vision_pkg

namespace rosidl_generator_traits
{

[[deprecated("use vision_pkg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vision_pkg::msg::DetectedObject3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  vision_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vision_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const vision_pkg::msg::DetectedObject3D & msg)
{
  return vision_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<vision_pkg::msg::DetectedObject3D>()
{
  return "vision_pkg::msg::DetectedObject3D";
}

template<>
inline const char * name<vision_pkg::msg::DetectedObject3D>()
{
  return "vision_pkg/msg/DetectedObject3D";
}

template<>
struct has_fixed_size<vision_pkg::msg::DetectedObject3D>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vision_pkg::msg::DetectedObject3D>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vision_pkg::msg::DetectedObject3D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VISION_PKG__MSG__DETAIL__DETECTED_OBJECT3_D__TRAITS_HPP_
