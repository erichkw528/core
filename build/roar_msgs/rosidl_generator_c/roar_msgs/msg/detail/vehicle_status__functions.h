// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from roar_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef ROAR_MSGS__MSG__DETAIL__VEHICLE_STATUS__FUNCTIONS_H_
#define ROAR_MSGS__MSG__DETAIL__VEHICLE_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "roar_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "roar_msgs/msg/detail/vehicle_status__struct.h"

/// Initialize msg/VehicleStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * roar_msgs__msg__VehicleStatus
 * )) before or use
 * roar_msgs__msg__VehicleStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_roar_msgs
bool
roar_msgs__msg__VehicleStatus__init(roar_msgs__msg__VehicleStatus * msg);

/// Finalize msg/VehicleStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roar_msgs
void
roar_msgs__msg__VehicleStatus__fini(roar_msgs__msg__VehicleStatus * msg);

/// Create msg/VehicleStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * roar_msgs__msg__VehicleStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roar_msgs
roar_msgs__msg__VehicleStatus *
roar_msgs__msg__VehicleStatus__create();

/// Destroy msg/VehicleStatus message.
/**
 * It calls
 * roar_msgs__msg__VehicleStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roar_msgs
void
roar_msgs__msg__VehicleStatus__destroy(roar_msgs__msg__VehicleStatus * msg);


/// Initialize array of msg/VehicleStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * roar_msgs__msg__VehicleStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_roar_msgs
bool
roar_msgs__msg__VehicleStatus__Sequence__init(roar_msgs__msg__VehicleStatus__Sequence * array, size_t size);

/// Finalize array of msg/VehicleStatus messages.
/**
 * It calls
 * roar_msgs__msg__VehicleStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roar_msgs
void
roar_msgs__msg__VehicleStatus__Sequence__fini(roar_msgs__msg__VehicleStatus__Sequence * array);

/// Create array of msg/VehicleStatus messages.
/**
 * It allocates the memory for the array and calls
 * roar_msgs__msg__VehicleStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roar_msgs
roar_msgs__msg__VehicleStatus__Sequence *
roar_msgs__msg__VehicleStatus__Sequence__create(size_t size);

/// Destroy array of msg/VehicleStatus messages.
/**
 * It calls
 * roar_msgs__msg__VehicleStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roar_msgs
void
roar_msgs__msg__VehicleStatus__Sequence__destroy(roar_msgs__msg__VehicleStatus__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROAR_MSGS__MSG__DETAIL__VEHICLE_STATUS__FUNCTIONS_H_
