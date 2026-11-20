// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vision_pkg:srv/SetDetectionEnabled.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vision_pkg/srv/detail/set_detection_enabled__rosidl_typesupport_introspection_c.h"
#include "vision_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vision_pkg/srv/detail/set_detection_enabled__functions.h"
#include "vision_pkg/srv/detail/set_detection_enabled__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void vision_pkg__srv__SetDetectionEnabled_Request__rosidl_typesupport_introspection_c__SetDetectionEnabled_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vision_pkg__srv__SetDetectionEnabled_Request__init(message_memory);
}

void vision_pkg__srv__SetDetectionEnabled_Request__rosidl_typesupport_introspection_c__SetDetectionEnabled_Request_fini_function(void * message_memory)
{
  vision_pkg__srv__SetDetectionEnabled_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember vision_pkg__srv__SetDetectionEnabled_Request__rosidl_typesupport_introspection_c__SetDetectionEnabled_Request_message_member_array[6] = {
  {
    "enable_all",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_pkg__srv__SetDetectionEnabled_Request, enable_all),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enable_yolo",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_pkg__srv__SetDetectionEnabled_Request, enable_yolo),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enable_qrcode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_pkg__srv__SetDetectionEnabled_Request, enable_qrcode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enable_motion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_pkg__srv__SetDetectionEnabled_Request, enable_motion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enable_obstacle_warning",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_pkg__srv__SetDetectionEnabled_Request, enable_obstacle_warning),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enable_center_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_pkg__srv__SetDetectionEnabled_Request, enable_center_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers vision_pkg__srv__SetDetectionEnabled_Request__rosidl_typesupport_introspection_c__SetDetectionEnabled_Request_message_members = {
  "vision_pkg__srv",  // message namespace
  "SetDetectionEnabled_Request",  // message name
  6,  // number of fields
  sizeof(vision_pkg__srv__SetDetectionEnabled_Request),
  vision_pkg__srv__SetDetectionEnabled_Request__rosidl_typesupport_introspection_c__SetDetectionEnabled_Request_message_member_array,  // message members
  vision_pkg__srv__SetDetectionEnabled_Request__rosidl_typesupport_introspection_c__SetDetectionEnabled_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  vision_pkg__srv__SetDetectionEnabled_Request__rosidl_typesupport_introspection_c__SetDetectionEnabled_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t vision_pkg__srv__SetDetectionEnabled_Request__rosidl_typesupport_introspection_c__SetDetectionEnabled_Request_message_type_support_handle = {
  0,
  &vision_pkg__srv__SetDetectionEnabled_Request__rosidl_typesupport_introspection_c__SetDetectionEnabled_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vision_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_pkg, srv, SetDetectionEnabled_Request)() {
  if (!vision_pkg__srv__SetDetectionEnabled_Request__rosidl_typesupport_introspection_c__SetDetectionEnabled_Request_message_type_support_handle.typesupport_identifier) {
    vision_pkg__srv__SetDetectionEnabled_Request__rosidl_typesupport_introspection_c__SetDetectionEnabled_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &vision_pkg__srv__SetDetectionEnabled_Request__rosidl_typesupport_introspection_c__SetDetectionEnabled_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "vision_pkg/srv/detail/set_detection_enabled__rosidl_typesupport_introspection_c.h"
// already included above
// #include "vision_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "vision_pkg/srv/detail/set_detection_enabled__functions.h"
// already included above
// #include "vision_pkg/srv/detail/set_detection_enabled__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void vision_pkg__srv__SetDetectionEnabled_Response__rosidl_typesupport_introspection_c__SetDetectionEnabled_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vision_pkg__srv__SetDetectionEnabled_Response__init(message_memory);
}

void vision_pkg__srv__SetDetectionEnabled_Response__rosidl_typesupport_introspection_c__SetDetectionEnabled_Response_fini_function(void * message_memory)
{
  vision_pkg__srv__SetDetectionEnabled_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember vision_pkg__srv__SetDetectionEnabled_Response__rosidl_typesupport_introspection_c__SetDetectionEnabled_Response_message_member_array[7] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_pkg__srv__SetDetectionEnabled_Response, success),  // bytes offset in struct
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
    offsetof(vision_pkg__srv__SetDetectionEnabled_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yolo_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_pkg__srv__SetDetectionEnabled_Response, yolo_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "qrcode_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_pkg__srv__SetDetectionEnabled_Response, qrcode_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motion_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_pkg__srv__SetDetectionEnabled_Response, motion_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obstacle_warning_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_pkg__srv__SetDetectionEnabled_Response, obstacle_warning_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "center_distance_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_pkg__srv__SetDetectionEnabled_Response, center_distance_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers vision_pkg__srv__SetDetectionEnabled_Response__rosidl_typesupport_introspection_c__SetDetectionEnabled_Response_message_members = {
  "vision_pkg__srv",  // message namespace
  "SetDetectionEnabled_Response",  // message name
  7,  // number of fields
  sizeof(vision_pkg__srv__SetDetectionEnabled_Response),
  vision_pkg__srv__SetDetectionEnabled_Response__rosidl_typesupport_introspection_c__SetDetectionEnabled_Response_message_member_array,  // message members
  vision_pkg__srv__SetDetectionEnabled_Response__rosidl_typesupport_introspection_c__SetDetectionEnabled_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  vision_pkg__srv__SetDetectionEnabled_Response__rosidl_typesupport_introspection_c__SetDetectionEnabled_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t vision_pkg__srv__SetDetectionEnabled_Response__rosidl_typesupport_introspection_c__SetDetectionEnabled_Response_message_type_support_handle = {
  0,
  &vision_pkg__srv__SetDetectionEnabled_Response__rosidl_typesupport_introspection_c__SetDetectionEnabled_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vision_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_pkg, srv, SetDetectionEnabled_Response)() {
  if (!vision_pkg__srv__SetDetectionEnabled_Response__rosidl_typesupport_introspection_c__SetDetectionEnabled_Response_message_type_support_handle.typesupport_identifier) {
    vision_pkg__srv__SetDetectionEnabled_Response__rosidl_typesupport_introspection_c__SetDetectionEnabled_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &vision_pkg__srv__SetDetectionEnabled_Response__rosidl_typesupport_introspection_c__SetDetectionEnabled_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "vision_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "vision_pkg/srv/detail/set_detection_enabled__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers vision_pkg__srv__detail__set_detection_enabled__rosidl_typesupport_introspection_c__SetDetectionEnabled_service_members = {
  "vision_pkg__srv",  // service namespace
  "SetDetectionEnabled",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // vision_pkg__srv__detail__set_detection_enabled__rosidl_typesupport_introspection_c__SetDetectionEnabled_Request_message_type_support_handle,
  NULL  // response message
  // vision_pkg__srv__detail__set_detection_enabled__rosidl_typesupport_introspection_c__SetDetectionEnabled_Response_message_type_support_handle
};

static rosidl_service_type_support_t vision_pkg__srv__detail__set_detection_enabled__rosidl_typesupport_introspection_c__SetDetectionEnabled_service_type_support_handle = {
  0,
  &vision_pkg__srv__detail__set_detection_enabled__rosidl_typesupport_introspection_c__SetDetectionEnabled_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_pkg, srv, SetDetectionEnabled_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_pkg, srv, SetDetectionEnabled_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vision_pkg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_pkg, srv, SetDetectionEnabled)() {
  if (!vision_pkg__srv__detail__set_detection_enabled__rosidl_typesupport_introspection_c__SetDetectionEnabled_service_type_support_handle.typesupport_identifier) {
    vision_pkg__srv__detail__set_detection_enabled__rosidl_typesupport_introspection_c__SetDetectionEnabled_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)vision_pkg__srv__detail__set_detection_enabled__rosidl_typesupport_introspection_c__SetDetectionEnabled_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_pkg, srv, SetDetectionEnabled_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_pkg, srv, SetDetectionEnabled_Response)()->data;
  }

  return &vision_pkg__srv__detail__set_detection_enabled__rosidl_typesupport_introspection_c__SetDetectionEnabled_service_type_support_handle;
}
