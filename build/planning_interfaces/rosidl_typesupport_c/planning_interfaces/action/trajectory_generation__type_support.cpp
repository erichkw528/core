// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from planning_interfaces:action/TrajectoryGeneration.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "planning_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
#include "planning_interfaces/action/detail/trajectory_generation__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace planning_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TrajectoryGeneration_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajectoryGeneration_Goal_type_support_ids_t;

static const _TrajectoryGeneration_Goal_type_support_ids_t _TrajectoryGeneration_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TrajectoryGeneration_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajectoryGeneration_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajectoryGeneration_Goal_type_support_symbol_names_t _TrajectoryGeneration_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_Goal)),
  }
};

typedef struct _TrajectoryGeneration_Goal_type_support_data_t
{
  void * data[2];
} _TrajectoryGeneration_Goal_type_support_data_t;

static _TrajectoryGeneration_Goal_type_support_data_t _TrajectoryGeneration_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajectoryGeneration_Goal_message_typesupport_map = {
  2,
  "planning_interfaces",
  &_TrajectoryGeneration_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_TrajectoryGeneration_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_TrajectoryGeneration_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TrajectoryGeneration_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajectoryGeneration_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace planning_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_planning_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, planning_interfaces, action, TrajectoryGeneration_Goal)() {
  return &::planning_interfaces::action::rosidl_typesupport_c::TrajectoryGeneration_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "planning_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace planning_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TrajectoryGeneration_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajectoryGeneration_Result_type_support_ids_t;

static const _TrajectoryGeneration_Result_type_support_ids_t _TrajectoryGeneration_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TrajectoryGeneration_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajectoryGeneration_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajectoryGeneration_Result_type_support_symbol_names_t _TrajectoryGeneration_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_Result)),
  }
};

typedef struct _TrajectoryGeneration_Result_type_support_data_t
{
  void * data[2];
} _TrajectoryGeneration_Result_type_support_data_t;

static _TrajectoryGeneration_Result_type_support_data_t _TrajectoryGeneration_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajectoryGeneration_Result_message_typesupport_map = {
  2,
  "planning_interfaces",
  &_TrajectoryGeneration_Result_message_typesupport_ids.typesupport_identifier[0],
  &_TrajectoryGeneration_Result_message_typesupport_symbol_names.symbol_name[0],
  &_TrajectoryGeneration_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TrajectoryGeneration_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajectoryGeneration_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace planning_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_planning_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, planning_interfaces, action, TrajectoryGeneration_Result)() {
  return &::planning_interfaces::action::rosidl_typesupport_c::TrajectoryGeneration_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "planning_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace planning_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TrajectoryGeneration_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajectoryGeneration_Feedback_type_support_ids_t;

static const _TrajectoryGeneration_Feedback_type_support_ids_t _TrajectoryGeneration_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TrajectoryGeneration_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajectoryGeneration_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajectoryGeneration_Feedback_type_support_symbol_names_t _TrajectoryGeneration_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_Feedback)),
  }
};

typedef struct _TrajectoryGeneration_Feedback_type_support_data_t
{
  void * data[2];
} _TrajectoryGeneration_Feedback_type_support_data_t;

static _TrajectoryGeneration_Feedback_type_support_data_t _TrajectoryGeneration_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajectoryGeneration_Feedback_message_typesupport_map = {
  2,
  "planning_interfaces",
  &_TrajectoryGeneration_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_TrajectoryGeneration_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_TrajectoryGeneration_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TrajectoryGeneration_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajectoryGeneration_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace planning_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_planning_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, planning_interfaces, action, TrajectoryGeneration_Feedback)() {
  return &::planning_interfaces::action::rosidl_typesupport_c::TrajectoryGeneration_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "planning_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace planning_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TrajectoryGeneration_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajectoryGeneration_SendGoal_Request_type_support_ids_t;

static const _TrajectoryGeneration_SendGoal_Request_type_support_ids_t _TrajectoryGeneration_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TrajectoryGeneration_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajectoryGeneration_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajectoryGeneration_SendGoal_Request_type_support_symbol_names_t _TrajectoryGeneration_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_SendGoal_Request)),
  }
};

typedef struct _TrajectoryGeneration_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _TrajectoryGeneration_SendGoal_Request_type_support_data_t;

