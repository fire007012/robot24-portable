// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from canopen_interfaces:srv/COPositionTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CANOPEN_INTERFACES__SRV__DETAIL__CO_POSITION_TRAJECTORY__TRAITS_HPP_
#define CANOPEN_INTERFACES__SRV__DETAIL__CO_POSITION_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "canopen_interfaces/srv/detail/co_position_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace canopen_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const COPositionTrajectory_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: epoch
  {
    out << "epoch: ";
    rosidl_generator_traits::value_to_yaml(msg.epoch, out);
    out << ", ";
  }

  // member: positions
  {
    if (msg.positions.size() == 0) {
      out << "positions: []";
    } else {
      out << "positions: [";
      size_t pending_items = msg.positions.size();
      for (auto item : msg.positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: times_from_start
  {
    if (msg.times_from_start.size() == 0) {
      out << "times_from_start: []";
    } else {
      out << "times_from_start: [";
      size_t pending_items = msg.times_from_start.size();
      for (auto item : msg.times_from_start) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const COPositionTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: epoch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epoch: ";
    rosidl_generator_traits::value_to_yaml(msg.epoch, out);
    out << "\n";
  }

  // member: positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.positions.size() == 0) {
      out << "positions: []\n";
    } else {
      out << "positions:\n";
      for (auto item : msg.positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: times_from_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.times_from_start.size() == 0) {
      out << "times_from_start: []\n";
    } else {
      out << "times_from_start:\n";
      for (auto item : msg.times_from_start) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const COPositionTrajectory_Request & msg, bool use_flow_style = false)
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

}  // namespace canopen_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use canopen_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const canopen_interfaces::srv::COPositionTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  canopen_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use canopen_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const canopen_interfaces::srv::COPositionTrajectory_Request & msg)
{
  return canopen_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<canopen_interfaces::srv::COPositionTrajectory_Request>()
{
  return "canopen_interfaces::srv::COPositionTrajectory_Request";
}

template<>
inline const char * name<canopen_interfaces::srv::COPositionTrajectory_Request>()
{
  return "canopen_interfaces/srv/COPositionTrajectory_Request";
}

template<>
struct has_fixed_size<canopen_interfaces::srv::COPositionTrajectory_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<canopen_interfaces::srv::COPositionTrajectory_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<canopen_interfaces::srv::COPositionTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace canopen_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const COPositionTrajectory_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: epoch
  {
    out << "epoch: ";
    rosidl_generator_traits::value_to_yaml(msg.epoch, out);
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
  const COPositionTrajectory_Response & msg,
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

  // member: epoch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epoch: ";
    rosidl_generator_traits::value_to_yaml(msg.epoch, out);
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

inline std::string to_yaml(const COPositionTrajectory_Response & msg, bool use_flow_style = false)
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

}  // namespace canopen_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use canopen_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const canopen_interfaces::srv::COPositionTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  canopen_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use canopen_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const canopen_interfaces::srv::COPositionTrajectory_Response & msg)
{
  return canopen_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<canopen_interfaces::srv::COPositionTrajectory_Response>()
{
  return "canopen_interfaces::srv::COPositionTrajectory_Response";
}

template<>
inline const char * name<canopen_interfaces::srv::COPositionTrajectory_Response>()
{
  return "canopen_interfaces/srv/COPositionTrajectory_Response";
}

template<>
struct has_fixed_size<canopen_interfaces::srv::COPositionTrajectory_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<canopen_interfaces::srv::COPositionTrajectory_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<canopen_interfaces::srv::COPositionTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<canopen_interfaces::srv::COPositionTrajectory>()
{
  return "canopen_interfaces::srv::COPositionTrajectory";
}

template<>
inline const char * name<canopen_interfaces::srv::COPositionTrajectory>()
{
  return "canopen_interfaces/srv/COPositionTrajectory";
}

template<>
struct has_fixed_size<canopen_interfaces::srv::COPositionTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<canopen_interfaces::srv::COPositionTrajectory_Request>::value &&
    has_fixed_size<canopen_interfaces::srv::COPositionTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<canopen_interfaces::srv::COPositionTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<canopen_interfaces::srv::COPositionTrajectory_Request>::value &&
    has_bounded_size<canopen_interfaces::srv::COPositionTrajectory_Response>::value
  >
{
};

template<>
struct is_service<canopen_interfaces::srv::COPositionTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<canopen_interfaces::srv::COPositionTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<canopen_interfaces::srv::COPositionTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CANOPEN_INTERFACES__SRV__DETAIL__CO_POSITION_TRAJECTORY__TRAITS_HPP_
