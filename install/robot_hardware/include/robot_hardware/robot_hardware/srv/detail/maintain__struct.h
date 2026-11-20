// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_hardware:srv/Maintain.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_HARDWARE__SRV__DETAIL__MAINTAIN__STRUCT_H_
#define ROBOT_HARDWARE__SRV__DETAIL__MAINTAIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint'
// Member 'operation'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Maintain in the package robot_hardware.
typedef struct robot_hardware__srv__Maintain_Request
{
  rosidl_runtime_c__String joint;
  rosidl_runtime_c__String operation;
  double lower;
  double upper;
  bool save;
} robot_hardware__srv__Maintain_Request;

// Struct for a sequence of robot_hardware__srv__Maintain_Request.
typedef struct robot_hardware__srv__Maintain_Request__Sequence
{
  robot_hardware__srv__Maintain_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_hardware__srv__Maintain_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Maintain in the package robot_hardware.
typedef struct robot_hardware__srv__Maintain_Response
{
  bool success;
  rosidl_runtime_c__String message;
} robot_hardware__srv__Maintain_Response;

// Struct for a sequence of robot_hardware__srv__Maintain_Response.
typedef struct robot_hardware__srv__Maintain_Response__Sequence
{
  robot_hardware__srv__Maintain_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_hardware__srv__Maintain_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_HARDWARE__SRV__DETAIL__MAINTAIN__STRUCT_H_
