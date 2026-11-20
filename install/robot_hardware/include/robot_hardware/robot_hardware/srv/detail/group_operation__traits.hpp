// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_hardware:srv/GroupOperation.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_HARDWARE__SRV__DETAIL__GROUP_OPERATION__TRAITS_HPP_
#define ROBOT_HARDWARE__SRV__DETAIL__GROUP_OPERATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_hardware/srv/detail/group_operation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_hardware
{

namespace srv
{

inline void to_flow_style_yaml(
  const GroupOperation_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: groups
  {
    if (msg.groups.size() == 0) {
      out << "groups: []";
    } else {
      out << "groups: [";
      size_t pending_items = msg.groups.size();
      for (auto item : msg.groups) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: operation
  {
    out << "operation: ";
    rosidl_generator_traits::value_to_yaml(msg.operation, out);
    out << ", ";
  }

  // member: resource
  {
    out << "resource: ";
    rosidl_generator_traits::value_to_yaml(msg.resource, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GroupOperation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: groups
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.groups.size() == 0) {
      out << "groups: []\n";
    } else {
      out << "groups:\n";
      for (auto item : msg.groups) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

  // member: resource
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resource: ";
    rosidl_generator_traits::value_to_yaml(msg.resource, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GroupOperation_Request & msg, bool use_flow_style = false)
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
  const robot_hardware::srv::GroupOperation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_hardware::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_hardware::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_hardware::srv::GroupOperation_Request & msg)
{
  return robot_hardware::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_hardware::srv::GroupOperation_Request>()
{
  return "robot_hardware::srv::GroupOperation_Request";
}

template<>
inline const char * name<robot_hardware::srv::GroupOperation_Request>()
{
  return "robot_hardware/srv/GroupOperation_Request";
}

template<>
struct has_fixed_size<robot_hardware::srv::GroupOperation_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_hardware::srv::GroupOperation_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_hardware::srv::GroupOperation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robot_hardware
{

namespace srv
{

inline void to_flow_style_yaml(
  const GroupOperation_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: operation_id
  {
    out << "operation_id: ";
    rosidl_generator_traits::value_to_yaml(msg.operation_id, out);
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
  const GroupOperation_Response & msg,
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

  // member: operation_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operation_id: ";
    rosidl_generator_traits::value_to_yaml(msg.operation_id, out);
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

inline std::string to_yaml(const GroupOperation_Response & msg, bool use_flow_style = false)
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
  const robot_hardware::srv::GroupOperation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_hardware::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_hardware::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_hardware::srv::GroupOperation_Response & msg)
{
  return robot_hardware::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_hardware::srv::GroupOperation_Response>()
{
  return "robot_hardware::srv::GroupOperation_Response";
}

template<>
inline const char * name<robot_hardware::srv::GroupOperation_Response>()
{
  return "robot_hardware/srv/GroupOperation_Response";
}

template<>
struct has_fixed_size<robot_hardware::srv::GroupOperation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_hardware::srv::GroupOperation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_hardware::srv::GroupOperation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_hardware::srv::GroupOperation>()
{
  return "robot_hardware::srv::GroupOperation";
}

template<>
inline const char * name<robot_hardware::srv::GroupOperation>()
{
  return "robot_hardware/srv/GroupOperation";
}

template<>
struct has_fixed_size<robot_hardware::srv::GroupOperation>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_hardware::srv::GroupOperation_Request>::value &&
    has_fixed_size<robot_hardware::srv::GroupOperation_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_hardware::srv::GroupOperation>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_hardware::srv::GroupOperation_Request>::value &&
    has_bounded_size<robot_hardware::srv::GroupOperation_Response>::value
  >
{
};

template<>
struct is_service<robot_hardware::srv::GroupOperation>
  : std::true_type
{
};

template<>
struct is_service_request<robot_hardware::srv::GroupOperation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_hardware::srv::GroupOperation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_HARDWARE__SRV__DETAIL__GROUP_OPERATION__TRAITS_HPP_
