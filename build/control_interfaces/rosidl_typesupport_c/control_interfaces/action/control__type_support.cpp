// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from control_interfaces:action/Control.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "control_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
#include "control_interfaces/action/detail/control__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Control_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Control_Goal_type_support_ids_t;

static const _Control_Goal_type_support_ids_t _Control_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Control_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Control_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Control_Goal_type_support_symbol_names_t _Control_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_interfaces, action, Control_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_interfaces, action, Control_Goal)),
  }
};

typedef struct _Control_Goal_type_support_data_t
{
  void * data[2];
} _Control_Goal_type_support_data_t;

static _Control_Goal_type_support_data_t _Control_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Control_Goal_message_typesupport_map = {
  2,
  "control_interfaces",
  &_Control_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Control_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Control_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Control_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Control_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, control_interfaces, action, Control_Goal)() {
  return &::control_interfaces::action::rosidl_typesupport_c::Control_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "control_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "control_interfaces/action/detail/control__struct.h"
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

namespace control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Control_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Control_Result_type_support_ids_t;

static const _Control_Result_type_support_ids_t _Control_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Control_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Control_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Control_Result_type_support_symbol_names_t _Control_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_interfaces, action, Control_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_interfaces, action, Control_Result)),
  }
};

typedef struct _Control_Result_type_support_data_t
{
  void * data[2];
} _Control_Result_type_support_data_t;

static _Control_Result_type_support_data_t _Control_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Control_Result_message_typesupport_map = {
  2,
  "control_interfaces",
  &_Control_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Control_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Control_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Control_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Control_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, control_interfaces, action, Control_Result)() {
  return &::control_interfaces::action::rosidl_typesupport_c::Control_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "control_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "control_interfaces/action/detail/control__struct.h"
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

namespace control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Control_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Control_Feedback_type_support_ids_t;

static const _Control_Feedback_type_support_ids_t _Control_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Control_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Control_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Control_Feedback_type_support_symbol_names_t _Control_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_interfaces, action, Control_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_interfaces, action, Control_Feedback)),
  }
};

typedef struct _Control_Feedback_type_support_data_t
{
  void * data[2];
} _Control_Feedback_type_support_data_t;

static _Control_Feedback_type_support_data_t _Control_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Control_Feedback_message_typesupport_map = {
  2,
  "control_interfaces",
  &_Control_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Control_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Control_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Control_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Control_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, control_interfaces, action, Control_Feedback)() {
  return &::control_interfaces::action::rosidl_typesupport_c::Control_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "control_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "control_interfaces/action/detail/control__struct.h"
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

namespace control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Control_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Control_SendGoal_Request_type_support_ids_t;

static const _Control_SendGoal_Request_type_support_ids_t _Control_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Control_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Control_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Control_SendGoal_Request_type_support_symbol_names_t _Control_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_interfaces, action, Control_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_interfaces, action, Control_SendGoal_Request)),
  }
};

typedef struct _Control_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Control_SendGoal_Request_type_support_data_t;

static _Control_SendGoal_Request_type_support_data_t _Control_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Control_SendGoal_Request_message_typesupport_map = {
  2,
  "control_interfaces",
  &_Control_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Control_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Control_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Control_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Control_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, control_interfaces, action, Control_SendGoal_Request)() {
  return &::control_interfaces::action::rosidl_typesupport_c::Control_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "control_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "control_interfaces/action/detail/control__struct.h"
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

namespace control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Control_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Control_SendGoal_Response_type_support_ids_t;

static const _Control_SendGoal_Response_type_support_ids_t _Control_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Control_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Control_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Control_SendGoal_Response_type_support_symbol_names_t _Control_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_interfaces, action, Control_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_interfaces, action, Control_SendGoal_Response)),
  }
};

typedef struct _Control_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Control_SendGoal_Response_type_support_data_t;

static _Control_SendGoal_Response_type_support_data_t _Control_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Control_SendGoal_Response_message_typesupport_map = {
  2,
  "control_interfaces",
  &_Control_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Control_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Control_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Control_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Control_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, control_interfaces, action, Control_SendGoal_Response)() {
  return &::control_interfaces::action::rosidl_typesupport_c::Control_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "control_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Control_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Control_SendGoal_type_support_ids_t;

static const _Control_SendGoal_type_support_ids_t _Control_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Control_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Control_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Control_SendGoal_type_support_symbol_names_t _Control_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_interfaces, action, Control_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_interfaces, action, Control_SendGoal)),
  }
};

