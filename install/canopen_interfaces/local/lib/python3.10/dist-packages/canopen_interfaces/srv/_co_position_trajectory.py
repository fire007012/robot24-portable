# generated from rosidl_generator_py/resource/_idl.py.em
# with input from canopen_interfaces:srv/COPositionTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'positions'
# Member 'times_from_start'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_COPositionTrajectory_Request(type):
    """Metaclass of message 'COPositionTrajectory_Request'."""

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
            module = import_type_support('canopen_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'canopen_interfaces.srv.COPositionTrajectory_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__co_position_trajectory__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__co_position_trajectory__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__co_position_trajectory__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__co_position_trajectory__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__co_position_trajectory__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class COPositionTrajectory_Request(metaclass=Metaclass_COPositionTrajectory_Request):
    """Message class 'COPositionTrajectory_Request'."""

    __slots__ = [
        '_epoch',
        '_positions',
        '_times_from_start',
    ]

    _fields_and_field_types = {
        'epoch': 'uint64',
        'positions': 'sequence<double>',
        'times_from_start': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.epoch = kwargs.get('epoch', int())
        self.positions = array.array('d', kwargs.get('positions', []))
        self.times_from_start = array.array('d', kwargs.get('times_from_start', []))

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
        if self.epoch != other.epoch:
            return False
        if self.positions != other.positions:
            return False
        if self.times_from_start != other.times_from_start:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def epoch(self):
        """Message field 'epoch'."""
        return self._epoch

    @epoch.setter
    def epoch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'epoch' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'epoch' field must be an unsigned integer in [0, 18446744073709551615]"
        self._epoch = value

    @builtins.property
    def positions(self):
        """Message field 'positions'."""
        return self._positions

    @positions.setter
    def positions(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'positions' array.array() must have the type code of 'd'"
            self._positions = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'positions' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._positions = array.array('d', value)

    @builtins.property
    def times_from_start(self):
        """Message field 'times_from_start'."""
        return self._times_from_start

    @times_from_start.setter
    def times_from_start(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'times_from_start' array.array() must have the type code of 'd'"
            self._times_from_start = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'times_from_start' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._times_from_start = array.array('d', value)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_COPositionTrajectory_Response(type):
    """Metaclass of message 'COPositionTrajectory_Response'."""

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
            module = import_type_support('canopen_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'canopen_interfaces.srv.COPositionTrajectory_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__co_position_trajectory__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__co_position_trajectory__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__co_position_trajectory__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__co_position_trajectory__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__co_position_trajectory__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class COPositionTrajectory_Response(metaclass=Metaclass_COPositionTrajectory_Response):
    """Message class 'COPositionTrajectory_Response'."""

    __slots__ = [
        '_success',
        '_epoch',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'epoch': 'uint64',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.epoch = kwargs.get('epoch', int())
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
        if self.epoch != other.epoch:
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
    def epoch(self):
        """Message field 'epoch'."""
        return self._epoch

    @epoch.setter
    def epoch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'epoch' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'epoch' field must be an unsigned integer in [0, 18446744073709551615]"
        self._epoch = value

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


class Metaclass_COPositionTrajectory(type):
    """Metaclass of service 'COPositionTrajectory'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('canopen_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'canopen_interfaces.srv.COPositionTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__co_position_trajectory

            from canopen_interfaces.srv import _co_position_trajectory
            if _co_position_trajectory.Metaclass_COPositionTrajectory_Request._TYPE_SUPPORT is None:
                _co_position_trajectory.Metaclass_COPositionTrajectory_Request.__import_type_support__()
            if _co_position_trajectory.Metaclass_COPositionTrajectory_Response._TYPE_SUPPORT is None:
                _co_position_trajectory.Metaclass_COPositionTrajectory_Response.__import_type_support__()


class COPositionTrajectory(metaclass=Metaclass_COPositionTrajectory):
    from canopen_interfaces.srv._co_position_trajectory import COPositionTrajectory_Request as Request
    from canopen_interfaces.srv._co_position_trajectory import COPositionTrajectory_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
