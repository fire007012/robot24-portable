# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robot_hardware:srv/Maintain.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Maintain_Request(type):
    """Metaclass of message 'Maintain_Request'."""

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
            module = import_type_support('robot_hardware')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_hardware.srv.Maintain_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__maintain__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__maintain__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__maintain__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__maintain__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__maintain__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Maintain_Request(metaclass=Metaclass_Maintain_Request):
    """Message class 'Maintain_Request'."""

    __slots__ = [
        '_joint',
        '_operation',
        '_lower',
        '_upper',
        '_save',
    ]

    _fields_and_field_types = {
        'joint': 'string',
        'operation': 'string',
        'lower': 'double',
        'upper': 'double',
        'save': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joint = kwargs.get('joint', str())
        self.operation = kwargs.get('operation', str())
        self.lower = kwargs.get('lower', float())
        self.upper = kwargs.get('upper', float())
        self.save = kwargs.get('save', bool())

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
        if self.joint != other.joint:
            return False
        if self.operation != other.operation:
            return False
        if self.lower != other.lower:
            return False
        if self.upper != other.upper:
            return False
        if self.save != other.save:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint(self):
        """Message field 'joint'."""
        return self._joint

    @joint.setter
    def joint(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'joint' field must be of type 'str'"
        self._joint = value

    @builtins.property
    def operation(self):
        """Message field 'operation'."""
        return self._operation

    @operation.setter
    def operation(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'operation' field must be of type 'str'"
        self._operation = value

    @builtins.property
    def lower(self):
        """Message field 'lower'."""
        return self._lower

    @lower.setter
    def lower(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lower' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lower' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lower = value

    @builtins.property
    def upper(self):
        """Message field 'upper'."""
        return self._upper

    @upper.setter
    def upper(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'upper' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'upper' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._upper = value

    @builtins.property
    def save(self):
        """Message field 'save'."""
        return self._save

    @save.setter
    def save(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'save' field must be of type 'bool'"
        self._save = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Maintain_Response(type):
    """Metaclass of message 'Maintain_Response'."""

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
            module = import_type_support('robot_hardware')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_hardware.srv.Maintain_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__maintain__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__maintain__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__maintain__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__maintain__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__maintain__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Maintain_Response(metaclass=Metaclass_Maintain_Response):
    """Message class 'Maintain_Response'."""

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


class Metaclass_Maintain(type):
    """Metaclass of service 'Maintain'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robot_hardware')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_hardware.srv.Maintain')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__maintain

            from robot_hardware.srv import _maintain
            if _maintain.Metaclass_Maintain_Request._TYPE_SUPPORT is None:
                _maintain.Metaclass_Maintain_Request.__import_type_support__()
            if _maintain.Metaclass_Maintain_Response._TYPE_SUPPORT is None:
                _maintain.Metaclass_Maintain_Response.__import_type_support__()


class Maintain(metaclass=Metaclass_Maintain):
    from robot_hardware.srv._maintain import Maintain_Request as Request
    from robot_hardware.srv._maintain import Maintain_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
