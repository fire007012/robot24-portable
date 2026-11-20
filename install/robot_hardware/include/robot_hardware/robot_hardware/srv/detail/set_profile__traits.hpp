// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_hardware:srv/SetProfile.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_HARDWARE__SRV__DETAIL__SET_PROFILE__TRAITS_HPP_
#define ROBOT_HARDWARE__SRV__DETAIL__SET_PROFILE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_hardware/srv/detail/set_profile__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_hardware
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetProfile_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: profile
  {
    out << "profile: ";
    rosidl_generator_traits::value_to_yaml(msg.profile, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetProfile_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: profile
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "profile: ";
    rosidl_generator_traits::value_to_yaml(msg.profile, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetProfile_Request & msg, bool use_flow_style = false)
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
  const robot_hardware::srv::SetProfile_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_hardware::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_hardware::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_hardware::srv::SetProfile_Request & msg)
{
  return robot_hardware::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_hardware::srv::SetProfile_Request>()
{
  return "robot_hardware::srv::SetProfile_Request";
}

template<>
inline const char * name<robot_hardware::srv::SetProfile_Request>()
{
  return "robot_hardware/srv/SetProfile_Request";
}

template<>
struct has_fixed_size<robot_hardware::srv::SetProfile_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_hardware::srv::SetProfile_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_hardware::srv::SetProfile_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robot_hardware
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetProfile_Response & msg,
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
  const SetProfile_Response & msg,
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

inline std::string to_yaml(const SetProfile_Response & msg, bool use_flow_style = false)
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
  const robot_hardware::srv::SetProfile_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_hardware::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_hardware::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_hardware::srv::SetProfile_Response & msg)
{
  return robot_hardware::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_hardware::srv::SetProfile_Response>()
{
  return "robot_hardware::srv::SetProfile_Response";
}

template<>
inline const char * name<robot_hardware::srv::SetProfile_Response>()
{
  return "robot_hardware/srv/SetProfile_Response";
}

template<>
struct has_fixed_size<robot_hardware::srv::SetProfile_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_hardware::srv::SetProfile_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_hardware::srv::SetProfile_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_hardware::srv::SetProfile>()
{
  return "robot_hardware::srv::SetProfile";
}

template<>
inline const char * name<robot_hardware::srv::SetProfile>()
{
  return "robot_hardware/srv/SetProfile";
}

template<>
struct has_fixed_size<robot_hardware::srv::SetProfile>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_hardware::srv::SetProfile_Request>::value &&
    has_fixed_size<robot_hardware::srv::SetProfile_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_hardware::srv::SetProfile>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_hardware::srv::SetProfile_Request>::value &&
    has_bounded_size<robot_hardware::srv::SetProfile_Response>::value
  >
{
};

template<>
struct is_service<robot_hardware::srv::SetProfile>
  : std::true_type
{
};

template<>
struct is_service_request<robot_hardware::srv::SetProfile_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_hardware::srv::SetProfile_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_HARDWARE__SRV__DETAIL__SET_PROFILE__TRAITS_HPP_
