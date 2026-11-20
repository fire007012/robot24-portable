// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_hardware:srv/Maintain.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_HARDWARE__SRV__DETAIL__MAINTAIN__TRAITS_HPP_
#define ROBOT_HARDWARE__SRV__DETAIL__MAINTAIN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_hardware/srv/detail/maintain__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_hardware
{

namespace srv
{

inline void to_flow_style_yaml(
  const Maintain_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint
  {
    out << "joint: ";
    rosidl_generator_traits::value_to_yaml(msg.joint, out);
    out << ", ";
  }

  // member: operation
  {
    out << "operation: ";
    rosidl_generator_traits::value_to_yaml(msg.operation, out);
    out << ", ";
  }

  // member: lower
  {
    out << "lower: ";
    rosidl_generator_traits::value_to_yaml(msg.lower, out);
    out << ", ";
  }

  // member: upper
  {
    out << "upper: ";
    rosidl_generator_traits::value_to_yaml(msg.upper, out);
    out << ", ";
  }

  // member: save
  {
    out << "save: ";
    rosidl_generator_traits::value_to_yaml(msg.save, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Maintain_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint: ";
    rosidl_generator_traits::value_to_yaml(msg.joint, out);
    out << "\n";
  }

  // member: operation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operation: ";
    rosidl_generator_traits::value_to_yaml(msg.operation, out);
    out << "\n";
  }

  // member: lower
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lower: ";
    rosidl_generator_traits::value_to_yaml(msg.lower, out);
    out << "\n";
  }

  // member: upper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "upper: ";
    rosidl_generator_traits::value_to_yaml(msg.upper, out);
    out << "\n";
  }

  // member: save
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "save: ";
    rosidl_generator_traits::value_to_yaml(msg.save, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Maintain_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robot_hardware

namespace rosidl_generator_traits
{

[[deprecated("use robot_hardware::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_hardware::srv::Maintain_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_hardware::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_hardware::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_hardware::srv::Maintain_Request & msg)
{
  return robot_hardware::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_hardware::srv::Maintain_Request>()
{
  return "robot_hardware::srv::Maintain_Request";
}

template<>
inline const char * name<robot_hardware::srv::Maintain_Request>()
{
  return "robot_hardware/srv/Maintain_Request";
}

template<>
struct has_fixed_size<robot_hardware::srv::Maintain_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_hardware::srv::Maintain_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_hardware::srv::Maintain_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robot_hardware
{

namespace srv
{

inline void to_flow_style_yaml(
  const Maintain_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Maintain_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Maintain_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robot_hardware

namespace rosidl_generator_traits
{

[[deprecated("use robot_hardware::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_hardware::srv::Maintain_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_hardware::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_hardware::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_hardware::srv::Maintain_Response & msg)
{
  return robot_hardware::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_hardware::srv::Maintain_Response>()
{
  return "robot_hardware::srv::Maintain_Response";
}

template<>
inline const char * name<robot_hardware::srv::Maintain_Response>()
{
  return "robot_hardware/srv/Maintain_Response";
}

template<>
struct has_fixed_size<robot_hardware::srv::Maintain_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_hardware::srv::Maintain_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_hardware::srv::Maintain_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_hardware::srv::Maintain>()
{
  return "robot_hardware::srv::Maintain";
}

template<>
inline const char * name<robot_hardware::srv::Maintain>()
{
  return "robot_hardware/srv/Maintain";
}

template<>
struct has_fixed_size<robot_hardware::srv::Maintain>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_hardware::srv::Maintain_Request>::value &&
    has_fixed_size<robot_hardware::srv::Maintain_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_hardware::srv::Maintain>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_hardware::srv::Maintain_Request>::value &&
    has_bounded_size<robot_hardware::srv::Maintain_Response>::value
  >
{
};

template<>
struct is_service<robot_hardware::srv::Maintain>
  : std::true_type
{
};

template<>
struct is_service_request<robot_hardware::srv::Maintain_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_hardware::srv::Maintain_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_HARDWARE__SRV__DETAIL__MAINTAIN__TRAITS_HPP_
