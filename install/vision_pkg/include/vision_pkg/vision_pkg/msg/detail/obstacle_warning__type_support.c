// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vision_pkg:msg/ObstacleWarning.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vision_pkg/msg/detail/obstacle_warning__rosidl_typesupport_introspection_c.h"
#include "vision_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vision_pkg/msg/detail/obstacle_warning__functions.h"
#include "vision_pkg/msg/detail/obstacle_warning__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void vision_pkg__msg__ObstacleWarning__rosidl_typesupport_introspection_c__ObstacleWarning_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vision_pkg__msg__ObstacleWarning__init(message_memory);
}

void vision_pkg__msg__ObstacleWarning__rosidl_typesupport_introspection_c__ObstacleWarning_fini_function(void * message_memory)
{
  vision_pkg__msg__ObstacleWarning__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember vision_pkg__msg__ObstacleWarning__rosidl_typesupport_introspection_c__ObstacleWarning_message_member_array[6] = {
  {
    "left_dist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_pkg__msg__ObstacleWarning, left_dist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "center_dist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_pkg__msg__ObstacleWarning, center_dist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_dist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_pkg__msg__ObstacleWarning, right_dist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_warn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_pkg__msg__ObstacleWarning, left_warn),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "center_warn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_pkg__msg__ObstacleWarning, center_warn),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_warn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_pkg__msg__ObstacleWarning, right_warn),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers vision_pkg__msg__ObstacleWarning__rosidl_typesupport_introspection_c__ObstacleWarning_message_members = {
  "vision_pkg__msg",  // message namespace
  "ObstacleWarning",  // message name
  6,  // number of fields
  sizeof(vision_pkg__msg__ObstacleWarning),
  vision_pkg__msg__ObstacleWarning__rosidl_typesupport_introspection_c__ObstacleWarning_message_member_array,  // message members
  vision_pkg__msg__ObstacleWarning__rosidl_typesupport_introspection_c__ObstacleWarning_init_function,  // function to initialize message memory (memory has to be allocated)
  vision_pkg__msg__ObstacleWarning__rosidl_typesupport_introspection_c__ObstacleWarning_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t vision_pkg__msg__ObstacleWarning__rosidl_typesupport_introspection_c__ObstacleWarning_message_type_support_handle = {
  0,
  &vision_pkg__msg__ObstacleWarning__rosidl_typesupport_introspection_c__ObstacleWarning_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vision_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_pkg, msg, ObstacleWarning)() {
  if (!vision_pkg__msg__ObstacleWarning__rosidl_typesupport_introspection_c__ObstacleWarning_message_type_support_handle.typesupport_identifier) {
    vision_pkg__msg__ObstacleWarning__rosidl_typesupport_introspection_c__ObstacleWarning_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &vision_pkg__msg__ObstacleWarning__rosidl_typesupport_introspection_c__ObstacleWarning_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
