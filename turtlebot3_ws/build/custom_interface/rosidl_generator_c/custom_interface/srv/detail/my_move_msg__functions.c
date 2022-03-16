// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interface:srv/MyMoveMsg.idl
// generated code does not contain a copyright notice
#include "custom_interface/srv/detail/my_move_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `move`
#include "rosidl_runtime_c/string_functions.h"

bool
custom_interface__srv__MyMoveMsg_Request__init(custom_interface__srv__MyMoveMsg_Request * msg)
{
  if (!msg) {
    return false;
  }
  // move
  if (!rosidl_runtime_c__String__init(&msg->move)) {
    custom_interface__srv__MyMoveMsg_Request__fini(msg);
    return false;
  }
  return true;
}

void
custom_interface__srv__MyMoveMsg_Request__fini(custom_interface__srv__MyMoveMsg_Request * msg)
{
  if (!msg) {
    return;
  }
  // move
  rosidl_runtime_c__String__fini(&msg->move);
}

custom_interface__srv__MyMoveMsg_Request *
custom_interface__srv__MyMoveMsg_Request__create()
{
  custom_interface__srv__MyMoveMsg_Request * msg = (custom_interface__srv__MyMoveMsg_Request *)malloc(sizeof(custom_interface__srv__MyMoveMsg_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__srv__MyMoveMsg_Request));
  bool success = custom_interface__srv__MyMoveMsg_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interface__srv__MyMoveMsg_Request__destroy(custom_interface__srv__MyMoveMsg_Request * msg)
{
  if (msg) {
    custom_interface__srv__MyMoveMsg_Request__fini(msg);
  }
  free(msg);
}


bool
custom_interface__srv__MyMoveMsg_Request__Sequence__init(custom_interface__srv__MyMoveMsg_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interface__srv__MyMoveMsg_Request * data = NULL;
  if (size) {
    data = (custom_interface__srv__MyMoveMsg_Request *)calloc(size, sizeof(custom_interface__srv__MyMoveMsg_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__srv__MyMoveMsg_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__srv__MyMoveMsg_Request__fini(&data[i - 1]);
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
custom_interface__srv__MyMoveMsg_Request__Sequence__fini(custom_interface__srv__MyMoveMsg_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interface__srv__MyMoveMsg_Request__fini(&array->data[i]);
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

custom_interface__srv__MyMoveMsg_Request__Sequence *
custom_interface__srv__MyMoveMsg_Request__Sequence__create(size_t size)
{
  custom_interface__srv__MyMoveMsg_Request__Sequence * array = (custom_interface__srv__MyMoveMsg_Request__Sequence *)malloc(sizeof(custom_interface__srv__MyMoveMsg_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__srv__MyMoveMsg_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interface__srv__MyMoveMsg_Request__Sequence__destroy(custom_interface__srv__MyMoveMsg_Request__Sequence * array)
{
  if (array) {
    custom_interface__srv__MyMoveMsg_Request__Sequence__fini(array);
  }
  free(array);
}


bool
custom_interface__srv__MyMoveMsg_Response__init(custom_interface__srv__MyMoveMsg_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
custom_interface__srv__MyMoveMsg_Response__fini(custom_interface__srv__MyMoveMsg_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

custom_interface__srv__MyMoveMsg_Response *
custom_interface__srv__MyMoveMsg_Response__create()
{
  custom_interface__srv__MyMoveMsg_Response * msg = (custom_interface__srv__MyMoveMsg_Response *)malloc(sizeof(custom_interface__srv__MyMoveMsg_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__srv__MyMoveMsg_Response));
  bool success = custom_interface__srv__MyMoveMsg_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interface__srv__MyMoveMsg_Response__destroy(custom_interface__srv__MyMoveMsg_Response * msg)
{
  if (msg) {
    custom_interface__srv__MyMoveMsg_Response__fini(msg);
  }
  free(msg);
}


bool
custom_interface__srv__MyMoveMsg_Response__Sequence__init(custom_interface__srv__MyMoveMsg_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interface__srv__MyMoveMsg_Response * data = NULL;
  if (size) {
    data = (custom_interface__srv__MyMoveMsg_Response *)calloc(size, sizeof(custom_interface__srv__MyMoveMsg_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__srv__MyMoveMsg_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__srv__MyMoveMsg_Response__fini(&data[i - 1]);
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
custom_interface__srv__MyMoveMsg_Response__Sequence__fini(custom_interface__srv__MyMoveMsg_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interface__srv__MyMoveMsg_Response__fini(&array->data[i]);
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

custom_interface__srv__MyMoveMsg_Response__Sequence *
custom_interface__srv__MyMoveMsg_Response__Sequence__create(size_t size)
{
  custom_interface__srv__MyMoveMsg_Response__Sequence * array = (custom_interface__srv__MyMoveMsg_Response__Sequence *)malloc(sizeof(custom_interface__srv__MyMoveMsg_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__srv__MyMoveMsg_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interface__srv__MyMoveMsg_Response__Sequence__destroy(custom_interface__srv__MyMoveMsg_Response__Sequence * array)
{
  if (array) {
    custom_interface__srv__MyMoveMsg_Response__Sequence__fini(array);
  }
  free(array);
}
