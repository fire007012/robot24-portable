# generated from rosidl_generator_py/resource/_idl.py.em
# with input from can_driver:srv/ApplyLimits.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ApplyLimits_Request(type):
    """Metaclass of message 'ApplyLimits_Request'."""

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
                'can_driver.srv.ApplyLimits_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__apply_limits__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__apply_limits__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__apply_limits__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__apply_limits__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__apply_limits__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ApplyLimits_Request(metaclass=Metaclass_ApplyLimits_Request):
    """Message class 'ApplyLimits_Request'."""

    __slots__ = [
        '_motor_id',
        '_min_position_rad',
        '_max_position_rad',
        '_use_urdf_limits',
        '_apply_to_motor',
        '_require_current_inside_limits',
    ]

    _fields_and_field_types = {
        'motor_id': 'uint16',
        'min_position_rad': 'double',
        'max_position_rad': 'double',
        'use_urdf_limits': 'boolean',
        'apply_to_motor': 'boolean',
        'require_current_inside_limits': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motor_id = kwargs.get('motor_id', int())
        self.min_position_rad = kwargs.get('min_position_rad', float())
        self.max_position_rad = kwargs.get('max_position_rad', float())
        self.use_urdf_limits = kwargs.get('use_urdf_limits', bool())
        self.apply_to_motor = kwargs.get('apply_to_motor', bool())
        self.require_current_inside_limits = kwargs.get('require_current_inside_limits', bool())

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
        if self.min_position_rad != other.min_position_rad:
            return False
        if self.max_position_rad != other.max_position_rad:
            return False
        if self.use_urdf_limits != other.use_urdf_limits:
            return False
        if self.apply_to_motor != other.apply_to_motor:
            return False
        if self.require_current_inside_limits != other.require_current_inside_limits:
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

    @builtins.property
    def require_current_inside_limits(self):
        """Message field 'require_current_inside_limits'."""
        return self._require_current_inside_limits

    @require_current_inside_limits.setter
    def require_current_inside_limits(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'require_current_inside_limits' field must be of type 'bool'"
        self._require_current_inside_limits = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_ApplyLimits_Response(type):
    """Metaclass of message 'ApplyLimits_Response'."""

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
                'can_driver.srv.ApplyLimits_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__apply_limits__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__apply_limits__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__apply_limits__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__apply_limits__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__apply_limits__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ApplyLimits_Response(metaclass=Metaclass_ApplyLimits_Response):
    """Message class 'ApplyLimits_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_active_zero_offset_rad',
        '_applied_min_rad',
        '_applied_max_rad',
        '_current_position_rad',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'active_zero_offset_rad': 'double',
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
        self.active_zero_offset_rad = kwargs.get('active_zero_offset_rad', float())
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
        if self.active_zero_offset_rad != other.active_zero_offset_rad:
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
    def active_zero_offset_rad(self):
        """Message field 'active_zero_offset_rad'."""
        return self._active_zero_offset_rad

    @active_zero_offset_rad.setter
    def active_zero_offset_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'active_zero_offset_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'active_zero_offset_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._active_zero_offset_rad = value

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


class Metaclass_ApplyLimits(type):
    """Metaclass of service 'ApplyLimits'."""

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
                'can_driver.srv.ApplyLimits')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__apply_limits

            from can_driver.srv import _apply_limits
            if _apply_limits.Metaclass_ApplyLimits_Request._TYPE_SUPPORT is None:
                _apply_limits.Metaclass_ApplyLimits_Request.__import_type_support__()
            if _apply_limits.Metaclass_ApplyLimits_Response._TYPE_SUPPORT is None:
                _apply_limits.Metaclass_ApplyLimits_Response.__import_type_support__()


class ApplyLimits(metaclass=Metaclass_ApplyLimits):
    from can_driver.srv._apply_limits import ApplyLimits_Request as Request
    from can_driver.srv._apply_limits import ApplyLimits_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
