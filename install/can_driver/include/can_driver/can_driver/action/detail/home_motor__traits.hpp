// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from can_driver:action/HomeMotor.idl
// generated code does not contain a copyright notice

#ifndef CAN_DRIVER__ACTION__DETAIL__HOME_MOTOR__TRAITS_HPP_
#define CAN_DRIVER__ACTION__DETAIL__HOME_MOTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "can_driver/action/detail/home_motor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace can_driver
{

namespace action
{

inline void to_flow_style_yaml(
  const HomeMotor_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_id
  {
    out << "motor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_id, out);
    out << ", ";
  }

  // member: search_positive
  {
    out << "search_positive: ";
    rosidl_generator_traits::value_to_yaml(msg.search_positive, out);
    out << ", ";
  }

  // member: timeout
  {
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HomeMotor_Goal & msg,
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

  // member: search_positive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "search_positive: ";
    rosidl_generator_traits::value_to_yaml(msg.search_positive, out);
    out << "\n";
  }

  // member: timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HomeMotor_Goal & msg, bool use_flow_style = false)
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

}  // namespace can_driver

namespace rosidl_generator_traits
{

[[deprecated("use can_driver::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const can_driver::action::HomeMotor_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  can_driver::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use can_driver::action::to_yaml() instead")]]
inline std::string to_yaml(const can_driver::action::HomeMotor_Goal & msg)
{
  return can_driver::action::to_yaml(msg);
}

template<>
inline const char * data_type<can_driver::action::HomeMotor_Goal>()
{
  return "can_driver::action::HomeMotor_Goal";
}

template<>
inline const char * name<can_driver::action::HomeMotor_Goal>()
{
  return "can_driver/action/HomeMotor_Goal";
}

template<>
struct has_fixed_size<can_driver::action::HomeMotor_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<can_driver::action::HomeMotor_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<can_driver::action::HomeMotor_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace can_driver
{

namespace action
{

inline void to_flow_style_yaml(
  const HomeMotor_Result & msg,
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
  const HomeMotor_Result & msg,
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

inline std::string to_yaml(const HomeMotor_Result & msg, bool use_flow_style = false)
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

}  // namespace can_driver

namespace rosidl_generator_traits
{

[[deprecated("use can_driver::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const can_driver::action::HomeMotor_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  can_driver::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use can_driver::action::to_yaml() instead")]]
inline std::string to_yaml(const can_driver::action::HomeMotor_Result & msg)
{
  return can_driver::action::to_yaml(msg);
}

template<>
inline const char * data_type<can_driver::action::HomeMotor_Result>()
{
  return "can_driver::action::HomeMotor_Result";
}

template<>
inline const char * name<can_driver::action::HomeMotor_Result>()
{
  return "can_driver/action/HomeMotor_Result";
}

template<>
struct has_fixed_size<can_driver::action::HomeMotor_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<can_driver::action::HomeMotor_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<can_driver::action::HomeMotor_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace can_driver
{

namespace action
{

inline void to_flow_style_yaml(
  const HomeMotor_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << ", ";
  }

  // member: current_position
  {
    out << "current_position: ";
    rosidl_generator_traits::value_to_yaml(msg.current_position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HomeMotor_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << "\n";
  }

  // member: current_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_position: ";
    rosidl_generator_traits::value_to_yaml(msg.current_position, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HomeMotor_Feedback & msg, bool use_flow_style = false)
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

}  // namespace can_driver

namespace rosidl_generator_traits
{

[[deprecated("use can_driver::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const can_driver::action::HomeMotor_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  can_driver::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use can_driver::action::to_yaml() instead")]]
inline std::string to_yaml(const can_driver::action::HomeMotor_Feedback & msg)
{
  return can_driver::action::to_yaml(msg);
}

template<>
inline const char * data_type<can_driver::action::HomeMotor_Feedback>()
{
  return "can_driver::action::HomeMotor_Feedback";
}

template<>
inline const char * name<can_driver::action::HomeMotor_Feedback>()
{
  return "can_driver/action/HomeMotor_Feedback";
}

template<>
struct has_fixed_size<can_driver::action::HomeMotor_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<can_driver::action::HomeMotor_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<can_driver::action::HomeMotor_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "can_driver/action/detail/home_motor__traits.hpp"

namespace can_driver
{

namespace action
{

inline void to_flow_style_yaml(
  const HomeMotor_SendGoal_Request & msg,
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
  const HomeMotor_SendGoal_Request & msg,
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

inline std::string to_yaml(const HomeMotor_SendGoal_Request & msg, bool use_flow_style = false)
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

}  // namespace can_driver

namespace rosidl_generator_traits
{

[[deprecated("use can_driver::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const can_driver::action::HomeMotor_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  can_driver::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use can_driver::action::to_yaml() instead")]]
inline std::string to_yaml(const can_driver::action::HomeMotor_SendGoal_Request & msg)
{
  return can_driver::action::to_yaml(msg);
}

template<>
inline const char * data_type<can_driver::action::HomeMotor_SendGoal_Request>()
{
  return "can_driver::action::HomeMotor_SendGoal_Request";
}

template<>
inline const char * name<can_driver::action::HomeMotor_SendGoal_Request>()
{
  return "can_driver/action/HomeMotor_SendGoal_Request";
}

template<>
struct has_fixed_size<can_driver::action::HomeMotor_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<can_driver::action::HomeMotor_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<can_driver::action::HomeMotor_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<can_driver::action::HomeMotor_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<can_driver::action::HomeMotor_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace can_driver
{

namespace action
{

inline void to_flow_style_yaml(
  const HomeMotor_SendGoal_Response & msg,
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
  const HomeMotor_SendGoal_Response & msg,
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

inline std::string to_yaml(const HomeMotor_SendGoal_Response & msg, bool use_flow_style = false)
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

}  // namespace can_driver

namespace rosidl_generator_traits
{

[[deprecated("use can_driver::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const can_driver::action::HomeMotor_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  can_driver::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use can_driver::action::to_yaml() instead")]]
inline std::string to_yaml(const can_driver::action::HomeMotor_SendGoal_Response & msg)
{
  return can_driver::action::to_yaml(msg);
}

template<>
inline const char * data_type<can_driver::action::HomeMotor_SendGoal_Response>()
{
  return "can_driver::action::HomeMotor_SendGoal_Response";
}

template<>
inline const char * name<can_driver::action::HomeMotor_SendGoal_Response>()
{
  return "can_driver/action/HomeMotor_SendGoal_Response";
}

template<>
struct has_fixed_size<can_driver::action::HomeMotor_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<can_driver::action::HomeMotor_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<can_driver::action::HomeMotor_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<can_driver::action::HomeMotor_SendGoal>()
{
  return "can_driver::action::HomeMotor_SendGoal";
}

template<>
inline const char * name<can_driver::action::HomeMotor_SendGoal>()
{
  return "can_driver/action/HomeMotor_SendGoal";
}

template<>
struct has_fixed_size<can_driver::action::HomeMotor_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<can_driver::action::HomeMotor_SendGoal_Request>::value &&
    has_fixed_size<can_driver::action::HomeMotor_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<can_driver::action::HomeMotor_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<can_driver::action::HomeMotor_SendGoal_Request>::value &&
    has_bounded_size<can_driver::action::HomeMotor_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<can_driver::action::HomeMotor_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<can_driver::action::HomeMotor_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<can_driver::action::HomeMotor_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace can_driver
{

namespace action
{

inline void to_flow_style_yaml(
  const HomeMotor_GetResult_Request & msg,
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
  const HomeMotor_GetResult_Request & msg,
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

inline std::string to_yaml(const HomeMotor_GetResult_Request & msg, bool use_flow_style = false)
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

}  // namespace can_driver

namespace rosidl_generator_traits
{

[[deprecated("use can_driver::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const can_driver::action::HomeMotor_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  can_driver::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use can_driver::action::to_yaml() instead")]]
inline std::string to_yaml(const can_driver::action::HomeMotor_GetResult_Request & msg)
{
  return can_driver::action::to_yaml(msg);
}

template<>
inline const char * data_type<can_driver::action::HomeMotor_GetResult_Request>()
{
  return "can_driver::action::HomeMotor_GetResult_Request";
}

template<>
inline const char * name<can_driver::action::HomeMotor_GetResult_Request>()
{
  return "can_driver/action/HomeMotor_GetResult_Request";
}

template<>
struct has_fixed_size<can_driver::action::HomeMotor_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<can_driver::action::HomeMotor_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<can_driver::action::HomeMotor_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "can_driver/action/detail/home_motor__traits.hpp"

namespace can_driver
{

namespace action
{

inline void to_flow_style_yaml(
  const HomeMotor_GetResult_Response & msg,
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
  const HomeMotor_GetResult_Response & msg,
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

inline std::string to_yaml(const HomeMotor_GetResult_Response & msg, bool use_flow_style = false)
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

}  // namespace can_driver

namespace rosidl_generator_traits
{

[[deprecated("use can_driver::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const can_driver::action::HomeMotor_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  can_driver::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use can_driver::action::to_yaml() instead")]]
inline std::string to_yaml(const can_driver::action::HomeMotor_GetResult_Response & msg)
{
  return can_driver::action::to_yaml(msg);
}

template<>
inline const char * data_type<can_driver::action::HomeMotor_GetResult_Response>()
{
  return "can_driver::action::HomeMotor_GetResult_Response";
}

template<>
inline const char * name<can_driver::action::HomeMotor_GetResult_Response>()
{
  return "can_driver/action/HomeMotor_GetResult_Response";
}

template<>
struct has_fixed_size<can_driver::action::HomeMotor_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<can_driver::action::HomeMotor_Result>::value> {};

template<>
struct has_bounded_size<can_driver::action::HomeMotor_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<can_driver::action::HomeMotor_Result>::value> {};

template<>
struct is_message<can_driver::action::HomeMotor_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<can_driver::action::HomeMotor_GetResult>()
{
  return "can_driver::action::HomeMotor_GetResult";
}

template<>
inline const char * name<can_driver::action::HomeMotor_GetResult>()
{
  return "can_driver/action/HomeMotor_GetResult";
}

template<>
struct has_fixed_size<can_driver::action::HomeMotor_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<can_driver::action::HomeMotor_GetResult_Request>::value &&
    has_fixed_size<can_driver::action::HomeMotor_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<can_driver::action::HomeMotor_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<can_driver::action::HomeMotor_GetResult_Request>::value &&
    has_bounded_size<can_driver::action::HomeMotor_GetResult_Response>::value
  >
{
};

template<>
struct is_service<can_driver::action::HomeMotor_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<can_driver::action::HomeMotor_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<can_driver::action::HomeMotor_GetResult_Response>
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
// #include "can_driver/action/detail/home_motor__traits.hpp"

namespace can_driver
{

namespace action
{

inline void to_flow_style_yaml(
  const HomeMotor_FeedbackMessage & msg,
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
  const HomeMotor_FeedbackMessage & msg,
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

inline std::string to_yaml(const HomeMotor_FeedbackMessage & msg, bool use_flow_style = false)
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

}  // namespace can_driver

namespace rosidl_generator_traits
{

[[deprecated("use can_driver::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const can_driver::action::HomeMotor_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  can_driver::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use can_driver::action::to_yaml() instead")]]
inline std::string to_yaml(const can_driver::action::HomeMotor_FeedbackMessage & msg)
{
  return can_driver::action::to_yaml(msg);
}

template<>
inline const char * data_type<can_driver::action::HomeMotor_FeedbackMessage>()
{
  return "can_driver::action::HomeMotor_FeedbackMessage";
}

template<>
inline const char * name<can_driver::action::HomeMotor_FeedbackMessage>()
{
  return "can_driver/action/HomeMotor_FeedbackMessage";
}

template<>
struct has_fixed_size<can_driver::action::HomeMotor_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<can_driver::action::HomeMotor_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<can_driver::action::HomeMotor_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<can_driver::action::HomeMotor_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<can_driver::action::HomeMotor_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<can_driver::action::HomeMotor>
  : std::true_type
{
};

template<>
struct is_action_goal<can_driver::action::HomeMotor_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<can_driver::action::HomeMotor_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<can_driver::action::HomeMotor_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CAN_DRIVER__ACTION__DETAIL__HOME_MOTOR__TRAITS_HPP_
