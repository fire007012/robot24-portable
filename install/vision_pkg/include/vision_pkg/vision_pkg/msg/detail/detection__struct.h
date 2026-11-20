// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vision_pkg:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef VISION_PKG__MSG__DETAIL__DETECTION__STRUCT_H_
#define VISION_PKG__MSG__DETAIL__DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'class_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Detection in the package vision_pkg.
typedef struct vision_pkg__msg__Detection
{
  std_msgs__msg__Header header;
  int32_t id;
  float confidence;
  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  rosidl_runtime_c__String class_name;
} vision_pkg__msg__Detection;

// Struct for a sequence of vision_pkg__msg__Detection.
typedef struct vision_pkg__msg__Detection__Sequence
{
  vision_pkg__msg__Detection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vision_pkg__msg__Detection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISION_PKG__MSG__DETAIL__DETECTION__STRUCT_H_
