// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interface:msg/Distvel.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__MSG__DETAIL__DISTVEL__STRUCT_H_
#define CUSTOM_INTERFACE__MSG__DETAIL__DISTVEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Distvel in the package custom_interface.
typedef struct custom_interface__msg__Distvel
{
  int64_t distancia;
  double velocidad;
} custom_interface__msg__Distvel;

// Struct for a sequence of custom_interface__msg__Distvel.
typedef struct custom_interface__msg__Distvel__Sequence
{
  custom_interface__msg__Distvel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interface__msg__Distvel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACE__MSG__DETAIL__DISTVEL__STRUCT_H_
