// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from can_driver:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__MSG__DETAIL__MOTOR_STATE__TRAITS_HPP_
#define CAN_DRIVER__MSG__DETAIL__MOTOR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "can_driver/msg/detail/motor_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace can_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorState & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_id
  {
    out << "motor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_id, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: enabled
  {
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << ", ";
  }

  // member: fault
  {
    out << "fault: ";
    rosidl_generator_traits::value_to_yaml(msg.fault, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: current
  {
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << ", ";
  }

  // member: joint_position
  {
    out << "joint_position: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_position, out);
    out << ", ";
  }

  // member: joint_velocity
  {
    out << "joint_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_velocity, out);
    out << ", ";
  }

  // member: mode_valid
  {
    out << "mode_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_valid, out);
    out << ", ";
  }

  // member: status_valid
  {
    out << "status_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.status_valid, out);
    out << ", ";
  }

  // member: position_valid
  {
    out << "position_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.position_valid, out);
    out << ", ";
  }

  // member: velocity_valid
  {
    out << "velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_valid, out);
    out << ", ";
  }

  // member: current_valid
  {
    out << "current_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.current_valid, out);
    out << ", ";
  }

  // member: feedback_fresh
  {
    out << "feedback_fresh: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_fresh, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorState & msg,
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

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << "\n";
  }

  // member: fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault: ";
    rosidl_generator_traits::value_to_yaml(msg.fault, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << "\n";
  }

  // member: joint_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_position: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_position, out);
    out << "\n";
  }

  // member: joint_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_velocity, out);
    out << "\n";
  }

  // member: mode_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_valid, out);
    out << "\n";
  }

  // member: status_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.status_valid, out);
    out << "\n";
  }

  // member: position_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.position_valid, out);
    out << "\n";
  }

  // member: velocity_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_valid, out);
    out << "\n";
  }

  // member: current_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.current_valid, out);
    out << "\n";
  }

  // member: feedback_fresh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback_fresh: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_fresh, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorState & msg, bool use_flow_style = false)
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

}  // namespace can_driver

namespace rosidl_generator_traits
{

[[deprecated("use can_driver::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const can_driver::msg::MotorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  can_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use can_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const can_driver::msg::MotorState & msg)
{
  return can_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<can_driver::msg::MotorState>()
{
  return "can_driver::msg::MotorState";
}

template<>
inline const char * name<can_driver::msg::MotorState>()
{
  return "can_driver/msg/MotorState";
}

template<>
struct has_fixed_size<can_driver::msg::MotorState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<can_driver::msg::MotorState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<can_driver::msg::MotorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAN_DRIVER__MSG__DETAIL__MOTOR_STATE__TRAITS_HPP_
