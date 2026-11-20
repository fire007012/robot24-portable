// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vision_pkg:msg/DetectedObject3DArray.idl
// generated code does not contain a copyright notice

#ifndef VISION_PKG__MSG__DETAIL__DETECTED_OBJECT3_D_ARRAY__STRUCT_H_
#define VISION_PKG__MSG__DETAIL__DETECTED_OBJECT3_D_ARRAY__STRUCT_H_

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
// Member 'objects'
#include "vision_pkg/msg/detail/detected_object3_d__struct.h"

/// Struct defined in msg/DetectedObject3DArray in the package vision_pkg.
typedef struct vision_pkg__msg__DetectedObject3DArray
{
  std_msgs__msg__Header header;
  vision_pkg__msg__DetectedObject3D__Sequence objects;
} vision_pkg__msg__DetectedObject3DArray;

// Struct for a sequence of vision_pkg__msg__DetectedObject3DArray.
typedef struct vision_pkg__msg__DetectedObject3DArray__Sequence
{
  vision_pkg__msg__DetectedObject3DArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vision_pkg__msg__DetectedObject3DArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISION_PKG__MSG__DETAIL__DETECTED_OBJECT3_D_ARRAY__STRUCT_H_
