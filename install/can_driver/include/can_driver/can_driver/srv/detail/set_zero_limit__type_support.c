// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from can_driver:srv/SetZeroLimit.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "can_driver/srv/detail/set_zero_limit__rosidl_typesupport_introspection_c.h"
#include "can_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "can_driver/srv/detail/set_zero_limit__functions.h"
#include "can_driver/srv/detail/set_zero_limit__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void can_driver__srv__SetZeroLimit_Request__rosidl_typesupport_introspection_c__SetZeroLimit_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  can_driver__srv__SetZeroLimit_Request__init(message_memory);
}

void can_driver__srv__SetZeroLimit_Request__rosidl_typesupport_introspection_c__SetZeroLimit_Request_fini_function(void * message_memory)
{
  can_driver__srv__SetZeroLimit_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember can_driver__srv__SetZeroLimit_Request__rosidl_typesupport_introspection_c__SetZeroLimit_Request_message_member_array[7] = {
  {
    "motor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(can_driver__srv__SetZeroLimit_Request, motor_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "zero_offset_rad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(can_driver__srv__SetZeroLimit_Request, zero_offset_rad),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "use_current_position_as_zero",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(can_driver__srv__SetZeroLimit_Request, use_current_position_as_zero),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_position_rad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(can_driver__srv__SetZeroLimit_Request, min_position_rad),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_position_rad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(can_driver__srv__SetZeroLimit_Request, max_position_rad),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "use_urdf_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(can_driver__srv__SetZeroLimit_Request, use_urdf_limits),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "apply_to_motor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(can_driver__srv__SetZeroLimit_Request, apply_to_motor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers can_driver__srv__SetZeroLimit_Request__rosidl_typesupport_introspection_c__SetZeroLimit_Request_message_members = {
  "can_driver__srv",  // message namespace
  "SetZeroLimit_Request",  // message name
  7,  // number of fields
  sizeof(can_driver__srv__SetZeroLimit_Request),
  can_driver__srv__SetZeroLimit_Request__rosidl_typesupport_introspection_c__SetZeroLimit_Request_message_member_array,  // message members
  can_driver__srv__SetZeroLimit_Request__rosidl_typesupport_introspection_c__SetZeroLimit_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  can_driver__srv__SetZeroLimit_Request__rosidl_typesupport_introspection_c__SetZeroLimit_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t can_driver__srv__SetZeroLimit_Request__rosidl_typesupport_introspection_c__SetZeroLimit_Request_message_type_support_handle = {
  0,
  &can_driver__srv__SetZeroLimit_Request__rosidl_typesupport_introspection_c__SetZeroLimit_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_can_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, can_driver, srv, SetZeroLimit_Request)() {
  if (!can_driver__srv__SetZeroLimit_Request__rosidl_typesupport_introspection_c__SetZeroLimit_Request_message_type_support_handle.typesupport_identifier) {
    can_driver__srv__SetZeroLimit_Request__rosidl_typesupport_introspection_c__SetZeroLimit_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &can_driver__srv__SetZeroLimit_Request__rosidl_typesupport_introspection_c__SetZeroLimit_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "can_driver/srv/detail/set_zero_limit__rosidl_typesupport_introspection_c.h"
// already included above
// #include "can_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "can_driver/srv/detail/set_zero_limit__functions.h"
// already included above
// #include "can_driver/srv/detail/set_zero_limit__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void can_driver__srv__SetZeroLimit_Response__rosidl_typesupport_introspection_c__SetZeroLimit_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  can_driver__srv__SetZeroLimit_Response__init(message_memory);
}

void can_driver__srv__SetZeroLimit_Response__rosidl_typesupport_introspection_c__SetZeroLimit_Response_fini_function(void * message_memory)
{
  can_driver__srv__SetZeroLimit_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember can_driver__srv__SetZeroLimit_Response__rosidl_typesupport_introspection_c__SetZeroLimit_Response_message_member_array[6] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(can_driver__srv__SetZeroLimit_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(can_driver__srv__SetZeroLimit_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "applied_zero_offset_rad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(can_driver__srv__SetZeroLimit_Response, applied_zero_offset_rad),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "applied_min_rad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(can_driver__srv__SetZeroLimit_Response, applied_min_rad),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "applied_max_rad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(can_driver__srv__SetZeroLimit_Response, applied_max_rad),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_position_rad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(can_driver__srv__SetZeroLimit_Response, current_position_rad),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers can_driver__srv__SetZeroLimit_Response__rosidl_typesupport_introspection_c__SetZeroLimit_Response_message_members = {
  "can_driver__srv",  // message namespace
  "SetZeroLimit_Response",  // message name
  6,  // number of fields
  sizeof(can_driver__srv__SetZeroLimit_Response),
  can_driver__srv__SetZeroLimit_Response__rosidl_typesupport_introspection_c__SetZeroLimit_Response_message_member_array,  // message members
  can_driver__srv__SetZeroLimit_Response__rosidl_typesupport_introspection_c__SetZeroLimit_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  can_driver__srv__SetZeroLimit_Response__rosidl_typesupport_introspection_c__SetZeroLimit_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t can_driver__srv__SetZeroLimit_Response__rosidl_typesupport_introspection_c__SetZeroLimit_Response_message_type_support_handle = {
  0,
  &can_driver__srv__SetZeroLimit_Response__rosidl_typesupport_introspection_c__SetZeroLimit_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_can_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, can_driver, srv, SetZeroLimit_Response)() {
  if (!can_driver__srv__SetZeroLimit_Response__rosidl_typesupport_introspection_c__SetZeroLimit_Response_message_type_support_handle.typesupport_identifier) {
    can_driver__srv__SetZeroLimit_Response__rosidl_typesupport_introspection_c__SetZeroLimit_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &can_driver__srv__SetZeroLimit_Response__rosidl_typesupport_introspection_c__SetZeroLimit_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "can_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "can_driver/srv/detail/set_zero_limit__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers can_driver__srv__detail__set_zero_limit__rosidl_typesupport_introspection_c__SetZeroLimit_service_members = {
  "can_driver__srv",  // service namespace
  "SetZeroLimit",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // can_driver__srv__detail__set_zero_limit__rosidl_typesupport_introspection_c__SetZeroLimit_Request_message_type_support_handle,
  NULL  // response message
  // can_driver__srv__detail__set_zero_limit__rosidl_typesupport_introspection_c__SetZeroLimit_Response_message_type_support_handle
};

static rosidl_service_type_support_t can_driver__srv__detail__set_zero_limit__rosidl_typesupport_introspection_c__SetZeroLimit_service_type_support_handle = {
  0,
  &can_driver__srv__detail__set_zero_limit__rosidl_typesupport_introspection_c__SetZeroLimit_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, can_driver, srv, SetZeroLimit_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, can_driver, srv, SetZeroLimit_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_can_driver
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, can_driver, srv, SetZeroLimit)() {
  if (!can_driver__srv__detail__set_zero_limit__rosidl_typesupport_introspection_c__SetZeroLimit_service_type_support_handle.typesupport_identifier) {
    can_driver__srv__detail__set_zero_limit__rosidl_typesupport_introspection_c__SetZeroLimit_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)can_driver__srv__detail__set_zero_limit__rosidl_typesupport_introspection_c__SetZeroLimit_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, can_driver, srv, SetZeroLimit_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, can_driver, srv, SetZeroLimit_Response)()->data;
  }

  return &can_driver__srv__detail__set_zero_limit__rosidl_typesupport_introspection_c__SetZeroLimit_service_type_support_handle;
}
