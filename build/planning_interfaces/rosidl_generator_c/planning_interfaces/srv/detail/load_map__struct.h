// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from planning_interfaces:srv/LoadMap.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_INTERFACES__SRV__DETAIL__LOAD_MAP__STRUCT_H_
#define PLANNING_INTERFACES__SRV__DETAIL__LOAD_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'map_url'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/LoadMap in the package planning_interfaces.
typedef struct planning_interfaces__srv__LoadMap_Request
{
  rosidl_runtime_c__String map_url;
} planning_interfaces__srv__LoadMap_Request;

// Struct for a sequence of planning_interfaces__srv__LoadMap_Request.
typedef struct planning_interfaces__srv__LoadMap_Request__Sequence
{
  planning_interfaces__srv__LoadMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_interfaces__srv__LoadMap_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/LoadMap in the package planning_interfaces.
typedef struct planning_interfaces__srv__LoadMap_Response
{
  bool status;
} planning_interfaces__srv__LoadMap_Response;

// Struct for a sequence of planning_interfaces__srv__LoadMap_Response.
typedef struct planning_interfaces__srv__LoadMap_Response__Sequence
{
  planning_interfaces__srv__LoadMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_interfaces__srv__LoadMap_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANNING_INTERFACES__SRV__DETAIL__LOAD_MAP__STRUCT_H_
