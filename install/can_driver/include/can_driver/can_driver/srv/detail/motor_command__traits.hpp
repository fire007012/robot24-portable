// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from can_driver:srv/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__SRV__DETAIL__MOTOR_COMMAND__TRAITS_HPP_
#define CAN_DRIVER__SRV__DETAIL__MOTOR_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "can_driver/srv/detail/motor_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace can_driver
{

namespace srv
{

inline void to_flow_style_yaml(
  const MotorCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_id
  {
    out << "motor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_id, out);
    out << ", ";
  }

  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorCommand_Request & msg,
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

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorCommand_Request & msg, bool use_flow_style = false)
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
  const can_driver::srv::MotorCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  can_driver::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use can_driver::srv::to_yaml() instead")]]
inline std::string to_yaml(const can_driver::srv::MotorCommand_Request & msg)
{
  return can_driver::srv::to_yaml(msg);
}

template<>
inline const char * data_type<can_driver::srv::MotorCommand_Request>()
{
  return "can_driver::srv::MotorCommand_Request";
}

template<>
inline const char * name<can_driver::srv::MotorCommand_Request>()
{
  return "can_driver/srv/MotorCommand_Request";
}

template<>
struct has_fixed_size<can_driver::srv::MotorCommand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<can_driver::srv::MotorCommand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<can_driver::srv::MotorCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace can_driver
{

namespace srv
{

inline void to_flow_style_yaml(
  const MotorCommand_Response & msg,
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
  const MotorCommand_Response & msg,
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

inline std::string to_yaml(const MotorCommand_Response & msg, bool use_flow_style = false)
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
  const can_driver::srv::MotorCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  can_driver::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use can_driver::srv::to_yaml() instead")]]
inline std::string to_yaml(const can_driver::srv::MotorCommand_Response & msg)
{
  return can_driver::srv::to_yaml(msg);
}

template<>
inline const char * data_type<can_driver::srv::MotorCommand_Response>()
{
  return "can_driver::srv::MotorCommand_Response";
}

template<>
inline const char * name<can_driver::srv::MotorCommand_Response>()
{
  return "can_driver/srv/MotorCommand_Response";
}

template<>
struct has_fixed_size<can_driver::srv::MotorCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<can_driver::srv::MotorCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<can_driver::srv::MotorCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<can_driver::srv::MotorCommand>()
{
  return "can_driver::srv::MotorCommand";
}

template<>
inline const char * name<can_driver::srv::MotorCommand>()
{
  return "can_driver/srv/MotorCommand";
}

template<>
struct has_fixed_size<can_driver::srv::MotorCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<can_driver::srv::MotorCommand_Request>::value &&
    has_fixed_size<can_driver::srv::MotorCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<can_driver::srv::MotorCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<can_driver::srv::MotorCommand_Request>::value &&
    has_bounded_size<can_driver::srv::MotorCommand_Response>::value
  >
{
};

template<>
struct is_service<can_driver::srv::MotorCommand>
  : std::true_type
{
};

template<>
struct is_service_request<can_driver::srv::MotorCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<can_driver::srv::MotorCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CAN_DRIVER__SRV__DETAIL__MOTOR_COMMAND__TRAITS_HPP_
