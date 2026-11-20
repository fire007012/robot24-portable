// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from can_driver:srv/SetZeroLimit.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__SRV__DETAIL__SET_ZERO_LIMIT__TRAITS_HPP_
#define CAN_DRIVER__SRV__DETAIL__SET_ZERO_LIMIT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "can_driver/srv/detail/set_zero_limit__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace can_driver
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetZeroLimit_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_id
  {
    out << "motor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_id, out);
    out << ", ";
  }

  // member: zero_offset_rad
  {
    out << "zero_offset_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.zero_offset_rad, out);
    out << ", ";
  }

  // member: use_current_position_as_zero
  {
    out << "use_current_position_as_zero: ";
    rosidl_generator_traits::value_to_yaml(msg.use_current_position_as_zero, out);
    out << ", ";
  }

  // member: min_position_rad
  {
    out << "min_position_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.min_position_rad, out);
    out << ", ";
  }

  // member: max_position_rad
  {
    out << "max_position_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.max_position_rad, out);
    out << ", ";
  }

  // member: use_urdf_limits
  {
    out << "use_urdf_limits: ";
    rosidl_generator_traits::value_to_yaml(msg.use_urdf_limits, out);
    out << ", ";
  }

  // member: apply_to_motor
  {
    out << "apply_to_motor: ";
    rosidl_generator_traits::value_to_yaml(msg.apply_to_motor, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetZeroLimit_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_id, out);
    out << "\n";
  }

  // member: zero_offset_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zero_offset_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.zero_offset_rad, out);
    out << "\n";
  }

  // member: use_current_position_as_zero
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_current_position_as_zero: ";
    rosidl_generator_traits::value_to_yaml(msg.use_current_position_as_zero, out);
    out << "\n";
  }

  // member: min_position_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_position_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.min_position_rad, out);
    out << "\n";
  }

  // member: max_position_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_position_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.max_position_rad, out);
    out << "\n";
  }

  // member: use_urdf_limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_urdf_limits: ";
    rosidl_generator_traits::value_to_yaml(msg.use_urdf_limits, out);
    out << "\n";
  }

  // member: apply_to_motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "apply_to_motor: ";
    rosidl_generator_traits::value_to_yaml(msg.apply_to_motor, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetZeroLimit_Request & msg, bool use_flow_style = false)
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

}  // namespace can_driver

namespace rosidl_generator_traits
{

[[deprecated("use can_driver::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const can_driver::srv::SetZeroLimit_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  can_driver::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use can_driver::srv::to_yaml() instead")]]
inline std::string to_yaml(const can_driver::srv::SetZeroLimit_Request & msg)
{
  return can_driver::srv::to_yaml(msg);
}

template<>
inline const char * data_type<can_driver::srv::SetZeroLimit_Request>()
{
  return "can_driver::srv::SetZeroLimit_Request";
}

template<>
inline const char * name<can_driver::srv::SetZeroLimit_Request>()
{
  return "can_driver/srv/SetZeroLimit_Request";
}

template<>
struct has_fixed_size<can_driver::srv::SetZeroLimit_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<can_driver::srv::SetZeroLimit_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<can_driver::srv::SetZeroLimit_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace can_driver
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetZeroLimit_Response & msg,
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
    out << ", ";
  }

  // member: applied_zero_offset_rad
  {
    out << "applied_zero_offset_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.applied_zero_offset_rad, out);
    out << ", ";
  }

  // member: applied_min_rad
  {
    out << "applied_min_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.applied_min_rad, out);
    out << ", ";
  }

  // member: applied_max_rad
  {
    out << "applied_max_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.applied_max_rad, out);
    out << ", ";
  }

  // member: current_position_rad
  {
    out << "current_position_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.current_position_rad, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetZeroLimit_Response & msg,
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

  // member: applied_zero_offset_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "applied_zero_offset_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.applied_zero_offset_rad, out);
    out << "\n";
  }

  // member: applied_min_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "applied_min_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.applied_min_rad, out);
    out << "\n";
  }

  // member: applied_max_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "applied_max_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.applied_max_rad, out);
    out << "\n";
  }

  // member: current_position_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_position_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.current_position_rad, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetZeroLimit_Response & msg, bool use_flow_style = false)
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

}  // namespace can_driver

namespace rosidl_generator_traits
{

[[deprecated("use can_driver::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const can_driver::srv::SetZeroLimit_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  can_driver::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use can_driver::srv::to_yaml() instead")]]
inline std::string to_yaml(const can_driver::srv::SetZeroLimit_Response & msg)
{
  return can_driver::srv::to_yaml(msg);
}

template<>
inline const char * data_type<can_driver::srv::SetZeroLimit_Response>()
{
  return "can_driver::srv::SetZeroLimit_Response";
}

template<>
inline const char * name<can_driver::srv::SetZeroLimit_Response>()
{
  return "can_driver/srv/SetZeroLimit_Response";
}

template<>
struct has_fixed_size<can_driver::srv::SetZeroLimit_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<can_driver::srv::SetZeroLimit_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<can_driver::srv::SetZeroLimit_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<can_driver::srv::SetZeroLimit>()
{
  return "can_driver::srv::SetZeroLimit";
}

template<>
inline const char * name<can_driver::srv::SetZeroLimit>()
{
  return "can_driver/srv/SetZeroLimit";
}

template<>
struct has_fixed_size<can_driver::srv::SetZeroLimit>
  : std::integral_constant<
    bool,
    has_fixed_size<can_driver::srv::SetZeroLimit_Request>::value &&
    has_fixed_size<can_driver::srv::SetZeroLimit_Response>::value
  >
{
};

template<>
struct has_bounded_size<can_driver::srv::SetZeroLimit>
  : std::integral_constant<
    bool,
    has_bounded_size<can_driver::srv::SetZeroLimit_Request>::value &&
    has_bounded_size<can_driver::srv::SetZeroLimit_Response>::value
  >
{
};

template<>
struct is_service<can_driver::srv::SetZeroLimit>
  : std::true_type
{
};

template<>
struct is_service_request<can_driver::srv::SetZeroLimit_Request>
  : std::true_type
{
};

template<>
struct is_service_response<can_driver::srv::SetZeroLimit_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CAN_DRIVER__SRV__DETAIL__SET_ZERO_LIMIT__TRAITS_HPP_
