# generated from rosidl_generator_py/resource/_idl.py.em
# with input from can_driver:srv/SetZeroLimit.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetZeroLimit_Request(type):
    """Metaclass of message 'SetZeroLimit_Request'."""

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
            module = import_type_support('can_driver')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'can_driver.srv.SetZeroLimit_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_zero_limit__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_zero_limit__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_zero_limit__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_zero_limit__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_zero_limit__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetZeroLimit_Request(metaclass=Metaclass_SetZeroLimit_Request):
    """Message class 'SetZeroLimit_Request'."""

    __slots__ = [
        '_motor_id',
        '_zero_offset_rad',
        '_use_current_position_as_zero',
        '_min_position_rad',
        '_max_position_rad',
        '_use_urdf_limits',
        '_apply_to_motor',
    ]

    _fields_and_field_types = {
        'motor_id': 'uint16',
        'zero_offset_rad': 'double',
        'use_current_position_as_zero': 'boolean',
        'min_position_rad': 'double',
        'max_position_rad': 'double',
        'use_urdf_limits': 'boolean',
        'apply_to_motor': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motor_id = kwargs.get('motor_id', int())
        self.zero_offset_rad = kwargs.get('zero_offset_rad', float())
        self.use_current_position_as_zero = kwargs.get('use_current_position_as_zero', bool())
        self.min_position_rad = kwargs.get('min_position_rad', float())
        self.max_position_rad = kwargs.get('max_position_rad', float())
        self.use_urdf_limits = kwargs.get('use_urdf_limits', bool())
        self.apply_to_motor = kwargs.get('apply_to_motor', bool())

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
        if self.motor_id != other.motor_id:
            return False
        if self.zero_offset_rad != other.zero_offset_rad:
            return False
        if self.use_current_position_as_zero != other.use_current_position_as_zero:
            return False
        if self.min_position_rad != other.min_position_rad:
            return False
        if self.max_position_rad != other.max_position_rad:
            return False
        if self.use_urdf_limits != other.use_urdf_limits:
            return False
        if self.apply_to_motor != other.apply_to_motor:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def motor_id(self):
        """Message field 'motor_id'."""
        return self._motor_id

    @motor_id.setter
    def motor_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'motor_id' field must be an unsigned integer in [0, 65535]"
        self._motor_id = value

    @builtins.property
    def zero_offset_rad(self):
        """Message field 'zero_offset_rad'."""
        return self._zero_offset_rad

    @zero_offset_rad.setter
    def zero_offset_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'zero_offset_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'zero_offset_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._zero_offset_rad = value

    @builtins.property
    def use_current_position_as_zero(self):
        """Message field 'use_current_position_as_zero'."""
        return self._use_current_position_as_zero

    @use_current_position_as_zero.setter
    def use_current_position_as_zero(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_current_position_as_zero' field must be of type 'bool'"
        self._use_current_position_as_zero = value

    @builtins.property
    def min_position_rad(self):
        """Message field 'min_position_rad'."""
        return self._min_position_rad

    @min_position_rad.setter
    def min_position_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_position_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_position_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_position_rad = value

    @builtins.property
    def max_position_rad(self):
        """Message field 'max_position_rad'."""
        return self._max_position_rad

    @max_position_rad.setter
    def max_position_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_position_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_position_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_position_rad = value

    @builtins.property
    def use_urdf_limits(self):
        """Message field 'use_urdf_limits'."""
        return self._use_urdf_limits

    @use_urdf_limits.setter
    def use_urdf_limits(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_urdf_limits' field must be of type 'bool'"
        self._use_urdf_limits = value

    @builtins.property
    def apply_to_motor(self):
        """Message field 'apply_to_motor'."""
        return self._apply_to_motor

    @apply_to_motor.setter
    def apply_to_motor(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'apply_to_motor' field must be of type 'bool'"
        self._apply_to_motor = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_SetZeroLimit_Response(type):
    """Metaclass of message 'SetZeroLimit_Response'."""

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
            module = import_type_support('can_driver')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'can_driver.srv.SetZeroLimit_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_zero_limit__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_zero_limit__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_zero_limit__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_zero_limit__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_zero_limit__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetZeroLimit_Response(metaclass=Metaclass_SetZeroLimit_Response):
    """Message class 'SetZeroLimit_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_applied_zero_offset_rad',
        '_applied_min_rad',
        '_applied_max_rad',
        '_current_position_rad',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'applied_zero_offset_rad': 'double',
        'applied_min_rad': 'double',
        'applied_max_rad': 'double',
        'current_position_rad': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())
        self.applied_zero_offset_rad = kwargs.get('applied_zero_offset_rad', float())
        self.applied_min_rad = kwargs.get('applied_min_rad', float())
        self.applied_max_rad = kwargs.get('applied_max_rad', float())
        self.current_position_rad = kwargs.get('current_position_rad', float())

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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        if self.applied_zero_offset_rad != other.applied_zero_offset_rad:
            return False
        if self.applied_min_rad != other.applied_min_rad:
            return False
        if self.applied_max_rad != other.applied_max_rad:
            return False
        if self.current_position_rad != other.current_position_rad:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def applied_zero_offset_rad(self):
        """Message field 'applied_zero_offset_rad'."""
        return self._applied_zero_offset_rad

    @applied_zero_offset_rad.setter
    def applied_zero_offset_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'applied_zero_offset_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'applied_zero_offset_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._applied_zero_offset_rad = value

    @builtins.property
    def applied_min_rad(self):
        """Message field 'applied_min_rad'."""
        return self._applied_min_rad

    @applied_min_rad.setter
    def applied_min_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'applied_min_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'applied_min_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._applied_min_rad = value

    @builtins.property
    def applied_max_rad(self):
        """Message field 'applied_max_rad'."""
        return self._applied_max_rad

    @applied_max_rad.setter
    def applied_max_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'applied_max_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'applied_max_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._applied_max_rad = value

    @builtins.property
    def current_position_rad(self):
        """Message field 'current_position_rad'."""
        return self._current_position_rad

    @current_position_rad.setter
    def current_position_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_position_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_position_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_position_rad = value


class Metaclass_SetZeroLimit(type):
    """Metaclass of service 'SetZeroLimit'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('can_driver')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'can_driver.srv.SetZeroLimit')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_zero_limit

            from can_driver.srv import _set_zero_limit
            if _set_zero_limit.Metaclass_SetZeroLimit_Request._TYPE_SUPPORT is None:
                _set_zero_limit.Metaclass_SetZeroLimit_Request.__import_type_support__()
            if _set_zero_limit.Metaclass_SetZeroLimit_Response._TYPE_SUPPORT is None:
                _set_zero_limit.Metaclass_SetZeroLimit_Response.__import_type_support__()


class SetZeroLimit(metaclass=Metaclass_SetZeroLimit):
    from can_driver.srv._set_zero_limit import SetZeroLimit_Request as Request
    from can_driver.srv._set_zero_limit import SetZeroLimit_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
