# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vision_pkg:msg/ObstacleWarning.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObstacleWarning(type):
    """Metaclass of message 'ObstacleWarning'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('vision_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vision_pkg.msg.ObstacleWarning')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__obstacle_warning
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__obstacle_warning
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__obstacle_warning
            cls._TYPE_SUPPORT = module.type_support_msg__msg__obstacle_warning
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__obstacle_warning

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObstacleWarning(metaclass=Metaclass_ObstacleWarning):
    """Message class 'ObstacleWarning'."""

    __slots__ = [
        '_left_dist',
        '_center_dist',
        '_right_dist',
        '_left_warn',
        '_center_warn',
        '_right_warn',
    ]

    _fields_and_field_types = {
        'left_dist': 'float',
        'center_dist': 'float',
        'right_dist': 'float',
        'left_warn': 'boolean',
        'center_warn': 'boolean',
        'right_warn': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.left_dist = kwargs.get('left_dist', float())
        self.center_dist = kwargs.get('center_dist', float())
        self.right_dist = kwargs.get('right_dist', float())
        self.left_warn = kwargs.get('left_warn', bool())
        self.center_warn = kwargs.get('center_warn', bool())
        self.right_warn = kwargs.get('right_warn', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.left_dist != other.left_dist:
            return False
        if self.center_dist != other.center_dist:
            return False
        if self.right_dist != other.right_dist:
            return False
        if self.left_warn != other.left_warn:
            return False
        if self.center_warn != other.center_warn:
            return False
        if self.right_warn != other.right_warn:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def left_dist(self):
        """Message field 'left_dist'."""
        return self._left_dist

    @left_dist.setter
    def left_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_dist' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_dist' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_dist = value

    @builtins.property
    def center_dist(self):
        """Message field 'center_dist'."""
        return self._center_dist

    @center_dist.setter
    def center_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'center_dist' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'center_dist' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._center_dist = value

    @builtins.property
    def right_dist(self):
        """Message field 'right_dist'."""
        return self._right_dist

    @right_dist.setter
    def right_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_dist' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_dist' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_dist = value

    @builtins.property
    def left_warn(self):
        """Message field 'left_warn'."""
        return self._left_warn

    @left_warn.setter
    def left_warn(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'left_warn' field must be of type 'bool'"
        self._left_warn = value

    @builtins.property
    def center_warn(self):
        """Message field 'center_warn'."""
        return self._center_warn

    @center_warn.setter
    def center_warn(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'center_warn' field must be of type 'bool'"
        self._center_warn = value

    @builtins.property
    def right_warn(self):
        """Message field 'right_warn'."""
        return self._right_warn

    @right_warn.setter
    def right_warn(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'right_warn' field must be of type 'bool'"
        self._right_warn = value
