// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interface:srv/MyMoveMsg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__SRV__DETAIL__MY_MOVE_MSG__TRAITS_HPP_
#define CUSTOM_INTERFACE__SRV__DETAIL__MY_MOVE_MSG__TRAITS_HPP_

#include "custom_interface/srv/detail/my_move_msg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interface::srv::MyMoveMsg_Request>()
{
  return "custom_interface::srv::MyMoveMsg_Request";
}

template<>
inline const char * name<custom_interface::srv::MyMoveMsg_Request>()
{
  return "custom_interface/srv/MyMoveMsg_Request";
}

template<>
struct has_fixed_size<custom_interface::srv::MyMoveMsg_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interface::srv::MyMoveMsg_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interface::srv::MyMoveMsg_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interface::srv::MyMoveMsg_Response>()
{
  return "custom_interface::srv::MyMoveMsg_Response";
}

template<>
inline const char * name<custom_interface::srv::MyMoveMsg_Response>()
{
  return "custom_interface/srv/MyMoveMsg_Response";
}

template<>
struct has_fixed_size<custom_interface::srv::MyMoveMsg_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interface::srv::MyMoveMsg_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interface::srv::MyMoveMsg_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interface::srv::MyMoveMsg>()
{
  return "custom_interface::srv::MyMoveMsg";
}

template<>
inline const char * name<custom_interface::srv::MyMoveMsg>()
{
  return "custom_interface/srv/MyMoveMsg";
}

template<>
struct has_fixed_size<custom_interface::srv::MyMoveMsg>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interface::srv::MyMoveMsg_Request>::value &&
    has_fixed_size<custom_interface::srv::MyMoveMsg_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interface::srv::MyMoveMsg>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interface::srv::MyMoveMsg_Request>::value &&
    has_bounded_size<custom_interface::srv::MyMoveMsg_Response>::value
  >
{
};

template<>
struct is_service<custom_interface::srv::MyMoveMsg>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interface::srv::MyMoveMsg_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interface::srv::MyMoveMsg_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACE__SRV__DETAIL__MY_MOVE_MSG__TRAITS_HPP_
