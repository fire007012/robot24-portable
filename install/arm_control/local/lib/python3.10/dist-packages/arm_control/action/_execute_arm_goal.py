# generated from rosidl_generator_py/resource/_idl.py.em
# with input from arm_control:action/ExecuteArmGoal.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'joint_positions'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ExecuteArmGoal_Goal(type):
    """Metaclass of message 'ExecuteArmGoal_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TARGET_JOINTS': 1,
        'TARGET_NAMED': 2,
        'TARGET_POSE': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('arm_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_control.action.ExecuteArmGoal_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__execute_arm_goal__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__execute_arm_goal__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__execute_arm_goal__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__execute_arm_goal__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__execute_arm_goal__goal

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TARGET_JOINTS': cls.__constants['TARGET_JOINTS'],
            'TARGET_NAMED': cls.__constants['TARGET_NAMED'],
            'TARGET_POSE': cls.__constants['TARGET_POSE'],
        }

    @property
    def TARGET_JOINTS(self):
        """Message constant 'TARGET_JOINTS'."""
        return Metaclass_ExecuteArmGoal_Goal.__constants['TARGET_JOINTS']

    @property
    def TARGET_NAMED(self):
        """Message constant 'TARGET_NAMED'."""
        return Metaclass_ExecuteArmGoal_Goal.__constants['TARGET_NAMED']

    @property
    def TARGET_POSE(self):
        """Message constant 'TARGET_POSE'."""
        return Metaclass_ExecuteArmGoal_Goal.__constants['TARGET_POSE']


class ExecuteArmGoal_Goal(metaclass=Metaclass_ExecuteArmGoal_Goal):
    """
    Message class 'ExecuteArmGoal_Goal'.

    Constants:
      TARGET_JOINTS
      TARGET_NAMED
      TARGET_POSE
    """

    __slots__ = [
        '_target_type',
        '_joint_names',
        '_joint_positions',
        '_named_target',
        '_pose_target',
    ]

    _fields_and_field_types = {
        'target_type': 'uint8',
        'joint_names': 'sequence<string>',
        'joint_positions': 'sequence<double>',
        'named_target': 'string',
        'pose_target': 'geometry_msgs/PoseStamped',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.target_type = kwargs.get('target_type', int())
        self.joint_names = kwargs.get('joint_names', [])
        self.joint_positions = array.array('d', kwargs.get('joint_positions', []))
        self.named_target = kwargs.get('named_target', str())
        from geometry_msgs.msg import PoseStamped
        self.pose_target = kwargs.get('pose_target', PoseStamped())

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
        if self.target_type != other.target_type:
            return False
        if self.joint_names != other.joint_names:
            return False
        if self.joint_positions != other.joint_positions:
            return False
        if self.named_target != other.named_target:
            return False
        if self.pose_target != other.pose_target:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_type(self):
        """Message field 'target_type'."""
        return self._target_type

    @target_type.setter
    def target_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'target_type' field must be an unsigned integer in [0, 255]"
        self._target_type = value

    @builtins.property
    def joint_names(self):
        """Message field 'joint_names'."""
        return self._joint_names

    @joint_names.setter
    def joint_names(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'joint_names' field must be a set or sequence and each value of type 'str'"
        self._joint_names = value

    @builtins.property
    def joint_positions(self):
        """Message field 'joint_positions'."""
        return self._joint_positions

    @joint_positions.setter
    def joint_positions(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'joint_positions' array.array() must have the type code of 'd'"
            self._joint_positions = value
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
                "The 'joint_positions' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_positions = array.array('d', value)

    @builtins.property
    def named_target(self):
        """Message field 'named_target'."""
        return self._named_target

    @named_target.setter
    def named_target(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'named_target' field must be of type 'str'"
        self._named_target = value

    @builtins.property
    def pose_target(self):
        """Message field 'pose_target'."""
        return self._pose_target

    @pose_target.setter
    def pose_target(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'pose_target' field must be a sub message of type 'PoseStamped'"
        self._pose_target = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ExecuteArmGoal_Result(type):
    """Metaclass of message 'ExecuteArmGoal_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ERROR_NONE': 0,
        'ERROR_INVALID_GOAL': 1,
        'ERROR_NOT_READY': 2,
        'ERROR_TF_FAILED': 3,
        'ERROR_PLANNING_FAILED': 4,
        'ERROR_EXECUTION_FAILED': 5,
        'ERROR_PREEMPTED': 6,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('arm_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_control.action.ExecuteArmGoal_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__execute_arm_goal__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__execute_arm_goal__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__execute_arm_goal__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__execute_arm_goal__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__execute_arm_goal__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ERROR_NONE': cls.__constants['ERROR_NONE'],
            'ERROR_INVALID_GOAL': cls.__constants['ERROR_INVALID_GOAL'],
            'ERROR_NOT_READY': cls.__constants['ERROR_NOT_READY'],
            'ERROR_TF_FAILED': cls.__constants['ERROR_TF_FAILED'],
            'ERROR_PLANNING_FAILED': cls.__constants['ERROR_PLANNING_FAILED'],
            'ERROR_EXECUTION_FAILED': cls.__constants['ERROR_EXECUTION_FAILED'],
            'ERROR_PREEMPTED': cls.__constants['ERROR_PREEMPTED'],
        }

    @property
    def ERROR_NONE(self):
        """Message constant 'ERROR_NONE'."""
        return Metaclass_ExecuteArmGoal_Result.__constants['ERROR_NONE']

    @property
    def ERROR_INVALID_GOAL(self):
        """Message constant 'ERROR_INVALID_GOAL'."""
        return Metaclass_ExecuteArmGoal_Result.__constants['ERROR_INVALID_GOAL']

    @property
    def ERROR_NOT_READY(self):
        """Message constant 'ERROR_NOT_READY'."""
        return Metaclass_ExecuteArmGoal_Result.__constants['ERROR_NOT_READY']

    @property
    def ERROR_TF_FAILED(self):
        """Message constant 'ERROR_TF_FAILED'."""
        return Metaclass_ExecuteArmGoal_Result.__constants['ERROR_TF_FAILED']

    @property
    def ERROR_PLANNING_FAILED(self):
        """Message constant 'ERROR_PLANNING_FAILED'."""
        return Metaclass_ExecuteArmGoal_Result.__constants['ERROR_PLANNING_FAILED']

    @property
    def ERROR_EXECUTION_FAILED(self):
        """Message constant 'ERROR_EXECUTION_FAILED'."""
        return Metaclass_ExecuteArmGoal_Result.__constants['ERROR_EXECUTION_FAILED']

    @property
    def ERROR_PREEMPTED(self):
        """Message constant 'ERROR_PREEMPTED'."""
        return Metaclass_ExecuteArmGoal_Result.__constants['ERROR_PREEMPTED']


