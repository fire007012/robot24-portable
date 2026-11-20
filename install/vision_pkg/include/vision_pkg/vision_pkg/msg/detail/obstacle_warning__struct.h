// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vision_pkg:msg/ObstacleWarning.idl
// generated code does not contain a copyright notice

#ifndef VISION_PKG__MSG__DETAIL__OBSTACLE_WARNING__STRUCT_H_
#define VISION_PKG__MSG__DETAIL__OBSTACLE_WARNING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ObstacleWarning in the package vision_pkg.
typedef struct vision_pkg__msg__ObstacleWarning
{
  float left_dist;
  float center_dist;
  float right_dist;
  bool left_warn;
  bool center_warn;
  bool right_warn;
} vision_pkg__msg__ObstacleWarning;

// Struct for a sequence of vision_pkg__msg__ObstacleWarning.
typedef struct vision_pkg__msg__ObstacleWarning__Sequence
{
  vision_pkg__msg__ObstacleWarning * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vision_pkg__msg__ObstacleWarning__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISION_PKG__MSG__DETAIL__OBSTACLE_WARNING__STRUCT_H_
