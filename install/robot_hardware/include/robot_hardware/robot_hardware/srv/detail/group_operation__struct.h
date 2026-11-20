// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_hardware:srv/GroupOperation.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_HARDWARE__SRV__DETAIL__GROUP_OPERATION__STRUCT_H_
#define ROBOT_HARDWARE__SRV__DETAIL__GROUP_OPERATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'groups'
// Member 'operation'
// Member 'resource'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GroupOperation in the package robot_hardware.
typedef struct robot_hardware__srv__GroupOperation_Request
{
  rosidl_runtime_c__String__Sequence groups;
  rosidl_runtime_c__String operation;
  rosidl_runtime_c__String resource;
} robot_hardware__srv__GroupOperation_Request;

// Struct for a sequence of robot_hardware__srv__GroupOperation_Request.
typedef struct robot_hardware__srv__GroupOperation_Request__Sequence
{
  robot_hardware__srv__GroupOperation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_hardware__srv__GroupOperation_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'operation_id'
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GroupOperation in the package robot_hardware.
typedef struct robot_hardware__srv__GroupOperation_Response
{
  bool success;
  rosidl_runtime_c__String operation_id;
  rosidl_runtime_c__String message;
} robot_hardware__srv__GroupOperation_Response;

// Struct for a sequence of robot_hardware__srv__GroupOperation_Response.
typedef struct robot_hardware__srv__GroupOperation_Response__Sequence
{
  robot_hardware__srv__GroupOperation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_hardware__srv__GroupOperation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_HARDWARE__SRV__DETAIL__GROUP_OPERATION__STRUCT_H_
