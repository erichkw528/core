# generated from rosidl_generator_py/resource/_idl.py.em
# with input from planning_interfaces:srv/TrajectoryScoring.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrajectoryScoring_Request(type):
    """Metaclass of message 'TrajectoryScoring_Request'."""

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
            module = import_type_support('planning_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'planning_interfaces.srv.TrajectoryScoring_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__trajectory_scoring__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__trajectory_scoring__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__trajectory_scoring__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__trajectory_scoring__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__trajectory_scoring__request

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

            from nav2_msgs.msg import Costmap
            if Costmap.__class__._TYPE_SUPPORT is None:
                Costmap.__class__.__import_type_support__()

            from nav_msgs.msg import Odometry
            if Odometry.__class__._TYPE_SUPPORT is None:
                Odometry.__class__.__import_type_support__()

            from nav_msgs.msg import Path
            if Path.__class__._TYPE_SUPPORT is None:
                Path.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryScoring_Request(metaclass=Metaclass_TrajectoryScoring_Request):
    """Message class 'TrajectoryScoring_Request'."""

    __slots__ = [
        '_trajectory',
        '_costmap',
        '_odom',
        '_next_waypoint',
    ]

    _fields_and_field_types = {
        'trajectory': 'nav_msgs/Path',
        'costmap': 'nav2_msgs/Costmap',
        'odom': 'nav_msgs/Odometry',
        'next_waypoint': 'geometry_msgs/PoseStamped',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Path'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav2_msgs', 'msg'], 'Costmap'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Odometry'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from nav_msgs.msg import Path
        self.trajectory = kwargs.get('trajectory', Path())
        from nav2_msgs.msg import Costmap
        self.costmap = kwargs.get('costmap', Costmap())
        from nav_msgs.msg import Odometry
        self.odom = kwargs.get('odom', Odometry())
        from geometry_msgs.msg import PoseStamped
        self.next_waypoint = kwargs.get('next_waypoint', PoseStamped())

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
        if self.trajectory != other.trajectory:
            return False
        if self.costmap != other.costmap:
            return False
        if self.odom != other.odom:
            return False
        if self.next_waypoint != other.next_waypoint:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def trajectory(self):
        """Message field 'trajectory'."""
        return self._trajectory

    @trajectory.setter
    def trajectory(self, value):
        if __debug__:
            from nav_msgs.msg import Path
            assert \
                isinstance(value, Path), \
                "The 'trajectory' field must be a sub message of type 'Path'"
        self._trajectory = value

    @property
    def costmap(self):
        """Message field 'costmap'."""
        return self._costmap

    @costmap.setter
    def costmap(self, value):
        if __debug__:
            from nav2_msgs.msg import Costmap
            assert \
                isinstance(value, Costmap), \
                "The 'costmap' field must be a sub message of type 'Costmap'"
        self._costmap = value

    @property
    def odom(self):
        """Message field 'odom'."""
        return self._odom

    @odom.setter
    def odom(self, value):
        if __debug__:
            from nav_msgs.msg import Odometry
            assert \
                isinstance(value, Odometry), \
                "The 'odom' field must be a sub message of type 'Odometry'"
        self._odom = value

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


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TrajectoryScoring_Response(type):
    """Metaclass of message 'TrajectoryScoring_Response'."""

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
            module = import_type_support('planning_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'planning_interfaces.srv.TrajectoryScoring_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__trajectory_scoring__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__trajectory_scoring__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__trajectory_scoring__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__trajectory_scoring__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__trajectory_scoring__response

            from planning_interfaces.msg import TrajectoryScore
            if TrajectoryScore.__class__._TYPE_SUPPORT is None:
                TrajectoryScore.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryScoring_Response(metaclass=Metaclass_TrajectoryScoring_Response):
    """Message class 'TrajectoryScoring_Response'."""

    __slots__ = [
        '_score',
    ]

    _fields_and_field_types = {
        'score': 'planning_interfaces/TrajectoryScore',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['planning_interfaces', 'msg'], 'TrajectoryScore'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from planning_interfaces.msg import TrajectoryScore
        self.score = kwargs.get('score', TrajectoryScore())

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
        if self.score != other.score:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def score(self):
        """Message field 'score'."""
        return self._score

    @score.setter
    def score(self, value):
        if __debug__:
            from planning_interfaces.msg import TrajectoryScore
            assert \
                isinstance(value, TrajectoryScore), \
                "The 'score' field must be a sub message of type 'TrajectoryScore'"
        self._score = value


class Metaclass_TrajectoryScoring(type):
    """Metaclass of service 'TrajectoryScoring'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('planning_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'planning_interfaces.srv.TrajectoryScoring')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__trajectory_scoring

            from planning_interfaces.srv import _trajectory_scoring
            if _trajectory_scoring.Metaclass_TrajectoryScoring_Request._TYPE_SUPPORT is None:
                _trajectory_scoring.Metaclass_TrajectoryScoring_Request.__import_type_support__()
            if _trajectory_scoring.Metaclass_TrajectoryScoring_Response._TYPE_SUPPORT is None:
                _trajectory_scoring.Metaclass_TrajectoryScoring_Response.__import_type_support__()


class TrajectoryScoring(metaclass=Metaclass_TrajectoryScoring):
    from planning_interfaces.srv._trajectory_scoring import TrajectoryScoring_Request as Request
    from planning_interfaces.srv._trajectory_scoring import TrajectoryScoring_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