class ExecuteArmGoal_Result(metaclass=Metaclass_ExecuteArmGoal_Result):
    """
    Message class 'ExecuteArmGoal_Result'.

    Constants:
      ERROR_NONE
      ERROR_INVALID_GOAL
      ERROR_NOT_READY
      ERROR_TF_FAILED
      ERROR_PLANNING_FAILED
      ERROR_EXECUTION_FAILED
      ERROR_PREEMPTED
    """

    __slots__ = [
        '_success',
        '_error_code',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'error_code': 'uint8',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.error_code = kwargs.get('error_code', int())
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
        if self.error_code != other.error_code:
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
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'error_code' field must be an unsigned integer in [0, 255]"
        self._error_code = value

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ExecuteArmGoal_Feedback(type):
    """Metaclass of message 'ExecuteArmGoal_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PHASE_VALIDATING': 1,
        'PHASE_WAITING_READY': 2,
        'PHASE_PLANNING': 3,
        'PHASE_EXECUTING': 4,
        'PHASE_STOPPING': 5,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('arm_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_control.action.ExecuteArmGoal_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__execute_arm_goal__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__execute_arm_goal__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__execute_arm_goal__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__execute_arm_goal__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__execute_arm_goal__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PHASE_VALIDATING': cls.__constants['PHASE_VALIDATING'],
            'PHASE_WAITING_READY': cls.__constants['PHASE_WAITING_READY'],
            'PHASE_PLANNING': cls.__constants['PHASE_PLANNING'],
            'PHASE_EXECUTING': cls.__constants['PHASE_EXECUTING'],
            'PHASE_STOPPING': cls.__constants['PHASE_STOPPING'],
        }

    @property
    def PHASE_VALIDATING(self):
        """Message constant 'PHASE_VALIDATING'."""
        return Metaclass_ExecuteArmGoal_Feedback.__constants['PHASE_VALIDATING']

    @property
    def PHASE_WAITING_READY(self):
        """Message constant 'PHASE_WAITING_READY'."""
        return Metaclass_ExecuteArmGoal_Feedback.__constants['PHASE_WAITING_READY']

    @property
    def PHASE_PLANNING(self):
        """Message constant 'PHASE_PLANNING'."""
        return Metaclass_ExecuteArmGoal_Feedback.__constants['PHASE_PLANNING']

    @property
    def PHASE_EXECUTING(self):
        """Message constant 'PHASE_EXECUTING'."""
        return Metaclass_ExecuteArmGoal_Feedback.__constants['PHASE_EXECUTING']

    @property
    def PHASE_STOPPING(self):
        """Message constant 'PHASE_STOPPING'."""
        return Metaclass_ExecuteArmGoal_Feedback.__constants['PHASE_STOPPING']


class ExecuteArmGoal_Feedback(metaclass=Metaclass_ExecuteArmGoal_Feedback):
    """
    Message class 'ExecuteArmGoal_Feedback'.

    Constants:
      PHASE_VALIDATING
      PHASE_WAITING_READY
      PHASE_PLANNING
      PHASE_EXECUTING
      PHASE_STOPPING
    """

    __slots__ = [
        '_phase',
        '_message',
    ]

    _fields_and_field_types = {
        'phase': 'uint8',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.phase = kwargs.get('phase', int())
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
        if self.phase != other.phase:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def phase(self):
        """Message field 'phase'."""
        return self._phase

    @phase.setter
    def phase(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'phase' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'phase' field must be an unsigned integer in [0, 255]"
        self._phase = value

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ExecuteArmGoal_SendGoal_Request(type):
    """Metaclass of message 'ExecuteArmGoal_SendGoal_Request'."""

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
            module = import_type_support('arm_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_control.action.ExecuteArmGoal_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__execute_arm_goal__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__execute_arm_goal__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__execute_arm_goal__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__execute_arm_goal__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__execute_arm_goal__send_goal__request

            from arm_control.action import ExecuteArmGoal
            if ExecuteArmGoal.Goal.__class__._TYPE_SUPPORT is None:
                ExecuteArmGoal.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExecuteArmGoal_SendGoal_Request(metaclass=Metaclass_ExecuteArmGoal_SendGoal_Request):
    """Message class 'ExecuteArmGoal_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'arm_control/ExecuteArmGoal_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['arm_control', 'action'], 'ExecuteArmGoal_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from arm_control.action._execute_arm_goal import ExecuteArmGoal_Goal
        self.goal = kwargs.get('goal', ExecuteArmGoal_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from arm_control.action._execute_arm_goal import ExecuteArmGoal_Goal
            assert \
                isinstance(value, ExecuteArmGoal_Goal), \
                "The 'goal' field must be a sub message of type 'ExecuteArmGoal_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ExecuteArmGoal_SendGoal_Response(type):
    """Metaclass of message 'ExecuteArmGoal_SendGoal_Response'."""

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
            module = import_type_support('arm_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_control.action.ExecuteArmGoal_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__execute_arm_goal__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__execute_arm_goal__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__execute_arm_goal__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__execute_arm_goal__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__execute_arm_goal__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExecuteArmGoal_SendGoal_Response(metaclass=Metaclass_ExecuteArmGoal_SendGoal_Response):
    """Message class 'ExecuteArmGoal_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_ExecuteArmGoal_SendGoal(type):
    """Metaclass of service 'ExecuteArmGoal_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('arm_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_control.action.ExecuteArmGoal_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__execute_arm_goal__send_goal

            from arm_control.action import _execute_arm_goal
            if _execute_arm_goal.Metaclass_ExecuteArmGoal_SendGoal_Request._TYPE_SUPPORT is None:
                _execute_arm_goal.Metaclass_ExecuteArmGoal_SendGoal_Request.__import_type_support__()
            if _execute_arm_goal.Metaclass_ExecuteArmGoal_SendGoal_Response._TYPE_SUPPORT is None:
                _execute_arm_goal.Metaclass_ExecuteArmGoal_SendGoal_Response.__import_type_support__()


class ExecuteArmGoal_SendGoal(metaclass=Metaclass_ExecuteArmGoal_SendGoal):
    from arm_control.action._execute_arm_goal import ExecuteArmGoal_SendGoal_Request as Request
    from arm_control.action._execute_arm_goal import ExecuteArmGoal_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ExecuteArmGoal_GetResult_Request(type):
    """Metaclass of message 'ExecuteArmGoal_GetResult_Request'."""

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
            module = import_type_support('arm_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_control.action.ExecuteArmGoal_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__execute_arm_goal__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__execute_arm_goal__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__execute_arm_goal__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__execute_arm_goal__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__execute_arm_goal__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExecuteArmGoal_GetResult_Request(metaclass=Metaclass_ExecuteArmGoal_GetResult_Request):
    """Message class 'ExecuteArmGoal_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ExecuteArmGoal_GetResult_Response(type):
    """Metaclass of message 'ExecuteArmGoal_GetResult_Response'."""

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
            module = import_type_support('arm_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_control.action.ExecuteArmGoal_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__execute_arm_goal__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__execute_arm_goal__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__execute_arm_goal__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__execute_arm_goal__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__execute_arm_goal__get_result__response

            from arm_control.action import ExecuteArmGoal
            if ExecuteArmGoal.Result.__class__._TYPE_SUPPORT is None:
                ExecuteArmGoal.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExecuteArmGoal_GetResult_Response(metaclass=Metaclass_ExecuteArmGoal_GetResult_Response):
    """Message class 'ExecuteArmGoal_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'arm_control/ExecuteArmGoal_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['arm_control', 'action'], 'ExecuteArmGoal_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from arm_control.action._execute_arm_goal import ExecuteArmGoal_Result
        self.result = kwargs.get('result', ExecuteArmGoal_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from arm_control.action._execute_arm_goal import ExecuteArmGoal_Result
            assert \
                isinstance(value, ExecuteArmGoal_Result), \
                "The 'result' field must be a sub message of type 'ExecuteArmGoal_Result'"
        self._result = value


class Metaclass_ExecuteArmGoal_GetResult(type):
    """Metaclass of service 'ExecuteArmGoal_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('arm_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_control.action.ExecuteArmGoal_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__execute_arm_goal__get_result

            from arm_control.action import _execute_arm_goal
            if _execute_arm_goal.Metaclass_ExecuteArmGoal_GetResult_Request._TYPE_SUPPORT is None:
                _execute_arm_goal.Metaclass_ExecuteArmGoal_GetResult_Request.__import_type_support__()
            if _execute_arm_goal.Metaclass_ExecuteArmGoal_GetResult_Response._TYPE_SUPPORT is None:
                _execute_arm_goal.Metaclass_ExecuteArmGoal_GetResult_Response.__import_type_support__()


class ExecuteArmGoal_GetResult(metaclass=Metaclass_ExecuteArmGoal_GetResult):
    from arm_control.action._execute_arm_goal import ExecuteArmGoal_GetResult_Request as Request
    from arm_control.action._execute_arm_goal import ExecuteArmGoal_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ExecuteArmGoal_FeedbackMessage(type):
    """Metaclass of message 'ExecuteArmGoal_FeedbackMessage'."""

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
            module = import_type_support('arm_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_control.action.ExecuteArmGoal_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__execute_arm_goal__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__execute_arm_goal__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__execute_arm_goal__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__execute_arm_goal__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__execute_arm_goal__feedback_message

            from arm_control.action import ExecuteArmGoal
            if ExecuteArmGoal.Feedback.__class__._TYPE_SUPPORT is None:
                ExecuteArmGoal.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExecuteArmGoal_FeedbackMessage(metaclass=Metaclass_ExecuteArmGoal_FeedbackMessage):
    """Message class 'ExecuteArmGoal_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'arm_control/ExecuteArmGoal_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['arm_control', 'action'], 'ExecuteArmGoal_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from arm_control.action._execute_arm_goal import ExecuteArmGoal_Feedback
        self.feedback = kwargs.get('feedback', ExecuteArmGoal_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from arm_control.action._execute_arm_goal import ExecuteArmGoal_Feedback
            assert \
                isinstance(value, ExecuteArmGoal_Feedback), \
                "The 'feedback' field must be a sub message of type 'ExecuteArmGoal_Feedback'"
        self._feedback = value


class Metaclass_ExecuteArmGoal(type):
    """Metaclass of action 'ExecuteArmGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('arm_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_control.action.ExecuteArmGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__execute_arm_goal

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from arm_control.action import _execute_arm_goal
            if _execute_arm_goal.Metaclass_ExecuteArmGoal_SendGoal._TYPE_SUPPORT is None:
                _execute_arm_goal.Metaclass_ExecuteArmGoal_SendGoal.__import_type_support__()
            if _execute_arm_goal.Metaclass_ExecuteArmGoal_GetResult._TYPE_SUPPORT is None:
                _execute_arm_goal.Metaclass_ExecuteArmGoal_GetResult.__import_type_support__()
            if _execute_arm_goal.Metaclass_ExecuteArmGoal_FeedbackMessage._TYPE_SUPPORT is None:
                _execute_arm_goal.Metaclass_ExecuteArmGoal_FeedbackMessage.__import_type_support__()


class ExecuteArmGoal(metaclass=Metaclass_ExecuteArmGoal):

    # The goal message defined in the action definition.
    from arm_control.action._execute_arm_goal import ExecuteArmGoal_Goal as Goal
    # The result message defined in the action definition.
    from arm_control.action._execute_arm_goal import ExecuteArmGoal_Result as Result
    # The feedback message defined in the action definition.
    from arm_control.action._execute_arm_goal import ExecuteArmGoal_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from arm_control.action._execute_arm_goal import ExecuteArmGoal_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from arm_control.action._execute_arm_goal import ExecuteArmGoal_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from arm_control.action._execute_arm_goal import ExecuteArmGoal_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