typedef struct _Control_SendGoal_type_support_data_t
{
  void * data[2];
} _Control_SendGoal_type_support_data_t;

static _Control_SendGoal_type_support_data_t _Control_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Control_SendGoal_service_typesupport_map = {
  2,
  "control_interfaces",
  &_Control_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Control_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Control_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Control_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Control_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_control_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, control_interfaces, action, Control_SendGoal)() {
  return &::control_interfaces::action::rosidl_typesupport_c::Control_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "control_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "control_interfaces/action/detail/control__struct.h"
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

namespace control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Control_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Control_GetResult_Request_type_support_ids_t;

static const _Control_GetResult_Request_type_support_ids_t _Control_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Control_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Control_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Control_GetResult_Request_type_support_symbol_names_t _Control_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_interfaces, action, Control_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_interfaces, action, Control_GetResult_Request)),
  }
};

typedef struct _Control_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Control_GetResult_Request_type_support_data_t;

static _Control_GetResult_Request_type_support_data_t _Control_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Control_GetResult_Request_message_typesupport_map = {
  2,
  "control_interfaces",
  &_Control_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Control_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Control_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Control_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Control_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, control_interfaces, action, Control_GetResult_Request)() {
  return &::control_interfaces::action::rosidl_typesupport_c::Control_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "control_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "control_interfaces/action/detail/control__struct.h"
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

namespace control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Control_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Control_GetResult_Response_type_support_ids_t;

static const _Control_GetResult_Response_type_support_ids_t _Control_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Control_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Control_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Control_GetResult_Response_type_support_symbol_names_t _Control_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_interfaces, action, Control_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_interfaces, action, Control_GetResult_Response)),
  }
};

typedef struct _Control_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Control_GetResult_Response_type_support_data_t;

static _Control_GetResult_Response_type_support_data_t _Control_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Control_GetResult_Response_message_typesupport_map = {
  2,
  "control_interfaces",
  &_Control_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Control_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Control_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Control_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Control_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, control_interfaces, action, Control_GetResult_Response)() {
  return &::control_interfaces::action::rosidl_typesupport_c::Control_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "control_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Control_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Control_GetResult_type_support_ids_t;

static const _Control_GetResult_type_support_ids_t _Control_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Control_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Control_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Control_GetResult_type_support_symbol_names_t _Control_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_interfaces, action, Control_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_interfaces, action, Control_GetResult)),
  }
};

typedef struct _Control_GetResult_type_support_data_t
{
  void * data[2];
} _Control_GetResult_type_support_data_t;

static _Control_GetResult_type_support_data_t _Control_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Control_GetResult_service_typesupport_map = {
  2,
  "control_interfaces",
  &_Control_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Control_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Control_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Control_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Control_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_control_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, control_interfaces, action, Control_GetResult)() {
  return &::control_interfaces::action::rosidl_typesupport_c::Control_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "control_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "control_interfaces/action/detail/control__struct.h"
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

namespace control_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Control_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Control_FeedbackMessage_type_support_ids_t;

static const _Control_FeedbackMessage_type_support_ids_t _Control_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Control_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Control_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Control_FeedbackMessage_type_support_symbol_names_t _Control_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_interfaces, action, Control_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_interfaces, action, Control_FeedbackMessage)),
  }
};

typedef struct _Control_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Control_FeedbackMessage_type_support_data_t;

static _Control_FeedbackMessage_type_support_data_t _Control_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Control_FeedbackMessage_message_typesupport_map = {
  2,
  "control_interfaces",
  &_Control_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Control_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Control_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Control_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Control_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace control_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_control_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, control_interfaces, action, Control_FeedbackMessage)() {
  return &::control_interfaces::action::rosidl_typesupport_c::Control_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "control_interfaces/action/control.h"
#include "control_interfaces/action/detail/control__type_support.h"

static rosidl_action_type_support_t _control_interfaces__action__Control__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_control_interfaces
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, control_interfaces, action, Control)()
{
  // Thread-safe by always writing the same values to the static struct
  _control_interfaces__action__Control__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, control_interfaces, action, Control_SendGoal)();
  _control_interfaces__action__Control__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, control_interfaces, action, Control_GetResult)();
  _control_interfaces__action__Control__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _control_interfaces__action__Control__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, control_interfaces, action, Control_FeedbackMessage)();
  _control_interfaces__action__Control__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_control_interfaces__action__Control__typesupport_c;
}

#ifdef __cplusplus
}
#endif
