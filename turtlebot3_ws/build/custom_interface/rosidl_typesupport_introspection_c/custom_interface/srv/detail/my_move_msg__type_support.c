// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_interface:srv/MyMoveMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_interface/srv/detail/my_move_msg__rosidl_typesupport_introspection_c.h"
#include "custom_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_interface/srv/detail/my_move_msg__functions.h"
#include "custom_interface/srv/detail/my_move_msg__struct.h"


// Include directives for member types
// Member `move`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MyMoveMsg_Request__rosidl_typesupport_introspection_c__MyMoveMsg_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interface__srv__MyMoveMsg_Request__init(message_memory);
}

void MyMoveMsg_Request__rosidl_typesupport_introspection_c__MyMoveMsg_Request_fini_function(void * message_memory)
{
  custom_interface__srv__MyMoveMsg_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MyMoveMsg_Request__rosidl_typesupport_introspection_c__MyMoveMsg_Request_message_member_array[1] = {
  {
    "move",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface__srv__MyMoveMsg_Request, move),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MyMoveMsg_Request__rosidl_typesupport_introspection_c__MyMoveMsg_Request_message_members = {
  "custom_interface__srv",  // message namespace
  "MyMoveMsg_Request",  // message name
  1,  // number of fields
  sizeof(custom_interface__srv__MyMoveMsg_Request),
  MyMoveMsg_Request__rosidl_typesupport_introspection_c__MyMoveMsg_Request_message_member_array,  // message members
  MyMoveMsg_Request__rosidl_typesupport_introspection_c__MyMoveMsg_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MyMoveMsg_Request__rosidl_typesupport_introspection_c__MyMoveMsg_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MyMoveMsg_Request__rosidl_typesupport_introspection_c__MyMoveMsg_Request_message_type_support_handle = {
  0,
  &MyMoveMsg_Request__rosidl_typesupport_introspection_c__MyMoveMsg_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, srv, MyMoveMsg_Request)() {
  if (!MyMoveMsg_Request__rosidl_typesupport_introspection_c__MyMoveMsg_Request_message_type_support_handle.typesupport_identifier) {
    MyMoveMsg_Request__rosidl_typesupport_introspection_c__MyMoveMsg_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MyMoveMsg_Request__rosidl_typesupport_introspection_c__MyMoveMsg_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custom_interface/srv/detail/my_move_msg__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_interface/srv/detail/my_move_msg__functions.h"
// already included above
// #include "custom_interface/srv/detail/my_move_msg__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MyMoveMsg_Response__rosidl_typesupport_introspection_c__MyMoveMsg_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interface__srv__MyMoveMsg_Response__init(message_memory);
}

void MyMoveMsg_Response__rosidl_typesupport_introspection_c__MyMoveMsg_Response_fini_function(void * message_memory)
{
  custom_interface__srv__MyMoveMsg_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MyMoveMsg_Response__rosidl_typesupport_introspection_c__MyMoveMsg_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface__srv__MyMoveMsg_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MyMoveMsg_Response__rosidl_typesupport_introspection_c__MyMoveMsg_Response_message_members = {
  "custom_interface__srv",  // message namespace
  "MyMoveMsg_Response",  // message name
  1,  // number of fields
  sizeof(custom_interface__srv__MyMoveMsg_Response),
  MyMoveMsg_Response__rosidl_typesupport_introspection_c__MyMoveMsg_Response_message_member_array,  // message members
  MyMoveMsg_Response__rosidl_typesupport_introspection_c__MyMoveMsg_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MyMoveMsg_Response__rosidl_typesupport_introspection_c__MyMoveMsg_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MyMoveMsg_Response__rosidl_typesupport_introspection_c__MyMoveMsg_Response_message_type_support_handle = {
  0,
  &MyMoveMsg_Response__rosidl_typesupport_introspection_c__MyMoveMsg_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, srv, MyMoveMsg_Response)() {
  if (!MyMoveMsg_Response__rosidl_typesupport_introspection_c__MyMoveMsg_Response_message_type_support_handle.typesupport_identifier) {
    MyMoveMsg_Response__rosidl_typesupport_introspection_c__MyMoveMsg_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MyMoveMsg_Response__rosidl_typesupport_introspection_c__MyMoveMsg_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "custom_interface/srv/detail/my_move_msg__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers custom_interface__srv__detail__my_move_msg__rosidl_typesupport_introspection_c__MyMoveMsg_service_members = {
  "custom_interface__srv",  // service namespace
  "MyMoveMsg",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // custom_interface__srv__detail__my_move_msg__rosidl_typesupport_introspection_c__MyMoveMsg_Request_message_type_support_handle,
  NULL  // response message
  // custom_interface__srv__detail__my_move_msg__rosidl_typesupport_introspection_c__MyMoveMsg_Response_message_type_support_handle
};

static rosidl_service_type_support_t custom_interface__srv__detail__my_move_msg__rosidl_typesupport_introspection_c__MyMoveMsg_service_type_support_handle = {
  0,
  &custom_interface__srv__detail__my_move_msg__rosidl_typesupport_introspection_c__MyMoveMsg_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, srv, MyMoveMsg_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, srv, MyMoveMsg_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, srv, MyMoveMsg)() {
  if (!custom_interface__srv__detail__my_move_msg__rosidl_typesupport_introspection_c__MyMoveMsg_service_type_support_handle.typesupport_identifier) {
    custom_interface__srv__detail__my_move_msg__rosidl_typesupport_introspection_c__MyMoveMsg_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)custom_interface__srv__detail__my_move_msg__rosidl_typesupport_introspection_c__MyMoveMsg_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, srv, MyMoveMsg_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, srv, MyMoveMsg_Response)()->data;
  }

  return &custom_interface__srv__detail__my_move_msg__rosidl_typesupport_introspection_c__MyMoveMsg_service_type_support_handle;
}