static _TrajectoryGeneration_SendGoal_Request_type_support_data_t _TrajectoryGeneration_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajectoryGeneration_SendGoal_Request_message_typesupport_map = {
  2,
  "planning_interfaces",
  &_TrajectoryGeneration_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TrajectoryGeneration_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TrajectoryGeneration_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TrajectoryGeneration_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajectoryGeneration_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace planning_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_planning_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, planning_interfaces, action, TrajectoryGeneration_SendGoal_Request)() {
  return &::planning_interfaces::action::rosidl_typesupport_c::TrajectoryGeneration_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "planning_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace planning_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TrajectoryGeneration_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajectoryGeneration_SendGoal_Response_type_support_ids_t;

static const _TrajectoryGeneration_SendGoal_Response_type_support_ids_t _TrajectoryGeneration_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TrajectoryGeneration_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajectoryGeneration_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajectoryGeneration_SendGoal_Response_type_support_symbol_names_t _TrajectoryGeneration_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_SendGoal_Response)),
  }
};

typedef struct _TrajectoryGeneration_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _TrajectoryGeneration_SendGoal_Response_type_support_data_t;

static _TrajectoryGeneration_SendGoal_Response_type_support_data_t _TrajectoryGeneration_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajectoryGeneration_SendGoal_Response_message_typesupport_map = {
  2,
  "planning_interfaces",
  &_TrajectoryGeneration_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TrajectoryGeneration_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TrajectoryGeneration_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TrajectoryGeneration_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajectoryGeneration_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace planning_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_planning_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, planning_interfaces, action, TrajectoryGeneration_SendGoal_Response)() {
  return &::planning_interfaces::action::rosidl_typesupport_c::TrajectoryGeneration_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "planning_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace planning_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TrajectoryGeneration_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajectoryGeneration_SendGoal_type_support_ids_t;

static const _TrajectoryGeneration_SendGoal_type_support_ids_t _TrajectoryGeneration_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TrajectoryGeneration_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajectoryGeneration_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajectoryGeneration_SendGoal_type_support_symbol_names_t _TrajectoryGeneration_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_SendGoal)),
  }
};

typedef struct _TrajectoryGeneration_SendGoal_type_support_data_t
{
  void * data[2];
} _TrajectoryGeneration_SendGoal_type_support_data_t;

static _TrajectoryGeneration_SendGoal_type_support_data_t _TrajectoryGeneration_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajectoryGeneration_SendGoal_service_typesupport_map = {
  2,
  "planning_interfaces",
  &_TrajectoryGeneration_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_TrajectoryGeneration_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_TrajectoryGeneration_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TrajectoryGeneration_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajectoryGeneration_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace planning_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_planning_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, planning_interfaces, action, TrajectoryGeneration_SendGoal)() {
  return &::planning_interfaces::action::rosidl_typesupport_c::TrajectoryGeneration_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "planning_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace planning_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TrajectoryGeneration_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajectoryGeneration_GetResult_Request_type_support_ids_t;

static const _TrajectoryGeneration_GetResult_Request_type_support_ids_t _TrajectoryGeneration_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TrajectoryGeneration_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajectoryGeneration_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajectoryGeneration_GetResult_Request_type_support_symbol_names_t _TrajectoryGeneration_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_GetResult_Request)),
  }
};

typedef struct _TrajectoryGeneration_GetResult_Request_type_support_data_t
{
  void * data[2];
} _TrajectoryGeneration_GetResult_Request_type_support_data_t;

static _TrajectoryGeneration_GetResult_Request_type_support_data_t _TrajectoryGeneration_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajectoryGeneration_GetResult_Request_message_typesupport_map = {
  2,
  "planning_interfaces",
  &_TrajectoryGeneration_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TrajectoryGeneration_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TrajectoryGeneration_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TrajectoryGeneration_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajectoryGeneration_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace planning_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_planning_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, planning_interfaces, action, TrajectoryGeneration_GetResult_Request)() {
  return &::planning_interfaces::action::rosidl_typesupport_c::TrajectoryGeneration_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "planning_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace planning_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TrajectoryGeneration_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajectoryGeneration_GetResult_Response_type_support_ids_t;

static const _TrajectoryGeneration_GetResult_Response_type_support_ids_t _TrajectoryGeneration_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TrajectoryGeneration_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajectoryGeneration_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajectoryGeneration_GetResult_Response_type_support_symbol_names_t _TrajectoryGeneration_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_GetResult_Response)),
  }
};

