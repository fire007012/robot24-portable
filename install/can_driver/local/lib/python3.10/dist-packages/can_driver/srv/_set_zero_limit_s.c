// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from can_driver:srv/SetZeroLimit.idl
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
#include "can_driver/srv/detail/set_zero_limit__struct.h"
#include "can_driver/srv/detail/set_zero_limit__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool can_driver__srv__set_zero_limit__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("can_driver.srv._set_zero_limit.SetZeroLimit_Request", full_classname_dest, 51) == 0);
  }
  can_driver__srv__SetZeroLimit_Request * ros_message = _ros_message;
  {  // motor_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // zero_offset_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "zero_offset_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->zero_offset_rad = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // use_current_position_as_zero
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_current_position_as_zero");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_current_position_as_zero = (Py_True == field);
    Py_DECREF(field);
  }
  {  // min_position_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_position_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_position_rad = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_position_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_position_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_position_rad = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // use_urdf_limits
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_urdf_limits");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_urdf_limits = (Py_True == field);
    Py_DECREF(field);
  }
  {  // apply_to_motor
    PyObject * field = PyObject_GetAttrString(_pymsg, "apply_to_motor");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->apply_to_motor = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * can_driver__srv__set_zero_limit__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetZeroLimit_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("can_driver.srv._set_zero_limit");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetZeroLimit_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  can_driver__srv__SetZeroLimit_Request * ros_message = (can_driver__srv__SetZeroLimit_Request *)raw_ros_message;
  {  // motor_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->motor_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // zero_offset_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->zero_offset_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "zero_offset_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_current_position_as_zero
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_current_position_as_zero ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_current_position_as_zero", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_position_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_position_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_position_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_position_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_position_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_position_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_urdf_limits
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_urdf_limits ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_urdf_limits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // apply_to_motor
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->apply_to_motor ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "apply_to_motor", field);
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
// #include "can_driver/srv/detail/set_zero_limit__struct.h"
// already included above
// #include "can_driver/srv/detail/set_zero_limit__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool can_driver__srv__set_zero_limit__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("can_driver.srv._set_zero_limit.SetZeroLimit_Response", full_classname_dest, 52) == 0);
  }
  can_driver__srv__SetZeroLimit_Response * ros_message = _ros_message;
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
  {  // applied_zero_offset_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "applied_zero_offset_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->applied_zero_offset_rad = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // applied_min_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "applied_min_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->applied_min_rad = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // applied_max_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "applied_max_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->applied_max_rad = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_position_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_position_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_position_rad = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * can_driver__srv__set_zero_limit__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetZeroLimit_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("can_driver.srv._set_zero_limit");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetZeroLimit_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  can_driver__srv__SetZeroLimit_Response * ros_message = (can_driver__srv__SetZeroLimit_Response *)raw_ros_message;
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
  {  // applied_zero_offset_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->applied_zero_offset_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "applied_zero_offset_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // applied_min_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->applied_min_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "applied_min_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // applied_max_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->applied_max_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "applied_max_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_position_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_position_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_position_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
