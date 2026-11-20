// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from vision_pkg:srv/SetDetectionEnabled.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "vision_pkg/srv/detail/set_detection_enabled__struct.h"
#include "vision_pkg/srv/detail/set_detection_enabled__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool vision_pkg__srv__set_detection_enabled__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[66];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("vision_pkg.srv._set_detection_enabled.SetDetectionEnabled_Request", full_classname_dest, 65) == 0);
  }
  vision_pkg__srv__SetDetectionEnabled_Request * ros_message = _ros_message;
  {  // enable_all
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable_all");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable_all = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enable_yolo
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable_yolo");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable_yolo = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enable_qrcode
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable_qrcode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable_qrcode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enable_motion
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable_motion");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable_motion = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enable_obstacle_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable_obstacle_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable_obstacle_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enable_center_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable_center_distance");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable_center_distance = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * vision_pkg__srv__set_detection_enabled__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetDetectionEnabled_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("vision_pkg.srv._set_detection_enabled");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetDetectionEnabled_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  vision_pkg__srv__SetDetectionEnabled_Request * ros_message = (vision_pkg__srv__SetDetectionEnabled_Request *)raw_ros_message;
  {  // enable_all
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable_all ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable_all", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enable_yolo
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable_yolo ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable_yolo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enable_qrcode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable_qrcode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable_qrcode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enable_motion
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable_motion ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable_motion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enable_obstacle_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable_obstacle_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable_obstacle_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enable_center_distance
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable_center_distance ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable_center_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "vision_pkg/srv/detail/set_detection_enabled__struct.h"
// already included above
// #include "vision_pkg/srv/detail/set_detection_enabled__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool vision_pkg__srv__set_detection_enabled__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("vision_pkg.srv._set_detection_enabled.SetDetectionEnabled_Response", full_classname_dest, 66) == 0);
  }
  vision_pkg__srv__SetDetectionEnabled_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // yolo_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "yolo_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->yolo_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // qrcode_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "qrcode_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->qrcode_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // motion_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "motion_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->motion_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // obstacle_warning_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_warning_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->obstacle_warning_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // center_distance_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_distance_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->center_distance_enabled = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * vision_pkg__srv__set_detection_enabled__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetDetectionEnabled_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("vision_pkg.srv._set_detection_enabled");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetDetectionEnabled_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  vision_pkg__srv__SetDetectionEnabled_Response * ros_message = (vision_pkg__srv__SetDetectionEnabled_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yolo_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->yolo_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yolo_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qrcode_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->qrcode_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "qrcode_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motion_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->motion_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motion_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_warning_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->obstacle_warning_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_warning_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_distance_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->center_distance_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_distance_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
