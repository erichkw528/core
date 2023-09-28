# generated from rosidl_generator_py/resource/_idl.py.em
# with input from roar_msgs:srv/ToggleControlSafetySwitch.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ToggleControlSafetySwitch_Request(type):
    """Metaclass of message 'ToggleControlSafetySwitch_Request'."""

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
            module = import_type_support('roar_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'roar_msgs.srv.ToggleControlSafetySwitch_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__toggle_control_safety_switch__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__toggle_control_safety_switch__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__toggle_control_safety_switch__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__toggle_control_safety_switch__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__toggle_control_safety_switch__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ToggleControlSafetySwitch_Request(metaclass=Metaclass_ToggleControlSafetySwitch_Request):
    """Message class 'ToggleControlSafetySwitch_Request'."""

    __slots__ = [
        '_is_safety_on',
    ]

    _fields_and_field_types = {
        'is_safety_on': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_safety_on = kwargs.get('is_safety_on', bool())

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
        if self.is_safety_on != other.is_safety_on:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def is_safety_on(self):
        """Message field 'is_safety_on'."""
        return self._is_safety_on

    @is_safety_on.setter
    def is_safety_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_safety_on' field must be of type 'bool'"
        self._is_safety_on = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ToggleControlSafetySwitch_Response(type):
    """Metaclass of message 'ToggleControlSafetySwitch_Response'."""

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
            module = import_type_support('roar_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'roar_msgs.srv.ToggleControlSafetySwitch_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__toggle_control_safety_switch__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__toggle_control_safety_switch__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__toggle_control_safety_switch__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__toggle_control_safety_switch__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__toggle_control_safety_switch__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ToggleControlSafetySwitch_Response(metaclass=Metaclass_ToggleControlSafetySwitch_Response):
    """Message class 'ToggleControlSafetySwitch_Response'."""

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', bool())

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status' field must be of type 'bool'"
        self._status = value


class Metaclass_ToggleControlSafetySwitch(type):
    """Metaclass of service 'ToggleControlSafetySwitch'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('roar_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'roar_msgs.srv.ToggleControlSafetySwitch')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__toggle_control_safety_switch

            from roar_msgs.srv import _toggle_control_safety_switch
            if _toggle_control_safety_switch.Metaclass_ToggleControlSafetySwitch_Request._TYPE_SUPPORT is None:
                _toggle_control_safety_switch.Metaclass_ToggleControlSafetySwitch_Request.__import_type_support__()
            if _toggle_control_safety_switch.Metaclass_ToggleControlSafetySwitch_Response._TYPE_SUPPORT is None:
                _toggle_control_safety_switch.Metaclass_ToggleControlSafetySwitch_Response.__import_type_support__()


class ToggleControlSafetySwitch(metaclass=Metaclass_ToggleControlSafetySwitch):
    from roar_msgs.srv._toggle_control_safety_switch import ToggleControlSafetySwitch_Request as Request
    from roar_msgs.srv._toggle_control_safety_switch import ToggleControlSafetySwitch_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
