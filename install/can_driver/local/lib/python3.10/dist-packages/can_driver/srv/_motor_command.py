# generated from rosidl_generator_py/resource/_idl.py.em
# with input from can_driver:srv/MotorCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorCommand_Request(type):
    """Metaclass of message 'MotorCommand_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CMD_ENABLE': 0,
        'CMD_DISABLE': 1,
        'CMD_STOP': 2,
        'CMD_SET_MODE': 3,
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
                'can_driver.srv.MotorCommand_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motor_command__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motor_command__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motor_command__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motor_command__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motor_command__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CMD_ENABLE': cls.__constants['CMD_ENABLE'],
            'CMD_DISABLE': cls.__constants['CMD_DISABLE'],
            'CMD_STOP': cls.__constants['CMD_STOP'],
            'CMD_SET_MODE': cls.__constants['CMD_SET_MODE'],
        }

    @property
    def CMD_ENABLE(self):
        """Message constant 'CMD_ENABLE'."""
        return Metaclass_MotorCommand_Request.__constants['CMD_ENABLE']

    @property
    def CMD_DISABLE(self):
        """Message constant 'CMD_DISABLE'."""
        return Metaclass_MotorCommand_Request.__constants['CMD_DISABLE']

    @property
    def CMD_STOP(self):
        """Message constant 'CMD_STOP'."""
        return Metaclass_MotorCommand_Request.__constants['CMD_STOP']

    @property
    def CMD_SET_MODE(self):
        """Message constant 'CMD_SET_MODE'."""
        return Metaclass_MotorCommand_Request.__constants['CMD_SET_MODE']


class MotorCommand_Request(metaclass=Metaclass_MotorCommand_Request):
    """
    Message class 'MotorCommand_Request'.

    Constants:
      CMD_ENABLE
      CMD_DISABLE
      CMD_STOP
      CMD_SET_MODE
    """

    __slots__ = [
        '_motor_id',
        '_command',
        '_value',
    ]

    _fields_and_field_types = {
        'motor_id': 'uint16',
        'command': 'uint8',
        'value': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motor_id = kwargs.get('motor_id', int())
        self.command = kwargs.get('command', int())
        self.value = kwargs.get('value', float())

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
        if self.command != other.command:
            return False
        if self.value != other.value:
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
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command' field must be an unsigned integer in [0, 255]"
        self._command = value

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._value = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MotorCommand_Response(type):
    """Metaclass of message 'MotorCommand_Response'."""

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
                'can_driver.srv.MotorCommand_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motor_command__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motor_command__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motor_command__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motor_command__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motor_command__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorCommand_Response(metaclass=Metaclass_MotorCommand_Response):
    """Message class 'MotorCommand_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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


class Metaclass_MotorCommand(type):
    """Metaclass of service 'MotorCommand'."""

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
                'can_driver.srv.MotorCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__motor_command

            from can_driver.srv import _motor_command
            if _motor_command.Metaclass_MotorCommand_Request._TYPE_SUPPORT is None:
                _motor_command.Metaclass_MotorCommand_Request.__import_type_support__()
            if _motor_command.Metaclass_MotorCommand_Response._TYPE_SUPPORT is None:
                _motor_command.Metaclass_MotorCommand_Response.__import_type_support__()


class MotorCommand(metaclass=Metaclass_MotorCommand):
    from can_driver.srv._motor_command import MotorCommand_Request as Request
    from can_driver.srv._motor_command import MotorCommand_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
