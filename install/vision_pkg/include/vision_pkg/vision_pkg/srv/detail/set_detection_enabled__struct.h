// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vision_pkg:srv/SetDetectionEnabled.idl
// generated code does not contain a copyright notice

#ifndef VISION_PKG__SRV__DETAIL__SET_DETECTION_ENABLED__STRUCT_H_
#define VISION_PKG__SRV__DETAIL__SET_DETECTION_ENABLED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetDetectionEnabled in the package vision_pkg.
typedef struct vision_pkg__srv__SetDetectionEnabled_Request
{
  bool enable_all;
  bool enable_yolo;
  bool enable_qrcode;
  bool enable_motion;
  bool enable_obstacle_warning;
  bool enable_center_distance;
} vision_pkg__srv__SetDetectionEnabled_Request;

// Struct for a sequence of vision_pkg__srv__SetDetectionEnabled_Request.
typedef struct vision_pkg__srv__SetDetectionEnabled_Request__Sequence
{
  vision_pkg__srv__SetDetectionEnabled_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vision_pkg__srv__SetDetectionEnabled_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetDetectionEnabled in the package vision_pkg.
typedef struct vision_pkg__srv__SetDetectionEnabled_Response
{
  bool success;
  rosidl_runtime_c__String message;
  bool yolo_enabled;
  bool qrcode_enabled;
  bool motion_enabled;
  bool obstacle_warning_enabled;
  bool center_distance_enabled;
} vision_pkg__srv__SetDetectionEnabled_Response;

// Struct for a sequence of vision_pkg__srv__SetDetectionEnabled_Response.
typedef struct vision_pkg__srv__SetDetectionEnabled_Response__Sequence
{
  vision_pkg__srv__SetDetectionEnabled_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vision_pkg__srv__SetDetectionEnabled_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISION_PKG__SRV__DETAIL__SET_DETECTION_ENABLED__STRUCT_H_
