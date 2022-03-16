// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interface:action/Move.idl
// generated code does not contain a copyright notice
#include "custom_interface/action/detail/move__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
custom_interface__action__Move_Goal__init(custom_interface__action__Move_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // secs
  return true;
}

void
custom_interface__action__Move_Goal__fini(custom_interface__action__Move_Goal * msg)
{
  if (!msg) {
    return;
  }
  // secs
}

custom_interface__action__Move_Goal *
custom_interface__action__Move_Goal__create()
{
  custom_interface__action__Move_Goal * msg = (custom_interface__action__Move_Goal *)malloc(sizeof(custom_interface__action__Move_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__action__Move_Goal));
  bool success = custom_interface__action__Move_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interface__action__Move_Goal__destroy(custom_interface__action__Move_Goal * msg)
{
  if (msg) {
    custom_interface__action__Move_Goal__fini(msg);
  }
  free(msg);
}


bool
custom_interface__action__Move_Goal__Sequence__init(custom_interface__action__Move_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interface__action__Move_Goal * data = NULL;
  if (size) {
    data = (custom_interface__action__Move_Goal *)calloc(size, sizeof(custom_interface__action__Move_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__action__Move_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__action__Move_Goal__fini(&data[i - 1]);
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
custom_interface__action__Move_Goal__Sequence__fini(custom_interface__action__Move_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interface__action__Move_Goal__fini(&array->data[i]);
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

custom_interface__action__Move_Goal__Sequence *
custom_interface__action__Move_Goal__Sequence__create(size_t size)
{
  custom_interface__action__Move_Goal__Sequence * array = (custom_interface__action__Move_Goal__Sequence *)malloc(sizeof(custom_interface__action__Move_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__action__Move_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interface__action__Move_Goal__Sequence__destroy(custom_interface__action__Move_Goal__Sequence * array)
{
  if (array) {
    custom_interface__action__Move_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

bool
custom_interface__action__Move_Result__init(custom_interface__action__Move_Result * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    custom_interface__action__Move_Result__fini(msg);
    return false;
  }
  return true;
}

void
custom_interface__action__Move_Result__fini(custom_interface__action__Move_Result * msg)
{
  if (!msg) {
    return;
  }
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

custom_interface__action__Move_Result *
custom_interface__action__Move_Result__create()
{
  custom_interface__action__Move_Result * msg = (custom_interface__action__Move_Result *)malloc(sizeof(custom_interface__action__Move_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__action__Move_Result));
  bool success = custom_interface__action__Move_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interface__action__Move_Result__destroy(custom_interface__action__Move_Result * msg)
{
  if (msg) {
    custom_interface__action__Move_Result__fini(msg);
  }
  free(msg);
}


bool
custom_interface__action__Move_Result__Sequence__init(custom_interface__action__Move_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interface__action__Move_Result * data = NULL;
  if (size) {
    data = (custom_interface__action__Move_Result *)calloc(size, sizeof(custom_interface__action__Move_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__action__Move_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__action__Move_Result__fini(&data[i - 1]);
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
custom_interface__action__Move_Result__Sequence__fini(custom_interface__action__Move_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interface__action__Move_Result__fini(&array->data[i]);
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

custom_interface__action__Move_Result__Sequence *
custom_interface__action__Move_Result__Sequence__create(size_t size)
{
  custom_interface__action__Move_Result__Sequence * array = (custom_interface__action__Move_Result__Sequence *)malloc(sizeof(custom_interface__action__Move_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__action__Move_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interface__action__Move_Result__Sequence__destroy(custom_interface__action__Move_Result__Sequence * array)
{
  if (array) {
    custom_interface__action__Move_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `feedback`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
custom_interface__action__Move_Feedback__init(custom_interface__action__Move_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__init(&msg->feedback)) {
    custom_interface__action__Move_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
custom_interface__action__Move_Feedback__fini(custom_interface__action__Move_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback
  rosidl_runtime_c__String__fini(&msg->feedback);
}

custom_interface__action__Move_Feedback *
custom_interface__action__Move_Feedback__create()
{
  custom_interface__action__Move_Feedback * msg = (custom_interface__action__Move_Feedback *)malloc(sizeof(custom_interface__action__Move_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__action__Move_Feedback));
  bool success = custom_interface__action__Move_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interface__action__Move_Feedback__destroy(custom_interface__action__Move_Feedback * msg)
{
  if (msg) {
    custom_interface__action__Move_Feedback__fini(msg);
  }
  free(msg);
}


bool
custom_interface__action__Move_Feedback__Sequence__init(custom_interface__action__Move_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interface__action__Move_Feedback * data = NULL;
  if (size) {
    data = (custom_interface__action__Move_Feedback *)calloc(size, sizeof(custom_interface__action__Move_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__action__Move_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__action__Move_Feedback__fini(&data[i - 1]);
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
custom_interface__action__Move_Feedback__Sequence__fini(custom_interface__action__Move_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interface__action__Move_Feedback__fini(&array->data[i]);
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

custom_interface__action__Move_Feedback__Sequence *
custom_interface__action__Move_Feedback__Sequence__create(size_t size)
{
  custom_interface__action__Move_Feedback__Sequence * array = (custom_interface__action__Move_Feedback__Sequence *)malloc(sizeof(custom_interface__action__Move_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__action__Move_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interface__action__Move_Feedback__Sequence__destroy(custom_interface__action__Move_Feedback__Sequence * array)
{
  if (array) {
    custom_interface__action__Move_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "custom_interface/action/detail/move__functions.h"

bool
custom_interface__action__Move_SendGoal_Request__init(custom_interface__action__Move_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    custom_interface__action__Move_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!custom_interface__action__Move_Goal__init(&msg->goal)) {
    custom_interface__action__Move_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
custom_interface__action__Move_SendGoal_Request__fini(custom_interface__action__Move_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  custom_interface__action__Move_Goal__fini(&msg->goal);
}

custom_interface__action__Move_SendGoal_Request *
custom_interface__action__Move_SendGoal_Request__create()
{
  custom_interface__action__Move_SendGoal_Request * msg = (custom_interface__action__Move_SendGoal_Request *)malloc(sizeof(custom_interface__action__Move_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__action__Move_SendGoal_Request));
  bool success = custom_interface__action__Move_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interface__action__Move_SendGoal_Request__destroy(custom_interface__action__Move_SendGoal_Request * msg)
{
  if (msg) {
    custom_interface__action__Move_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
custom_interface__action__Move_SendGoal_Request__Sequence__init(custom_interface__action__Move_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interface__action__Move_SendGoal_Request * data = NULL;
  if (size) {
    data = (custom_interface__action__Move_SendGoal_Request *)calloc(size, sizeof(custom_interface__action__Move_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__action__Move_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__action__Move_SendGoal_Request__fini(&data[i - 1]);
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
custom_interface__action__Move_SendGoal_Request__Sequence__fini(custom_interface__action__Move_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interface__action__Move_SendGoal_Request__fini(&array->data[i]);
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

custom_interface__action__Move_SendGoal_Request__Sequence *
custom_interface__action__Move_SendGoal_Request__Sequence__create(size_t size)
{
  custom_interface__action__Move_SendGoal_Request__Sequence * array = (custom_interface__action__Move_SendGoal_Request__Sequence *)malloc(sizeof(custom_interface__action__Move_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__action__Move_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interface__action__Move_SendGoal_Request__Sequence__destroy(custom_interface__action__Move_SendGoal_Request__Sequence * array)
{
  if (array) {
    custom_interface__action__Move_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
custom_interface__action__Move_SendGoal_Response__init(custom_interface__action__Move_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    custom_interface__action__Move_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
custom_interface__action__Move_SendGoal_Response__fini(custom_interface__action__Move_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

custom_interface__action__Move_SendGoal_Response *
custom_interface__action__Move_SendGoal_Response__create()
{
  custom_interface__action__Move_SendGoal_Response * msg = (custom_interface__action__Move_SendGoal_Response *)malloc(sizeof(custom_interface__action__Move_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__action__Move_SendGoal_Response));
  bool success = custom_interface__action__Move_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interface__action__Move_SendGoal_Response__destroy(custom_interface__action__Move_SendGoal_Response * msg)
{
  if (msg) {
    custom_interface__action__Move_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
custom_interface__action__Move_SendGoal_Response__Sequence__init(custom_interface__action__Move_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interface__action__Move_SendGoal_Response * data = NULL;
  if (size) {
    data = (custom_interface__action__Move_SendGoal_Response *)calloc(size, sizeof(custom_interface__action__Move_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__action__Move_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__action__Move_SendGoal_Response__fini(&data[i - 1]);
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
custom_interface__action__Move_SendGoal_Response__Sequence__fini(custom_interface__action__Move_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interface__action__Move_SendGoal_Response__fini(&array->data[i]);
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

custom_interface__action__Move_SendGoal_Response__Sequence *
custom_interface__action__Move_SendGoal_Response__Sequence__create(size_t size)
{
  custom_interface__action__Move_SendGoal_Response__Sequence * array = (custom_interface__action__Move_SendGoal_Response__Sequence *)malloc(sizeof(custom_interface__action__Move_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__action__Move_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interface__action__Move_SendGoal_Response__Sequence__destroy(custom_interface__action__Move_SendGoal_Response__Sequence * array)
{
  if (array) {
    custom_interface__action__Move_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
custom_interface__action__Move_GetResult_Request__init(custom_interface__action__Move_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    custom_interface__action__Move_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
custom_interface__action__Move_GetResult_Request__fini(custom_interface__action__Move_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

custom_interface__action__Move_GetResult_Request *
custom_interface__action__Move_GetResult_Request__create()
{
  custom_interface__action__Move_GetResult_Request * msg = (custom_interface__action__Move_GetResult_Request *)malloc(sizeof(custom_interface__action__Move_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__action__Move_GetResult_Request));
  bool success = custom_interface__action__Move_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interface__action__Move_GetResult_Request__destroy(custom_interface__action__Move_GetResult_Request * msg)
{
  if (msg) {
    custom_interface__action__Move_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
custom_interface__action__Move_GetResult_Request__Sequence__init(custom_interface__action__Move_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interface__action__Move_GetResult_Request * data = NULL;
  if (size) {
    data = (custom_interface__action__Move_GetResult_Request *)calloc(size, sizeof(custom_interface__action__Move_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__action__Move_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__action__Move_GetResult_Request__fini(&data[i - 1]);
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
custom_interface__action__Move_GetResult_Request__Sequence__fini(custom_interface__action__Move_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interface__action__Move_GetResult_Request__fini(&array->data[i]);
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

custom_interface__action__Move_GetResult_Request__Sequence *
custom_interface__action__Move_GetResult_Request__Sequence__create(size_t size)
{
  custom_interface__action__Move_GetResult_Request__Sequence * array = (custom_interface__action__Move_GetResult_Request__Sequence *)malloc(sizeof(custom_interface__action__Move_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__action__Move_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interface__action__Move_GetResult_Request__Sequence__destroy(custom_interface__action__Move_GetResult_Request__Sequence * array)
{
  if (array) {
    custom_interface__action__Move_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "custom_interface/action/detail/move__functions.h"

bool
custom_interface__action__Move_GetResult_Response__init(custom_interface__action__Move_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!custom_interface__action__Move_Result__init(&msg->result)) {
    custom_interface__action__Move_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
custom_interface__action__Move_GetResult_Response__fini(custom_interface__action__Move_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  custom_interface__action__Move_Result__fini(&msg->result);
}

custom_interface__action__Move_GetResult_Response *
custom_interface__action__Move_GetResult_Response__create()
{
  custom_interface__action__Move_GetResult_Response * msg = (custom_interface__action__Move_GetResult_Response *)malloc(sizeof(custom_interface__action__Move_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__action__Move_GetResult_Response));
  bool success = custom_interface__action__Move_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interface__action__Move_GetResult_Response__destroy(custom_interface__action__Move_GetResult_Response * msg)
{
  if (msg) {
    custom_interface__action__Move_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
custom_interface__action__Move_GetResult_Response__Sequence__init(custom_interface__action__Move_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interface__action__Move_GetResult_Response * data = NULL;
  if (size) {
    data = (custom_interface__action__Move_GetResult_Response *)calloc(size, sizeof(custom_interface__action__Move_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__action__Move_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__action__Move_GetResult_Response__fini(&data[i - 1]);
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
custom_interface__action__Move_GetResult_Response__Sequence__fini(custom_interface__action__Move_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interface__action__Move_GetResult_Response__fini(&array->data[i]);
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

custom_interface__action__Move_GetResult_Response__Sequence *
custom_interface__action__Move_GetResult_Response__Sequence__create(size_t size)
{
  custom_interface__action__Move_GetResult_Response__Sequence * array = (custom_interface__action__Move_GetResult_Response__Sequence *)malloc(sizeof(custom_interface__action__Move_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__action__Move_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interface__action__Move_GetResult_Response__Sequence__destroy(custom_interface__action__Move_GetResult_Response__Sequence * array)
{
  if (array) {
    custom_interface__action__Move_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "custom_interface/action/detail/move__functions.h"

bool
custom_interface__action__Move_FeedbackMessage__init(custom_interface__action__Move_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    custom_interface__action__Move_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!custom_interface__action__Move_Feedback__init(&msg->feedback)) {
    custom_interface__action__Move_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
custom_interface__action__Move_FeedbackMessage__fini(custom_interface__action__Move_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  custom_interface__action__Move_Feedback__fini(&msg->feedback);
}

custom_interface__action__Move_FeedbackMessage *
custom_interface__action__Move_FeedbackMessage__create()
{
  custom_interface__action__Move_FeedbackMessage * msg = (custom_interface__action__Move_FeedbackMessage *)malloc(sizeof(custom_interface__action__Move_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interface__action__Move_FeedbackMessage));
  bool success = custom_interface__action__Move_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_interface__action__Move_FeedbackMessage__destroy(custom_interface__action__Move_FeedbackMessage * msg)
{
  if (msg) {
    custom_interface__action__Move_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
custom_interface__action__Move_FeedbackMessage__Sequence__init(custom_interface__action__Move_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_interface__action__Move_FeedbackMessage * data = NULL;
  if (size) {
    data = (custom_interface__action__Move_FeedbackMessage *)calloc(size, sizeof(custom_interface__action__Move_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interface__action__Move_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interface__action__Move_FeedbackMessage__fini(&data[i - 1]);
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
custom_interface__action__Move_FeedbackMessage__Sequence__fini(custom_interface__action__Move_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interface__action__Move_FeedbackMessage__fini(&array->data[i]);
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

custom_interface__action__Move_FeedbackMessage__Sequence *
custom_interface__action__Move_FeedbackMessage__Sequence__create(size_t size)
{
  custom_interface__action__Move_FeedbackMessage__Sequence * array = (custom_interface__action__Move_FeedbackMessage__Sequence *)malloc(sizeof(custom_interface__action__Move_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_interface__action__Move_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_interface__action__Move_FeedbackMessage__Sequence__destroy(custom_interface__action__Move_FeedbackMessage__Sequence * array)
{
  if (array) {
    custom_interface__action__Move_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
