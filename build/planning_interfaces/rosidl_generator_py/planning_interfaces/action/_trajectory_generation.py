# generated from rosidl_generator_py/resource/_idl.py.em
# with input from planning_interfaces:action/TrajectoryGeneration.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrajectoryGeneration_Goal(type):
    """Metaclass of message 'TrajectoryGeneration_Goal'."""

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
                'planning_interfaces.action.TrajectoryGeneration_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_generation__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_generation__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_generation__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_generation__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_generation__goal

            from geometry_msgs.msg import PolygonStamped
            if PolygonStamped.__class__._TYPE_SUPPORT is None:
                PolygonStamped.__class__.__import_type_support__()

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


class TrajectoryGeneration_Goal(metaclass=Metaclass_TrajectoryGeneration_Goal):
    """Message class 'TrajectoryGeneration_Goal'."""

    __slots__ = [
        '_costmap',
        '_odom',
        '_global_path',
        '_next_waypoint',
        '_footprint',
    ]

    _fields_and_field_types = {
        'costmap': 'nav2_msgs/Costmap',
        'odom': 'nav_msgs/Odometry',
        'global_path': 'nav_msgs/Path',
        'next_waypoint': 'geometry_msgs/PoseStamped',
        'footprint': 'geometry_msgs/PolygonStamped',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['nav2_msgs', 'msg'], 'Costmap'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Odometry'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Path'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PolygonStamped'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from nav2_msgs.msg import Costmap
        self.costmap = kwargs.get('costmap', Costmap())
        from nav_msgs.msg import Odometry
        self.odom = kwargs.get('odom', Odometry())
        from nav_msgs.msg import Path
        self.global_path = kwargs.get('global_path', Path())
        from geometry_msgs.msg import PoseStamped
        self.next_waypoint = kwargs.get('next_waypoint', PoseStamped())
        from geometry_msgs.msg import PolygonStamped
        self.footprint = kwargs.get('footprint', PolygonStamped())

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
        if self.costmap != other.costmap:
            return False
        if self.odom != other.odom:
            return False
        if self.global_path != other.global_path:
            return False
        if self.next_waypoint != other.next_waypoint:
            return False
        if self.footprint != other.footprint:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def footprint(self):
        """Message field 'footprint'."""
        return self._footprint

    @footprint.setter
    def footprint(self, value):
        if __debug__:
            from geometry_msgs.msg import PolygonStamped
            assert \
                isinstance(value, PolygonStamped), \
                "The 'footprint' field must be a sub message of type 'PolygonStamped'"
        self._footprint = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TrajectoryGeneration_Result(type):
    """Metaclass of message 'TrajectoryGeneration_Result'."""

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
                'planning_interfaces.action.TrajectoryGeneration_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_generation__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_generation__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_generation__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_generation__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_generation__result

            from planning_interfaces.msg import Trajectories
            if Trajectories.__class__._TYPE_SUPPORT is None:
                Trajectories.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryGeneration_Result(metaclass=Metaclass_TrajectoryGeneration_Result):
    """Message class 'TrajectoryGeneration_Result'."""

    __slots__ = [
        '_trajectories',
    ]

    _fields_and_field_types = {
        'trajectories': 'planning_interfaces/Trajectories',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['planning_interfaces', 'msg'], 'Trajectories'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from planning_interfaces.msg import Trajectories
        self.trajectories = kwargs.get('trajectories', Trajectories())

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
        if self.trajectories != other.trajectories:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def trajectories(self):
        """Message field 'trajectories'."""
        return self._trajectories

    @trajectories.setter
    def trajectories(self, value):
        if __debug__:
            from planning_interfaces.msg import Trajectories
            assert \
                isinstance(value, Trajectories), \
                "The 'trajectories' field must be a sub message of type 'Trajectories'"
        self._trajectories = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TrajectoryGeneration_Feedback(type):
    """Metaclass of message 'TrajectoryGeneration_Feedback'."""

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
                'planning_interfaces.action.TrajectoryGeneration_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_generation__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_generation__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_generation__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_generation__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_generation__feedback

            from planning_interfaces.msg import Trajectory
            if Trajectory.__class__._TYPE_SUPPORT is None:
                Trajectory.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryGeneration_Feedback(metaclass=Metaclass_TrajectoryGeneration_Feedback):
    """Message class 'TrajectoryGeneration_Feedback'."""

    __slots__ = [
        '_trajectory',
    ]

    _fields_and_field_types = {
        'trajectory': 'planning_interfaces/Trajectory',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['planning_interfaces', 'msg'], 'Trajectory'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from planning_interfaces.msg import Trajectory
        self.trajectory = kwargs.get('trajectory', Trajectory())

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
            from planning_interfaces.msg import Trajectory
            assert \
                isinstance(value, Trajectory), \
                "The 'trajectory' field must be a sub message of type 'Trajectory'"
        self._trajectory = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TrajectoryGeneration_SendGoal_Request(type):
    """Metaclass of message 'TrajectoryGeneration_SendGoal_Request'."""

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
                'planning_interfaces.action.TrajectoryGeneration_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_generation__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_generation__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_generation__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_generation__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_generation__send_goal__request

            from planning_interfaces.action import TrajectoryGeneration
            if TrajectoryGeneration.Goal.__class__._TYPE_SUPPORT is None:
                TrajectoryGeneration.Goal.__class__.__import_type_support__()

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


class TrajectoryGeneration_SendGoal_Request(metaclass=Metaclass_TrajectoryGeneration_SendGoal_Request):
    """Message class 'TrajectoryGeneration_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'planning_interfaces/TrajectoryGeneration_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['planning_interfaces', 'action'], 'TrajectoryGeneration_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from planning_interfaces.action._trajectory_generation import TrajectoryGeneration_Goal
        self.goal = kwargs.get('goal', TrajectoryGeneration_Goal())

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

    @property
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

    @property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from planning_interfaces.action._trajectory_generation import TrajectoryGeneration_Goal
            assert \
                isinstance(value, TrajectoryGeneration_Goal), \
                "The 'goal' field must be a sub message of type 'TrajectoryGeneration_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TrajectoryGeneration_SendGoal_Response(type):
    """Metaclass of message 'TrajectoryGeneration_SendGoal_Response'."""

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
                'planning_interfaces.action.TrajectoryGeneration_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_generation__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_generation__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_generation__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_generation__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_generation__send_goal__response

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


class TrajectoryGeneration_SendGoal_Response(metaclass=Metaclass_TrajectoryGeneration_SendGoal_Response):
    """Message class 'TrajectoryGeneration_SendGoal_Response'."""

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

    @property
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

    @property
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


class Metaclass_TrajectoryGeneration_SendGoal(type):
    """Metaclass of service 'TrajectoryGeneration_SendGoal'."""

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
                'planning_interfaces.action.TrajectoryGeneration_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__trajectory_generation__send_goal

            from planning_interfaces.action import _trajectory_generation
            if _trajectory_generation.Metaclass_TrajectoryGeneration_SendGoal_Request._TYPE_SUPPORT is None:
                _trajectory_generation.Metaclass_TrajectoryGeneration_SendGoal_Request.__import_type_support__()
            if _trajectory_generation.Metaclass_TrajectoryGeneration_SendGoal_Response._TYPE_SUPPORT is None:
                _trajectory_generation.Metaclass_TrajectoryGeneration_SendGoal_Response.__import_type_support__()


class TrajectoryGeneration_SendGoal(metaclass=Metaclass_TrajectoryGeneration_SendGoal):
    from planning_interfaces.action._trajectory_generation import TrajectoryGeneration_SendGoal_Request as Request
    from planning_interfaces.action._trajectory_generation import TrajectoryGeneration_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TrajectoryGeneration_GetResult_Request(type):
    """Metaclass of message 'TrajectoryGeneration_GetResult_Request'."""

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
                'planning_interfaces.action.TrajectoryGeneration_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_generation__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_generation__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_generation__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_generation__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_generation__get_result__request

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


class TrajectoryGeneration_GetResult_Request(metaclass=Metaclass_TrajectoryGeneration_GetResult_Request):
    """Message class 'TrajectoryGeneration_GetResult_Request'."""

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

    @property
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
# import rosidl_parser.definition


class Metaclass_TrajectoryGeneration_GetResult_Response(type):
    """Metaclass of message 'TrajectoryGeneration_GetResult_Response'."""

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
                'planning_interfaces.action.TrajectoryGeneration_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_generation__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_generation__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_generation__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_generation__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_generation__get_result__response

            from planning_interfaces.action import TrajectoryGeneration
            if TrajectoryGeneration.Result.__class__._TYPE_SUPPORT is None:
                TrajectoryGeneration.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryGeneration_GetResult_Response(metaclass=Metaclass_TrajectoryGeneration_GetResult_Response):
    """Message class 'TrajectoryGeneration_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'planning_interfaces/TrajectoryGeneration_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['planning_interfaces', 'action'], 'TrajectoryGeneration_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from planning_interfaces.action._trajectory_generation import TrajectoryGeneration_Result
        self.result = kwargs.get('result', TrajectoryGeneration_Result())

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

    @property
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

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from planning_interfaces.action._trajectory_generation import TrajectoryGeneration_Result
            assert \
                isinstance(value, TrajectoryGeneration_Result), \
                "The 'result' field must be a sub message of type 'TrajectoryGeneration_Result'"
        self._result = value


class Metaclass_TrajectoryGeneration_GetResult(type):
    """Metaclass of service 'TrajectoryGeneration_GetResult'."""

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
                'planning_interfaces.action.TrajectoryGeneration_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__trajectory_generation__get_result

            from planning_interfaces.action import _trajectory_generation
            if _trajectory_generation.Metaclass_TrajectoryGeneration_GetResult_Request._TYPE_SUPPORT is None:
                _trajectory_generation.Metaclass_TrajectoryGeneration_GetResult_Request.__import_type_support__()
            if _trajectory_generation.Metaclass_TrajectoryGeneration_GetResult_Response._TYPE_SUPPORT is None:
                _trajectory_generation.Metaclass_TrajectoryGeneration_GetResult_Response.__import_type_support__()


class TrajectoryGeneration_GetResult(metaclass=Metaclass_TrajectoryGeneration_GetResult):
    from planning_interfaces.action._trajectory_generation import TrajectoryGeneration_GetResult_Request as Request
    from planning_interfaces.action._trajectory_generation import TrajectoryGeneration_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TrajectoryGeneration_FeedbackMessage(type):
    """Metaclass of message 'TrajectoryGeneration_FeedbackMessage'."""

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
                'planning_interfaces.action.TrajectoryGeneration_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__trajectory_generation__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__trajectory_generation__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__trajectory_generation__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__trajectory_generation__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__trajectory_generation__feedback_message

            from planning_interfaces.action import TrajectoryGeneration
            if TrajectoryGeneration.Feedback.__class__._TYPE_SUPPORT is None:
                TrajectoryGeneration.Feedback.__class__.__import_type_support__()

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


class TrajectoryGeneration_FeedbackMessage(metaclass=Metaclass_TrajectoryGeneration_FeedbackMessage):
    """Message class 'TrajectoryGeneration_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'planning_interfaces/TrajectoryGeneration_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['planning_interfaces', 'action'], 'TrajectoryGeneration_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from planning_interfaces.action._trajectory_generation import TrajectoryGeneration_Feedback
        self.feedback = kwargs.get('feedback', TrajectoryGeneration_Feedback())

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

    @property
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

    @property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from planning_interfaces.action._trajectory_generation import TrajectoryGeneration_Feedback
            assert \
                isinstance(value, TrajectoryGeneration_Feedback), \
                "The 'feedback' field must be a sub message of type 'TrajectoryGeneration_Feedback'"
        self._feedback = value


class Metaclass_TrajectoryGeneration(type):
    """Metaclass of action 'TrajectoryGeneration'."""

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
                'planning_interfaces.action.TrajectoryGeneration')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__trajectory_generation

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from planning_interfaces.action import _trajectory_generation
            if _trajectory_generation.Metaclass_TrajectoryGeneration_SendGoal._TYPE_SUPPORT is None:
                _trajectory_generation.Metaclass_TrajectoryGeneration_SendGoal.__import_type_support__()
            if _trajectory_generation.Metaclass_TrajectoryGeneration_GetResult._TYPE_SUPPORT is None:
                _trajectory_generation.Metaclass_TrajectoryGeneration_GetResult.__import_type_support__()
            if _trajectory_generation.Metaclass_TrajectoryGeneration_FeedbackMessage._TYPE_SUPPORT is None:
                _trajectory_generation.Metaclass_TrajectoryGeneration_FeedbackMessage.__import_type_support__()


class TrajectoryGeneration(metaclass=Metaclass_TrajectoryGeneration):

    # The goal message defined in the action definition.
    from planning_interfaces.action._trajectory_generation import TrajectoryGeneration_Goal as Goal
    # The result message defined in the action definition.
    from planning_interfaces.action._trajectory_generation import TrajectoryGeneration_Result as Result
    # The feedback message defined in the action definition.
    from planning_interfaces.action._trajectory_generation import TrajectoryGeneration_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from planning_interfaces.action._trajectory_generation import TrajectoryGeneration_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from planning_interfaces.action._trajectory_generation import TrajectoryGeneration_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from planning_interfaces.action._trajectory_generation import TrajectoryGeneration_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
