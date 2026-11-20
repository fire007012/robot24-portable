# generated from rosidl_generator_py/resource/_idl.py.em
# with input from can_driver:msg/MotorState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorState(type):
    """Metaclass of message 'MotorState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MODE_UNKNOWN': 0,
        'MODE_POSITION': 1,
        'MODE_VELOCITY': 2,
        'MODE_CSP': 3,
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
                'can_driver.msg.MotorState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MODE_UNKNOWN': cls.__constants['MODE_UNKNOWN'],
            'MODE_POSITION': cls.__constants['MODE_POSITION'],
            'MODE_VELOCITY': cls.__constants['MODE_VELOCITY'],
            'MODE_CSP': cls.__constants['MODE_CSP'],
        }

    @property
    def MODE_UNKNOWN(self):
        """Message constant 'MODE_UNKNOWN'."""
        return Metaclass_MotorState.__constants['MODE_UNKNOWN']

    @property
    def MODE_POSITION(self):
        """Message constant 'MODE_POSITION'."""
        return Metaclass_MotorState.__constants['MODE_POSITION']

    @property
    def MODE_VELOCITY(self):
        """Message constant 'MODE_VELOCITY'."""
        return Metaclass_MotorState.__constants['MODE_VELOCITY']

    @property
    def MODE_CSP(self):
        """Message constant 'MODE_CSP'."""
        return Metaclass_MotorState.__constants['MODE_CSP']


class MotorState(metaclass=Metaclass_MotorState):
    """
    Message class 'MotorState'.

    Constants:
      MODE_UNKNOWN
      MODE_POSITION
      MODE_VELOCITY
      MODE_CSP
    """

    __slots__ = [
        '_motor_id',
        '_name',
        '_mode',
        '_enabled',
        '_fault',
        '_position',
        '_velocity',
        '_current',
        '_joint_position',
        '_joint_velocity',
        '_mode_valid',
        '_status_valid',
        '_position_valid',
        '_velocity_valid',
        '_current_valid',
        '_feedback_fresh',
    ]

    _fields_and_field_types = {
        'motor_id': 'uint16',
        'name': 'string',
        'mode': 'uint8',
        'enabled': 'boolean',
        'fault': 'boolean',
        'position': 'int32',
        'velocity': 'int32',
        'current': 'int16',
        'joint_position': 'double',
        'joint_velocity': 'double',
        'mode_valid': 'boolean',
        'status_valid': 'boolean',
        'position_valid': 'boolean',
        'velocity_valid': 'boolean',
        'current_valid': 'boolean',
        'feedback_fresh': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motor_id = kwargs.get('motor_id', int())
        self.name = kwargs.get('name', str())
        self.mode = kwargs.get('mode', int())
        self.enabled = kwargs.get('enabled', bool())
        self.fault = kwargs.get('fault', bool())
        self.position = kwargs.get('position', int())
        self.velocity = kwargs.get('velocity', int())
        self.current = kwargs.get('current', int())
        self.joint_position = kwargs.get('joint_position', float())
        self.joint_velocity = kwargs.get('joint_velocity', float())
        self.mode_valid = kwargs.get('mode_valid', bool())
        self.status_valid = kwargs.get('status_valid', bool())
        self.position_valid = kwargs.get('position_valid', bool())
        self.velocity_valid = kwargs.get('velocity_valid', bool())
        self.current_valid = kwargs.get('current_valid', bool())
        self.feedback_fresh = kwargs.get('feedback_fresh', bool())

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
        if self.name != other.name:
            return False
        if self.mode != other.mode:
            return False
        if self.enabled != other.enabled:
            return False
        if self.fault != other.fault:
            return False
        if self.position != other.position:
            return False
        if self.velocity != other.velocity:
            return False
        if self.current != other.current:
            return False
        if self.joint_position != other.joint_position:
            return False
        if self.joint_velocity != other.joint_velocity:
            return False
        if self.mode_valid != other.mode_valid:
            return False
        if self.status_valid != other.status_valid:
            return False
        if self.position_valid != other.position_valid:
            return False
        if self.velocity_valid != other.velocity_valid:
            return False
        if self.current_valid != other.current_valid:
            return False
        if self.feedback_fresh != other.feedback_fresh:
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
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

    @builtins.property
    def enabled(self):
        """Message field 'enabled'."""
        return self._enabled

    @enabled.setter
    def enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enabled' field must be of type 'bool'"
        self._enabled = value

    @builtins.property
    def fault(self):
        """Message field 'fault'."""
        return self._fault

    @fault.setter
    def fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fault' field must be of type 'bool'"
        self._fault = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'position' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'position' field must be an integer in [-2147483648, 2147483647]"
        self._position = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'velocity' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'velocity' field must be an integer in [-2147483648, 2147483647]"
        self._velocity = value

    @builtins.property
    def current(self):
        """Message field 'current'."""
        return self._current

    @current.setter
    def current(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'current' field must be an integer in [-32768, 32767]"
        self._current = value

    @builtins.property
    def joint_position(self):
        """Message field 'joint_position'."""
        return self._joint_position

    @joint_position.setter
    def joint_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint_position' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'joint_position' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._joint_position = value

    @builtins.property
    def joint_velocity(self):
        """Message field 'joint_velocity'."""
        return self._joint_velocity

    @joint_velocity.setter
    def joint_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'joint_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._joint_velocity = value

    @builtins.property
    def mode_valid(self):
        """Message field 'mode_valid'."""
        return self._mode_valid

    @mode_valid.setter
    def mode_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mode_valid' field must be of type 'bool'"
        self._mode_valid = value

    @builtins.property
    def status_valid(self):
        """Message field 'status_valid'."""
        return self._status_valid

    @status_valid.setter
    def status_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status_valid' field must be of type 'bool'"
        self._status_valid = value

    @builtins.property
    def position_valid(self):
        """Message field 'position_valid'."""
        return self._position_valid

    @position_valid.setter
    def position_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'position_valid' field must be of type 'bool'"
        self._position_valid = value

    @builtins.property
    def velocity_valid(self):
        """Message field 'velocity_valid'."""
        return self._velocity_valid

    @velocity_valid.setter
    def velocity_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'velocity_valid' field must be of type 'bool'"
        self._velocity_valid = value

    @builtins.property
    def current_valid(self):
        """Message field 'current_valid'."""
        return self._current_valid

    @current_valid.setter
    def current_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'current_valid' field must be of type 'bool'"
        self._current_valid = value

    @builtins.property
    def feedback_fresh(self):
        """Message field 'feedback_fresh'."""
        return self._feedback_fresh

    @feedback_fresh.setter
    def feedback_fresh(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'feedback_fresh' field must be of type 'bool'"
        self._feedback_fresh = value
