// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vision_pkg:msg/ObstacleWarning.idl
// generated code does not contain a copyright notice

#ifndef VISION_PKG__MSG__DETAIL__OBSTACLE_WARNING__TRAITS_HPP_
#define VISION_PKG__MSG__DETAIL__OBSTACLE_WARNING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "vision_pkg/msg/detail/obstacle_warning__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace vision_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObstacleWarning & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_dist
  {
    out << "left_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.left_dist, out);
    out << ", ";
  }

  // member: center_dist
  {
    out << "center_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.center_dist, out);
    out << ", ";
  }

  // member: right_dist
  {
    out << "right_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.right_dist, out);
    out << ", ";
  }

  // member: left_warn
  {
    out << "left_warn: ";
    rosidl_generator_traits::value_to_yaml(msg.left_warn, out);
    out << ", ";
  }

  // member: center_warn
  {
    out << "center_warn: ";
    rosidl_generator_traits::value_to_yaml(msg.center_warn, out);
    out << ", ";
  }

  // member: right_warn
  {
    out << "right_warn: ";
    rosidl_generator_traits::value_to_yaml(msg.right_warn, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObstacleWarning & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.left_dist, out);
    out << "\n";
  }

  // member: center_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.center_dist, out);
    out << "\n";
  }

  // member: right_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.right_dist, out);
    out << "\n";
  }

  // member: left_warn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_warn: ";
    rosidl_generator_traits::value_to_yaml(msg.left_warn, out);
    out << "\n";
  }

  // member: center_warn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_warn: ";
    rosidl_generator_traits::value_to_yaml(msg.center_warn, out);
    out << "\n";
  }

  // member: right_warn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_warn: ";
    rosidl_generator_traits::value_to_yaml(msg.right_warn, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObstacleWarning & msg, bool use_flow_style = false)
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
  const vision_pkg::msg::ObstacleWarning & msg,
  std::ostream & out, size_t indentation = 0)
{
  vision_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vision_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const vision_pkg::msg::ObstacleWarning & msg)
{
  return vision_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<vision_pkg::msg::ObstacleWarning>()
{
  return "vision_pkg::msg::ObstacleWarning";
}

template<>
inline const char * name<vision_pkg::msg::ObstacleWarning>()
{
  return "vision_pkg/msg/ObstacleWarning";
}

template<>
struct has_fixed_size<vision_pkg::msg::ObstacleWarning>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<vision_pkg::msg::ObstacleWarning>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<vision_pkg::msg::ObstacleWarning>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VISION_PKG__MSG__DETAIL__OBSTACLE_WARNING__TRAITS_HPP_
