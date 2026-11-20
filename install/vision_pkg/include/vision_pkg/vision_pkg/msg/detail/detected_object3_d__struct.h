// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vision_pkg:msg/DetectedObject3D.idl
// generated code does not contain a copyright notice

#ifndef VISION_PKG__MSG__DETAIL__DETECTED_OBJECT3_D__STRUCT_H_
#define VISION_PKG__MSG__DETAIL__DETECTED_OBJECT3_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'class_name'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in msg/DetectedObject3D in the package vision_pkg.
typedef struct vision_pkg__msg__DetectedObject3D
{
  rosidl_runtime_c__String class_name;
  int32_t id;
  float confidence;
  geometry_msgs__msg__PoseStamped pose;
} vision_pkg__msg__DetectedObject3D;

// Struct for a sequence of vision_pkg__msg__DetectedObject3D.
typedef struct vision_pkg__msg__DetectedObject3D__Sequence
{
  vision_pkg__msg__DetectedObject3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vision_pkg__msg__DetectedObject3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISION_PKG__MSG__DETAIL__DETECTED_OBJECT3_D__STRUCT_H_
