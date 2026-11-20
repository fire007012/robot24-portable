// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vision_pkg:srv/SetDetectionEnabled.idl
// generated code does not contain a copyright notice

#ifndef VISION_PKG__SRV__DETAIL__SET_DETECTION_ENABLED__TRAITS_HPP_
#define VISION_PKG__SRV__DETAIL__SET_DETECTION_ENABLED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "vision_pkg/srv/detail/set_detection_enabled__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace vision_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetDetectionEnabled_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: enable_all
  {
    out << "enable_all: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_all, out);
    out << ", ";
  }

  // member: enable_yolo
  {
    out << "enable_yolo: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_yolo, out);
    out << ", ";
  }

  // member: enable_qrcode
  {
    out << "enable_qrcode: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_qrcode, out);
    out << ", ";
  }

  // member: enable_motion
  {
    out << "enable_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_motion, out);
    out << ", ";
  }

  // member: enable_obstacle_warning
  {
    out << "enable_obstacle_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_obstacle_warning, out);
    out << ", ";
  }

  // member: enable_center_distance
  {
    out << "enable_center_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_center_distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetDetectionEnabled_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enable_all
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_all: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_all, out);
    out << "\n";
  }

  // member: enable_yolo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_yolo: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_yolo, out);
    out << "\n";
  }

  // member: enable_qrcode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_qrcode: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_qrcode, out);
    out << "\n";
  }

  // member: enable_motion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_motion, out);
    out << "\n";
  }

  // member: enable_obstacle_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_obstacle_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_obstacle_warning, out);
    out << "\n";
  }

  // member: enable_center_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_center_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_center_distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetDetectionEnabled_Request & msg, bool use_flow_style = false)
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

}  // namespace vision_pkg

namespace rosidl_generator_traits
{

[[deprecated("use vision_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vision_pkg::srv::SetDetectionEnabled_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  vision_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vision_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const vision_pkg::srv::SetDetectionEnabled_Request & msg)
{
  return vision_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<vision_pkg::srv::SetDetectionEnabled_Request>()
{
  return "vision_pkg::srv::SetDetectionEnabled_Request";
}

template<>
inline const char * name<vision_pkg::srv::SetDetectionEnabled_Request>()
{
  return "vision_pkg/srv/SetDetectionEnabled_Request";
}

template<>
struct has_fixed_size<vision_pkg::srv::SetDetectionEnabled_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<vision_pkg::srv::SetDetectionEnabled_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<vision_pkg::srv::SetDetectionEnabled_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace vision_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetDetectionEnabled_Response & msg,
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

  // member: yolo_enabled
  {
    out << "yolo_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.yolo_enabled, out);
    out << ", ";
  }

  // member: qrcode_enabled
  {
    out << "qrcode_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.qrcode_enabled, out);
    out << ", ";
  }

  // member: motion_enabled
  {
    out << "motion_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_enabled, out);
    out << ", ";
  }

  // member: obstacle_warning_enabled
  {
    out << "obstacle_warning_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_warning_enabled, out);
    out << ", ";
  }

  // member: center_distance_enabled
  {
    out << "center_distance_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.center_distance_enabled, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetDetectionEnabled_Response & msg,
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

  // member: yolo_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yolo_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.yolo_enabled, out);
    out << "\n";
  }

  // member: qrcode_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qrcode_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.qrcode_enabled, out);
    out << "\n";
  }

  // member: motion_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_enabled, out);
    out << "\n";
  }

  // member: obstacle_warning_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_warning_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_warning_enabled, out);
    out << "\n";
  }

  // member: center_distance_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_distance_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.center_distance_enabled, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetDetectionEnabled_Response & msg, bool use_flow_style = false)
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

}  // namespace vision_pkg

namespace rosidl_generator_traits
{

[[deprecated("use vision_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vision_pkg::srv::SetDetectionEnabled_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  vision_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vision_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const vision_pkg::srv::SetDetectionEnabled_Response & msg)
{
  return vision_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<vision_pkg::srv::SetDetectionEnabled_Response>()
{
  return "vision_pkg::srv::SetDetectionEnabled_Response";
}

template<>
inline const char * name<vision_pkg::srv::SetDetectionEnabled_Response>()
{
  return "vision_pkg/srv/SetDetectionEnabled_Response";
}

template<>
struct has_fixed_size<vision_pkg::srv::SetDetectionEnabled_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vision_pkg::srv::SetDetectionEnabled_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vision_pkg::srv::SetDetectionEnabled_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vision_pkg::srv::SetDetectionEnabled>()
{
  return "vision_pkg::srv::SetDetectionEnabled";
}

template<>
inline const char * name<vision_pkg::srv::SetDetectionEnabled>()
{
  return "vision_pkg/srv/SetDetectionEnabled";
}

template<>
struct has_fixed_size<vision_pkg::srv::SetDetectionEnabled>
  : std::integral_constant<
    bool,
    has_fixed_size<vision_pkg::srv::SetDetectionEnabled_Request>::value &&
    has_fixed_size<vision_pkg::srv::SetDetectionEnabled_Response>::value
  >
{
};

template<>
struct has_bounded_size<vision_pkg::srv::SetDetectionEnabled>
  : std::integral_constant<
    bool,
    has_bounded_size<vision_pkg::srv::SetDetectionEnabled_Request>::value &&
    has_bounded_size<vision_pkg::srv::SetDetectionEnabled_Response>::value
  >
{
};

template<>
struct is_service<vision_pkg::srv::SetDetectionEnabled>
  : std::true_type
{
};

template<>
struct is_service_request<vision_pkg::srv::SetDetectionEnabled_Request>
  : std::true_type
{
};

template<>
struct is_service_response<vision_pkg::srv::SetDetectionEnabled_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VISION_PKG__SRV__DETAIL__SET_DETECTION_ENABLED__TRAITS_HPP_
