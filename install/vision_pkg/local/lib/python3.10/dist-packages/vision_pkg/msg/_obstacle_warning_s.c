// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from vision_pkg:msg/ObstacleWarning.idl
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
#include "vision_pkg/msg/detail/obstacle_warning__struct.h"
#include "vision_pkg/msg/detail/obstacle_warning__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool vision_pkg__msg__obstacle_warning__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("vision_pkg.msg._obstacle_warning.ObstacleWarning", full_classname_dest, 48) == 0);
  }
  vision_pkg__msg__ObstacleWarning * ros_message = _ros_message;
  {  // left_dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_dist");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_dist = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // center_dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_dist");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->center_dist = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_dist");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_dist = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_warn
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_warn");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->left_warn = (Py_True == field);
    Py_DECREF(field);
  }
  {  // center_warn
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_warn");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->center_warn = (Py_True == field);
    Py_DECREF(field);
  }
  {  // right_warn
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_warn");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->right_warn = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * vision_pkg__msg__obstacle_warning__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObstacleWarning */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("vision_pkg.msg._obstacle_warning");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObstacleWarning");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  vision_pkg__msg__ObstacleWarning * ros_message = (vision_pkg__msg__ObstacleWarning *)raw_ros_message;
  {  // left_dist
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_dist
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->center_dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_dist
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_warn
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->left_warn ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_warn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_warn
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->center_warn ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_warn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_warn
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->right_warn ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_warn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