typedef struct _TrajectoryGeneration_GetResult_Response_type_support_data_t
{
  void * data[2];
} _TrajectoryGeneration_GetResult_Response_type_support_data_t;

static _TrajectoryGeneration_GetResult_Response_type_support_data_t _TrajectoryGeneration_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajectoryGeneration_GetResult_Response_message_typesupport_map = {
  2,
  "planning_interfaces",
  &_TrajectoryGeneration_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TrajectoryGeneration_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TrajectoryGeneration_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TrajectoryGeneration_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajectoryGeneration_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace planning_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_planning_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, planning_interfaces, action, TrajectoryGeneration_GetResult_Response)() {
  return &::planning_interfaces::action::rosidl_typesupport_c::TrajectoryGeneration_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "planning_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace planning_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TrajectoryGeneration_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajectoryGeneration_GetResult_type_support_ids_t;

static const _TrajectoryGeneration_GetResult_type_support_ids_t _TrajectoryGeneration_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TrajectoryGeneration_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajectoryGeneration_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajectoryGeneration_GetResult_type_support_symbol_names_t _TrajectoryGeneration_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_GetResult)),
  }
};

typedef struct _TrajectoryGeneration_GetResult_type_support_data_t
{
  void * data[2];
} _TrajectoryGeneration_GetResult_type_support_data_t;

static _TrajectoryGeneration_GetResult_type_support_data_t _TrajectoryGeneration_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajectoryGeneration_GetResult_service_typesupport_map = {
  2,
  "planning_interfaces",
  &_TrajectoryGeneration_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_TrajectoryGeneration_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_TrajectoryGeneration_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TrajectoryGeneration_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajectoryGeneration_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace planning_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_planning_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, planning_interfaces, action, TrajectoryGeneration_GetResult)() {
  return &::planning_interfaces::action::rosidl_typesupport_c::TrajectoryGeneration_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "planning_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "planning_interfaces/action/detail/trajectory_generation__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace planning_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TrajectoryGeneration_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajectoryGeneration_FeedbackMessage_type_support_ids_t;

static const _TrajectoryGeneration_FeedbackMessage_type_support_ids_t _TrajectoryGeneration_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TrajectoryGeneration_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajectoryGeneration_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajectoryGeneration_FeedbackMessage_type_support_symbol_names_t _TrajectoryGeneration_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_interfaces, action, TrajectoryGeneration_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_interfaces, action, TrajectoryGeneration_FeedbackMessage)),
  }
};

typedef struct _TrajectoryGeneration_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _TrajectoryGeneration_FeedbackMessage_type_support_data_t;

static _TrajectoryGeneration_FeedbackMessage_type_support_data_t _TrajectoryGeneration_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajectoryGeneration_FeedbackMessage_message_typesupport_map = {
  2,
  "planning_interfaces",
  &_TrajectoryGeneration_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_TrajectoryGeneration_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_TrajectoryGeneration_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TrajectoryGeneration_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajectoryGeneration_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace planning_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_planning_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, planning_interfaces, action, TrajectoryGeneration_FeedbackMessage)() {
  return &::planning_interfaces::action::rosidl_typesupport_c::TrajectoryGeneration_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "planning_interfaces/action/trajectory_generation.h"
#include "planning_interfaces/action/detail/trajectory_generation__type_support.h"

static rosidl_action_type_support_t _planning_interfaces__action__TrajectoryGeneration__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_planning_interfaces
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, planning_interfaces, action, TrajectoryGeneration)()
{
  // Thread-safe by always writing the same values to the static struct
  _planning_interfaces__action__TrajectoryGeneration__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, planning_interfaces, action, TrajectoryGeneration_SendGoal)();
  _planning_interfaces__action__TrajectoryGeneration__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, planning_interfaces, action, TrajectoryGeneration_GetResult)();
  _planning_interfaces__action__TrajectoryGeneration__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _planning_interfaces__action__TrajectoryGeneration__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, planning_interfaces, action, TrajectoryGeneration_FeedbackMessage)();
  _planning_interfaces__action__TrajectoryGeneration__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_planning_interfaces__action__TrajectoryGeneration__typesupport_c;
}

#ifdef __cplusplus
}
#endif
