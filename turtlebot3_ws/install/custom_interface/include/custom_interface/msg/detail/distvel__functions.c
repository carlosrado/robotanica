// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interface:msg/Distvel.idl
// generated code does not contain a copyright notice
#include "custom_interface/msg/detail/distvel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
custom_interface__msg__Distvel__init(custom_interface__msg__Distvel * msg)
{
  if (!msg) {
    return false;
  }
  // distancia
  // velocidad
  return true;
}

void
custom_interface__msg__Distvel__fini(custom_interface__msg__Distvel * msg)
{
  if (!msg) {
    return;
  }
  // distancia
  // velocidad
}

custom_interface__msg__Distvel *
custom_interface__msg__Distvel__create()
{
  custom_interface__msg__Distvel * msg = (custom_interface__msg__Distvel *)malloc(sizeof(custom_interface__msg__Distvel));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__msg__Distvel));
  bool success = custom_interface__msg__Distvel__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interface__msg__Distvel__destroy(custom_interface__msg__Distvel * msg)
{
  if (msg) {
    custom_interface__msg__Distvel__fini(msg);
  }
  free(msg);
}


bool
custom_interface__msg__Distvel__Sequence__init(custom_interface__msg__Distvel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interface__msg__Distvel * data = NULL;
  if (size) {
    data = (custom_interface__msg__Distvel *)calloc(size, sizeof(custom_interface__msg__Distvel));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__msg__Distvel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__msg__Distvel__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_interface__msg__Distvel__Sequence__fini(custom_interface__msg__Distvel__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interface__msg__Distvel__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_interface__msg__Distvel__Sequence *
custom_interface__msg__Distvel__Sequence__create(size_t size)
{
  custom_interface__msg__Distvel__Sequence * array = (custom_interface__msg__Distvel__Sequence *)malloc(sizeof(custom_interface__msg__Distvel__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__msg__Distvel__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interface__msg__Distvel__Sequence__destroy(custom_interface__msg__Distvel__Sequence * array)
{
  if (array) {
    custom_interface__msg__Distvel__Sequence__fini(array);
  }
  free(array);
}
