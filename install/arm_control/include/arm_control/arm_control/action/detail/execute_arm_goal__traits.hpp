// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arm_control:action/ExecuteArmGoal.idl
// generated code does not contain a copyright notice

#ifndef ARM_CONTROL__ACTION__DETAIL__EXECUTE_ARM_GOAL__TRAITS_HPP_
#define ARM_CONTROL__ACTION__DETAIL__EXECUTE_ARM_GOAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arm_control/action/detail/execute_arm_goal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose_target'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace arm_control
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteArmGoal_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_type
  {
    out << "target_type: ";
    rosidl_generator_traits::value_to_yaml(msg.target_type, out);
    out << ", ";
  }

  // member: joint_names
  {
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []";
    } else {
      out << "joint_names: [";
      size_t pending_items = msg.joint_names.size();
      for (auto item : msg.joint_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_positions
  {
    if (msg.joint_positions.size() == 0) {
      out << "joint_positions: []";
    } else {
      out << "joint_positions: [";
      size_t pending_items = msg.joint_positions.size();
      for (auto item : msg.joint_positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: named_target
  {
    out << "named_target: ";
    rosidl_generator_traits::value_to_yaml(msg.named_target, out);
    out << ", ";
  }

  // member: pose_target
  {
    out << "pose_target: ";
    to_flow_style_yaml(msg.pose_target, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteArmGoal_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_type: ";
    rosidl_generator_traits::value_to_yaml(msg.target_type, out);
    out << "\n";
  }

  // member: joint_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []\n";
    } else {
      out << "joint_names:\n";
      for (auto item : msg.joint_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_positions.size() == 0) {
      out << "joint_positions: []\n";
    } else {
      out << "joint_positions:\n";
      for (auto item : msg.joint_positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: named_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "named_target: ";
    rosidl_generator_traits::value_to_yaml(msg.named_target, out);
    out << "\n";
  }

  // member: pose_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_target:\n";
    to_block_style_yaml(msg.pose_target, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteArmGoal_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arm_control

namespace rosidl_generator_traits
{

[[deprecated("use arm_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arm_control::action::ExecuteArmGoal_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_control::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_control::action::ExecuteArmGoal_Goal & msg)
{
  return arm_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_control::action::ExecuteArmGoal_Goal>()
{
  return "arm_control::action::ExecuteArmGoal_Goal";
}

template<>
inline const char * name<arm_control::action::ExecuteArmGoal_Goal>()
{
  return "arm_control/action/ExecuteArmGoal_Goal";
}

template<>
struct has_fixed_size<arm_control::action::ExecuteArmGoal_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arm_control::action::ExecuteArmGoal_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arm_control::action::ExecuteArmGoal_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace arm_control
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteArmGoal_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
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
  const ExecuteArmGoal_Result & msg,
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

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
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

inline std::string to_yaml(const ExecuteArmGoal_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arm_control

namespace rosidl_generator_traits
{

[[deprecated("use arm_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arm_control::action::ExecuteArmGoal_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_control::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_control::action::ExecuteArmGoal_Result & msg)
{
  return arm_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_control::action::ExecuteArmGoal_Result>()
{
  return "arm_control::action::ExecuteArmGoal_Result";
}

template<>
inline const char * name<arm_control::action::ExecuteArmGoal_Result>()
{
  return "arm_control/action/ExecuteArmGoal_Result";
}

template<>
struct has_fixed_size<arm_control::action::ExecuteArmGoal_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arm_control::action::ExecuteArmGoal_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arm_control::action::ExecuteArmGoal_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace arm_control
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteArmGoal_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: phase
  {
    out << "phase: ";
    rosidl_generator_traits::value_to_yaml(msg.phase, out);
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
  const ExecuteArmGoal_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: phase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "phase: ";
    rosidl_generator_traits::value_to_yaml(msg.phase, out);
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

inline std::string to_yaml(const ExecuteArmGoal_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arm_control

namespace rosidl_generator_traits
{

[[deprecated("use arm_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arm_control::action::ExecuteArmGoal_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_control::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_control::action::ExecuteArmGoal_Feedback & msg)
{
  return arm_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_control::action::ExecuteArmGoal_Feedback>()
{
  return "arm_control::action::ExecuteArmGoal_Feedback";
}

template<>
inline const char * name<arm_control::action::ExecuteArmGoal_Feedback>()
{
  return "arm_control/action/ExecuteArmGoal_Feedback";
}

template<>
struct has_fixed_size<arm_control::action::ExecuteArmGoal_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arm_control::action::ExecuteArmGoal_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arm_control::action::ExecuteArmGoal_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "arm_control/action/detail/execute_arm_goal__traits.hpp"

namespace arm_control
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteArmGoal_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteArmGoal_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteArmGoal_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arm_control

namespace rosidl_generator_traits
{

[[deprecated("use arm_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arm_control::action::ExecuteArmGoal_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_control::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_control::action::ExecuteArmGoal_SendGoal_Request & msg)
{
  return arm_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_control::action::ExecuteArmGoal_SendGoal_Request>()
{
  return "arm_control::action::ExecuteArmGoal_SendGoal_Request";
}

template<>
inline const char * name<arm_control::action::ExecuteArmGoal_SendGoal_Request>()
{
  return "arm_control/action/ExecuteArmGoal_SendGoal_Request";
}

template<>
struct has_fixed_size<arm_control::action::ExecuteArmGoal_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<arm_control::action::ExecuteArmGoal_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<arm_control::action::ExecuteArmGoal_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<arm_control::action::ExecuteArmGoal_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<arm_control::action::ExecuteArmGoal_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace arm_control
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteArmGoal_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteArmGoal_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteArmGoal_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arm_control

namespace rosidl_generator_traits
{

[[deprecated("use arm_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arm_control::action::ExecuteArmGoal_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_control::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_control::action::ExecuteArmGoal_SendGoal_Response & msg)
{
  return arm_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_control::action::ExecuteArmGoal_SendGoal_Response>()
{
  return "arm_control::action::ExecuteArmGoal_SendGoal_Response";
}

template<>
inline const char * name<arm_control::action::ExecuteArmGoal_SendGoal_Response>()
{
  return "arm_control/action/ExecuteArmGoal_SendGoal_Response";
}

template<>
struct has_fixed_size<arm_control::action::ExecuteArmGoal_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<arm_control::action::ExecuteArmGoal_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<arm_control::action::ExecuteArmGoal_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arm_control::action::ExecuteArmGoal_SendGoal>()
{
  return "arm_control::action::ExecuteArmGoal_SendGoal";
}

template<>
inline const char * name<arm_control::action::ExecuteArmGoal_SendGoal>()
{
  return "arm_control/action/ExecuteArmGoal_SendGoal";
}

template<>
struct has_fixed_size<arm_control::action::ExecuteArmGoal_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<arm_control::action::ExecuteArmGoal_SendGoal_Request>::value &&
    has_fixed_size<arm_control::action::ExecuteArmGoal_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<arm_control::action::ExecuteArmGoal_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<arm_control::action::ExecuteArmGoal_SendGoal_Request>::value &&
    has_bounded_size<arm_control::action::ExecuteArmGoal_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<arm_control::action::ExecuteArmGoal_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<arm_control::action::ExecuteArmGoal_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arm_control::action::ExecuteArmGoal_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace arm_control
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteArmGoal_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteArmGoal_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteArmGoal_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arm_control

namespace rosidl_generator_traits
{

[[deprecated("use arm_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arm_control::action::ExecuteArmGoal_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_control::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_control::action::ExecuteArmGoal_GetResult_Request & msg)
{
  return arm_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_control::action::ExecuteArmGoal_GetResult_Request>()
{
  return "arm_control::action::ExecuteArmGoal_GetResult_Request";
}

template<>
inline const char * name<arm_control::action::ExecuteArmGoal_GetResult_Request>()
{
  return "arm_control/action/ExecuteArmGoal_GetResult_Request";
}

template<>
struct has_fixed_size<arm_control::action::ExecuteArmGoal_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<arm_control::action::ExecuteArmGoal_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<arm_control::action::ExecuteArmGoal_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "arm_control/action/detail/execute_arm_goal__traits.hpp"

namespace arm_control
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteArmGoal_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteArmGoal_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteArmGoal_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arm_control

namespace rosidl_generator_traits
{

[[deprecated("use arm_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arm_control::action::ExecuteArmGoal_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_control::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_control::action::ExecuteArmGoal_GetResult_Response & msg)
{
  return arm_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_control::action::ExecuteArmGoal_GetResult_Response>()
{
  return "arm_control::action::ExecuteArmGoal_GetResult_Response";
}

template<>
inline const char * name<arm_control::action::ExecuteArmGoal_GetResult_Response>()
{
  return "arm_control/action/ExecuteArmGoal_GetResult_Response";
}

template<>
struct has_fixed_size<arm_control::action::ExecuteArmGoal_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<arm_control::action::ExecuteArmGoal_Result>::value> {};

template<>
struct has_bounded_size<arm_control::action::ExecuteArmGoal_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<arm_control::action::ExecuteArmGoal_Result>::value> {};

template<>
struct is_message<arm_control::action::ExecuteArmGoal_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arm_control::action::ExecuteArmGoal_GetResult>()
{
  return "arm_control::action::ExecuteArmGoal_GetResult";
}

template<>
inline const char * name<arm_control::action::ExecuteArmGoal_GetResult>()
{
  return "arm_control/action/ExecuteArmGoal_GetResult";
}

template<>
struct has_fixed_size<arm_control::action::ExecuteArmGoal_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<arm_control::action::ExecuteArmGoal_GetResult_Request>::value &&
    has_fixed_size<arm_control::action::ExecuteArmGoal_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<arm_control::action::ExecuteArmGoal_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<arm_control::action::ExecuteArmGoal_GetResult_Request>::value &&
    has_bounded_size<arm_control::action::ExecuteArmGoal_GetResult_Response>::value
  >
{
};

template<>
struct is_service<arm_control::action::ExecuteArmGoal_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<arm_control::action::ExecuteArmGoal_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arm_control::action::ExecuteArmGoal_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "arm_control/action/detail/execute_arm_goal__traits.hpp"

namespace arm_control
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteArmGoal_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteArmGoal_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteArmGoal_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace arm_control

namespace rosidl_generator_traits
{

[[deprecated("use arm_control::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arm_control::action::ExecuteArmGoal_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_control::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_control::action::to_yaml() instead")]]
inline std::string to_yaml(const arm_control::action::ExecuteArmGoal_FeedbackMessage & msg)
{
  return arm_control::action::to_yaml(msg);
}

template<>
inline const char * data_type<arm_control::action::ExecuteArmGoal_FeedbackMessage>()
{
  return "arm_control::action::ExecuteArmGoal_FeedbackMessage";
}

template<>
inline const char * name<arm_control::action::ExecuteArmGoal_FeedbackMessage>()
{
  return "arm_control/action/ExecuteArmGoal_FeedbackMessage";
}

template<>
struct has_fixed_size<arm_control::action::ExecuteArmGoal_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<arm_control::action::ExecuteArmGoal_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<arm_control::action::ExecuteArmGoal_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<arm_control::action::ExecuteArmGoal_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<arm_control::action::ExecuteArmGoal_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<arm_control::action::ExecuteArmGoal>
  : std::true_type
{
};

template<>
struct is_action_goal<arm_control::action::ExecuteArmGoal_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<arm_control::action::ExecuteArmGoal_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<arm_control::action::ExecuteArmGoal_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ARM_CONTROL__ACTION__DETAIL__EXECUTE_ARM_GOAL__TRAITS_HPP_
