// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vision_pkg:msg/DetectedObject3DArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vision_pkg/msg/detail/detected_object3_d_array__rosidl_typesupport_introspection_c.h"
#include "vision_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vision_pkg/msg/detail/detected_object3_d_array__functions.h"
#include "vision_pkg/msg/detail/detected_object3_d_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `objects`
#include "vision_pkg/msg/detected_object3_d.h"
// Member `objects`
#include "vision_pkg/msg/detail/detected_object3_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__DetectedObject3DArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vision_pkg__msg__DetectedObject3DArray__init(message_memory);
}

void vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__DetectedObject3DArray_fini_function(void * message_memory)
{
  vision_pkg__msg__DetectedObject3DArray__fini(message_memory);
}

size_t vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__size_function__DetectedObject3DArray__objects(
  const void * untyped_member)
{
  const vision_pkg__msg__DetectedObject3D__Sequence * member =
    (const vision_pkg__msg__DetectedObject3D__Sequence *)(untyped_member);
  return member->size;
}

const void * vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__get_const_function__DetectedObject3DArray__objects(
  const void * untyped_member, size_t index)
{
  const vision_pkg__msg__DetectedObject3D__Sequence * member =
    (const vision_pkg__msg__DetectedObject3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__get_function__DetectedObject3DArray__objects(
  void * untyped_member, size_t index)
{
  vision_pkg__msg__DetectedObject3D__Sequence * member =
    (vision_pkg__msg__DetectedObject3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__fetch_function__DetectedObject3DArray__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const vision_pkg__msg__DetectedObject3D * item =
    ((const vision_pkg__msg__DetectedObject3D *)
    vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__get_const_function__DetectedObject3DArray__objects(untyped_member, index));
  vision_pkg__msg__DetectedObject3D * value =
    (vision_pkg__msg__DetectedObject3D *)(untyped_value);
  *value = *item;
}

void vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__assign_function__DetectedObject3DArray__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  vision_pkg__msg__DetectedObject3D * item =
    ((vision_pkg__msg__DetectedObject3D *)
    vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__get_function__DetectedObject3DArray__objects(untyped_member, index));
  const vision_pkg__msg__DetectedObject3D * value =
    (const vision_pkg__msg__DetectedObject3D *)(untyped_value);
  *item = *value;
}

bool vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__resize_function__DetectedObject3DArray__objects(
  void * untyped_member, size_t size)
{
  vision_pkg__msg__DetectedObject3D__Sequence * member =
    (vision_pkg__msg__DetectedObject3D__Sequence *)(untyped_member);
  vision_pkg__msg__DetectedObject3D__Sequence__fini(member);
  return vision_pkg__msg__DetectedObject3D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__DetectedObject3DArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_pkg__msg__DetectedObject3DArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_pkg__msg__DetectedObject3DArray, objects),  // bytes offset in struct
    NULL,  // default value
    vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__size_function__DetectedObject3DArray__objects,  // size() function pointer
    vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__get_const_function__DetectedObject3DArray__objects,  // get_const(index) function pointer
    vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__get_function__DetectedObject3DArray__objects,  // get(index) function pointer
    vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__fetch_function__DetectedObject3DArray__objects,  // fetch(index, &value) function pointer
    vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__assign_function__DetectedObject3DArray__objects,  // assign(index, value) function pointer
    vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__resize_function__DetectedObject3DArray__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__DetectedObject3DArray_message_members = {
  "vision_pkg__msg",  // message namespace
  "DetectedObject3DArray",  // message name
  2,  // number of fields
  sizeof(vision_pkg__msg__DetectedObject3DArray),
  vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__DetectedObject3DArray_message_member_array,  // message members
  vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__DetectedObject3DArray_init_function,  // function to initialize message memory (memory has to be allocated)
  vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__DetectedObject3DArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__DetectedObject3DArray_message_type_support_handle = {
  0,
  &vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__DetectedObject3DArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vision_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_pkg, msg, DetectedObject3DArray)() {
  vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__DetectedObject3DArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__DetectedObject3DArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_pkg, msg, DetectedObject3D)();
  if (!vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__DetectedObject3DArray_message_type_support_handle.typesupport_identifier) {
    vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__DetectedObject3DArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &vision_pkg__msg__DetectedObject3DArray__rosidl_typesupport_introspection_c__DetectedObject3DArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
