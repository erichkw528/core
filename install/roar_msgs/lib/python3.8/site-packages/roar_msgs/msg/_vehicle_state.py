# generated from rosidl_generator_py/resource/_idl.py.em
# with input from roar_msgs:msg/VehicleState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleState(type):
    """Metaclass of message 'VehicleState'."""

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
                'roar_msgs.msg.VehicleState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_state

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

            from nav_msgs.msg import Odometry
            if Odometry.__class__._TYPE_SUPPORT is None:
                Odometry.__class__.__import_type_support__()

            from nav_msgs.msg import Path
            if Path.__class__._TYPE_SUPPORT is None:
                Path.__class__.__import_type_support__()

            from roar_msgs.msg import VehicleControl
            if VehicleControl.__class__._TYPE_SUPPORT is None:
                VehicleControl.__class__.__import_type_support__()

            from roar_msgs.msg import VehicleStatus
            if VehicleStatus.__class__._TYPE_SUPPORT is None:
                VehicleStatus.__class__.__import_type_support__()

            from sensor_msgs.msg import Imu
            if Imu.__class__._TYPE_SUPPORT is None:
                Imu.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleState(metaclass=Metaclass_VehicleState):
    """Message class 'VehicleState'."""

    __slots__ = [
        '_header',
        '_odometry',
        '_imu',
        '_vehicle_status',
        '_global_path',
        '_next_waypoint',
        '_vehicle_control',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'odometry': 'nav_msgs/Odometry',
        'imu': 'sensor_msgs/Imu',
        'vehicle_status': 'roar_msgs/VehicleStatus',
        'global_path': 'nav_msgs/Path',
        'next_waypoint': 'geometry_msgs/PoseStamped',
        'vehicle_control': 'roar_msgs/VehicleControl',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Odometry'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Imu'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['roar_msgs', 'msg'], 'VehicleStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Path'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['roar_msgs', 'msg'], 'VehicleControl'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from nav_msgs.msg import Odometry
        self.odometry = kwargs.get('odometry', Odometry())
        from sensor_msgs.msg import Imu
        self.imu = kwargs.get('imu', Imu())
        from roar_msgs.msg import VehicleStatus
        self.vehicle_status = kwargs.get('vehicle_status', VehicleStatus())
        from nav_msgs.msg import Path
        self.global_path = kwargs.get('global_path', Path())
        from geometry_msgs.msg import PoseStamped
        self.next_waypoint = kwargs.get('next_waypoint', PoseStamped())
        from roar_msgs.msg import VehicleControl
        self.vehicle_control = kwargs.get('vehicle_control', VehicleControl())

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
        if self.header != other.header:
            return False
        if self.odometry != other.odometry:
            return False
        if self.imu != other.imu:
            return False
        if self.vehicle_status != other.vehicle_status:
            return False
        if self.global_path != other.global_path:
            return False
        if self.next_waypoint != other.next_waypoint:
            return False
        if self.vehicle_control != other.vehicle_control:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def odometry(self):
        """Message field 'odometry'."""
        return self._odometry

    @odometry.setter
    def odometry(self, value):
        if __debug__:
            from nav_msgs.msg import Odometry
            assert \
                isinstance(value, Odometry), \
                "The 'odometry' field must be a sub message of type 'Odometry'"
        self._odometry = value

    @property
    def imu(self):
        """Message field 'imu'."""
        return self._imu

    @imu.setter
    def imu(self, value):
        if __debug__:
            from sensor_msgs.msg import Imu
            assert \
                isinstance(value, Imu), \
                "The 'imu' field must be a sub message of type 'Imu'"
        self._imu = value

    @property
    def vehicle_status(self):
        """Message field 'vehicle_status'."""
        return self._vehicle_status

    @vehicle_status.setter
    def vehicle_status(self, value):
        if __debug__:
            from roar_msgs.msg import VehicleStatus
            assert \
                isinstance(value, VehicleStatus), \
                "The 'vehicle_status' field must be a sub message of type 'VehicleStatus'"
        self._vehicle_status = value

    @property
    def global_path(self):
        """Message field 'global_path'."""
        return self._global_path

    @global_path.setter
    def global_path(self, value):
        if __debug__:
            from nav_msgs.msg import Path
            assert \
                isinstance(value, Path), \
                "The 'global_path' field must be a sub message of type 'Path'"
        self._global_path = value

    @property
    def next_waypoint(self):
        """Message field 'next_waypoint'."""
        return self._next_waypoint

    @next_waypoint.setter
    def next_waypoint(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'next_waypoint' field must be a sub message of type 'PoseStamped'"
        self._next_waypoint = value

    @property
    def vehicle_control(self):
        """Message field 'vehicle_control'."""
        return self._vehicle_control

    @vehicle_control.setter
    def vehicle_control(self, value):
        if __debug__:
            from roar_msgs.msg import VehicleControl
            assert \
                isinstance(value, VehicleControl), \
                "The 'vehicle_control' field must be a sub message of type 'VehicleControl'"
        self._vehicle_control = value
