# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vision_pkg:srv/SetDetectionEnabled.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetDetectionEnabled_Request(type):
    """Metaclass of message 'SetDetectionEnabled_Request'."""

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
                'vision_pkg.srv.SetDetectionEnabled_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_detection_enabled__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_detection_enabled__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_detection_enabled__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_detection_enabled__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_detection_enabled__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetDetectionEnabled_Request(metaclass=Metaclass_SetDetectionEnabled_Request):
    """Message class 'SetDetectionEnabled_Request'."""

    __slots__ = [
        '_enable_all',
        '_enable_yolo',
        '_enable_qrcode',
        '_enable_motion',
        '_enable_obstacle_warning',
        '_enable_center_distance',
    ]

    _fields_and_field_types = {
        'enable_all': 'boolean',
        'enable_yolo': 'boolean',
        'enable_qrcode': 'boolean',
        'enable_motion': 'boolean',
        'enable_obstacle_warning': 'boolean',
        'enable_center_distance': 'boolean',
    }

    SLOT_TYPES = (
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
        self.enable_all = kwargs.get('enable_all', bool())
        self.enable_yolo = kwargs.get('enable_yolo', bool())
        self.enable_qrcode = kwargs.get('enable_qrcode', bool())
        self.enable_motion = kwargs.get('enable_motion', bool())
        self.enable_obstacle_warning = kwargs.get('enable_obstacle_warning', bool())
        self.enable_center_distance = kwargs.get('enable_center_distance', bool())

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
        if self.enable_all != other.enable_all:
            return False
        if self.enable_yolo != other.enable_yolo:
            return False
        if self.enable_qrcode != other.enable_qrcode:
            return False
        if self.enable_motion != other.enable_motion:
            return False
        if self.enable_obstacle_warning != other.enable_obstacle_warning:
            return False
        if self.enable_center_distance != other.enable_center_distance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def enable_all(self):
        """Message field 'enable_all'."""
        return self._enable_all

    @enable_all.setter
    def enable_all(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable_all' field must be of type 'bool'"
        self._enable_all = value

    @builtins.property
    def enable_yolo(self):
        """Message field 'enable_yolo'."""
        return self._enable_yolo

    @enable_yolo.setter
    def enable_yolo(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable_yolo' field must be of type 'bool'"
        self._enable_yolo = value

    @builtins.property
    def enable_qrcode(self):
        """Message field 'enable_qrcode'."""
        return self._enable_qrcode

    @enable_qrcode.setter
    def enable_qrcode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable_qrcode' field must be of type 'bool'"
        self._enable_qrcode = value

    @builtins.property
    def enable_motion(self):
        """Message field 'enable_motion'."""
        return self._enable_motion

    @enable_motion.setter
    def enable_motion(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable_motion' field must be of type 'bool'"
        self._enable_motion = value

    @builtins.property
    def enable_obstacle_warning(self):
        """Message field 'enable_obstacle_warning'."""
        return self._enable_obstacle_warning

    @enable_obstacle_warning.setter
    def enable_obstacle_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable_obstacle_warning' field must be of type 'bool'"
        self._enable_obstacle_warning = value

    @builtins.property
    def enable_center_distance(self):
        """Message field 'enable_center_distance'."""
        return self._enable_center_distance

    @enable_center_distance.setter
    def enable_center_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable_center_distance' field must be of type 'bool'"
        self._enable_center_distance = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetDetectionEnabled_Response(type):
    """Metaclass of message 'SetDetectionEnabled_Response'."""

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
                'vision_pkg.srv.SetDetectionEnabled_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_detection_enabled__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_detection_enabled__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_detection_enabled__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_detection_enabled__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_detection_enabled__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetDetectionEnabled_Response(metaclass=Metaclass_SetDetectionEnabled_Response):
    """Message class 'SetDetectionEnabled_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_yolo_enabled',
        '_qrcode_enabled',
        '_motion_enabled',
        '_obstacle_warning_enabled',
        '_center_distance_enabled',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'yolo_enabled': 'boolean',
        'qrcode_enabled': 'boolean',
        'motion_enabled': 'boolean',
        'obstacle_warning_enabled': 'boolean',
        'center_distance_enabled': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())
        self.yolo_enabled = kwargs.get('yolo_enabled', bool())
        self.qrcode_enabled = kwargs.get('qrcode_enabled', bool())
        self.motion_enabled = kwargs.get('motion_enabled', bool())
        self.obstacle_warning_enabled = kwargs.get('obstacle_warning_enabled', bool())
        self.center_distance_enabled = kwargs.get('center_distance_enabled', bool())

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
        if self.yolo_enabled != other.yolo_enabled:
            return False
        if self.qrcode_enabled != other.qrcode_enabled:
            return False
        if self.motion_enabled != other.motion_enabled:
            return False
        if self.obstacle_warning_enabled != other.obstacle_warning_enabled:
            return False
        if self.center_distance_enabled != other.center_distance_enabled:
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
    def yolo_enabled(self):
        """Message field 'yolo_enabled'."""
        return self._yolo_enabled

    @yolo_enabled.setter
    def yolo_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'yolo_enabled' field must be of type 'bool'"
        self._yolo_enabled = value

    @builtins.property
    def qrcode_enabled(self):
        """Message field 'qrcode_enabled'."""
        return self._qrcode_enabled

    @qrcode_enabled.setter
    def qrcode_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'qrcode_enabled' field must be of type 'bool'"
        self._qrcode_enabled = value

    @builtins.property
    def motion_enabled(self):
        """Message field 'motion_enabled'."""
        return self._motion_enabled

    @motion_enabled.setter
    def motion_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motion_enabled' field must be of type 'bool'"
        self._motion_enabled = value

    @builtins.property
    def obstacle_warning_enabled(self):
        """Message field 'obstacle_warning_enabled'."""
        return self._obstacle_warning_enabled

    @obstacle_warning_enabled.setter
    def obstacle_warning_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'obstacle_warning_enabled' field must be of type 'bool'"
        self._obstacle_warning_enabled = value

    @builtins.property
    def center_distance_enabled(self):
        """Message field 'center_distance_enabled'."""
        return self._center_distance_enabled

    @center_distance_enabled.setter
    def center_distance_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'center_distance_enabled' field must be of type 'bool'"
        self._center_distance_enabled = value


class Metaclass_SetDetectionEnabled(type):
    """Metaclass of service 'SetDetectionEnabled'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('vision_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vision_pkg.srv.SetDetectionEnabled')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_detection_enabled

            from vision_pkg.srv import _set_detection_enabled
            if _set_detection_enabled.Metaclass_SetDetectionEnabled_Request._TYPE_SUPPORT is None:
                _set_detection_enabled.Metaclass_SetDetectionEnabled_Request.__import_type_support__()
            if _set_detection_enabled.Metaclass_SetDetectionEnabled_Response._TYPE_SUPPORT is None:
                _set_detection_enabled.Metaclass_SetDetectionEnabled_Response.__import_type_support__()


class SetDetectionEnabled(metaclass=Metaclass_SetDetectionEnabled):
    from vision_pkg.srv._set_detection_enabled import SetDetectionEnabled_Request as Request
    from vision_pkg.srv._set_detection_enabled import SetDetectionEnabled_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
