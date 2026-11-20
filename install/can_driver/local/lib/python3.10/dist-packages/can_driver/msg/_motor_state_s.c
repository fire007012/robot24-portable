// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from can_driver:msg/MotorState.idl
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
#include "can_driver/msg/detail/motor_state__struct.h"
#include "can_driver/msg/detail/motor_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool can_driver__msg__motor_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("can_driver.msg._motor_state.MotorState", full_classname_dest, 38) == 0);
  }
  can_driver__msg__MotorState * ros_message = _ros_message;
  {  // motor_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // position
    PyObject * field = PyObject_GetAttrString(_pymsg, "position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->position = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->velocity = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // current
    PyObject * field = PyObject_GetAttrString(_pymsg, "current");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // joint_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint_position = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // joint_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mode_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mode_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // status_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->status_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // position_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->position_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // velocity_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->velocity_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // current_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->current_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // feedback_fresh
    PyObject * field = PyObject_GetAttrString(_pymsg, "feedback_fresh");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->feedback_fresh = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * can_driver__msg__motor_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("can_driver.msg._motor_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  can_driver__msg__MotorState * ros_message = (can_driver__msg__MotorState *)raw_ros_message;
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
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mode_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->status_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->position_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->velocity_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->current_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // feedback_fresh
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->feedback_fresh ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "feedback_fresh", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
