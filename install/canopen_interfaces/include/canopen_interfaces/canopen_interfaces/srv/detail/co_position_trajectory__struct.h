// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from canopen_interfaces:srv/COPositionTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CANOPEN_INTERFACES__SRV__DETAIL__CO_POSITION_TRAJECTORY__STRUCT_H_
#define CANOPEN_INTERFACES__SRV__DETAIL__CO_POSITION_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'positions'
// Member 'times_from_start'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/COPositionTrajectory in the package canopen_interfaces.
typedef struct canopen_interfaces__srv__COPositionTrajectory_Request
{
  uint64_t epoch;
  rosidl_runtime_c__double__Sequence positions;
  rosidl_runtime_c__double__Sequence times_from_start;
} canopen_interfaces__srv__COPositionTrajectory_Request;

// Struct for a sequence of canopen_interfaces__srv__COPositionTrajectory_Request.
typedef struct canopen_interfaces__srv__COPositionTrajectory_Request__Sequence
{
  canopen_interfaces__srv__COPositionTrajectory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} canopen_interfaces__srv__COPositionTrajectory_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/COPositionTrajectory in the package canopen_interfaces.
typedef struct canopen_interfaces__srv__COPositionTrajectory_Response
{
  bool success;
  uint64_t epoch;
  rosidl_runtime_c__String message;
} canopen_interfaces__srv__COPositionTrajectory_Response;

// Struct for a sequence of canopen_interfaces__srv__COPositionTrajectory_Response.
typedef struct canopen_interfaces__srv__COPositionTrajectory_Response__Sequence
{
  canopen_interfaces__srv__COPositionTrajectory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} canopen_interfaces__srv__COPositionTrajectory_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CANOPEN_INTERFACES__SRV__DETAIL__CO_POSITION_TRAJECTORY__STRUCT_H_
