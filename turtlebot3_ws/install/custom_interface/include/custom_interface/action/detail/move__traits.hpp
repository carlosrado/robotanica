// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interface:action/Move.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__ACTION__DETAIL__MOVE__TRAITS_HPP_
#define CUSTOM_INTERFACE__ACTION__DETAIL__MOVE__TRAITS_HPP_

#include "custom_interface/action/detail/move__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interface::action::Move_Goal>()
{
  return "custom_interface::action::Move_Goal";
}

template<>
inline const char * name<custom_interface::action::Move_Goal>()
{
  return "custom_interface/action/Move_Goal";
}

template<>
struct has_fixed_size<custom_interface::action::Move_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interface::action::Move_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interface::action::Move_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interface::action::Move_Result>()
{
  return "custom_interface::action::Move_Result";
}

template<>
inline const char * name<custom_interface::action::Move_Result>()
{
  return "custom_interface/action/Move_Result";
}

template<>
struct has_fixed_size<custom_interface::action::Move_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interface::action::Move_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interface::action::Move_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interface::action::Move_Feedback>()
{
  return "custom_interface::action::Move_Feedback";
}

template<>
inline const char * name<custom_interface::action::Move_Feedback>()
{
  return "custom_interface/action/Move_Feedback";
}

template<>
struct has_fixed_size<custom_interface::action::Move_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interface::action::Move_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interface::action::Move_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "custom_interface/action/detail/move__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interface::action::Move_SendGoal_Request>()
{
  return "custom_interface::action::Move_SendGoal_Request";
}

template<>
inline const char * name<custom_interface::action::Move_SendGoal_Request>()
{
  return "custom_interface/action/Move_SendGoal_Request";
}

template<>
struct has_fixed_size<custom_interface::action::Move_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<custom_interface::action::Move_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<custom_interface::action::Move_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<custom_interface::action::Move_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<custom_interface::action::Move_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interface::action::Move_SendGoal_Response>()
{
  return "custom_interface::action::Move_SendGoal_Response";
}

template<>
inline const char * name<custom_interface::action::Move_SendGoal_Response>()
{
  return "custom_interface/action/Move_SendGoal_Response";
}

template<>
struct has_fixed_size<custom_interface::action::Move_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<custom_interface::action::Move_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<custom_interface::action::Move_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interface::action::Move_SendGoal>()
{
  return "custom_interface::action::Move_SendGoal";
}

template<>
inline const char * name<custom_interface::action::Move_SendGoal>()
{
  return "custom_interface/action/Move_SendGoal";
}

template<>
struct has_fixed_size<custom_interface::action::Move_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interface::action::Move_SendGoal_Request>::value &&
    has_fixed_size<custom_interface::action::Move_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interface::action::Move_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interface::action::Move_SendGoal_Request>::value &&
    has_bounded_size<custom_interface::action::Move_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<custom_interface::action::Move_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interface::action::Move_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interface::action::Move_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interface::action::Move_GetResult_Request>()
{
  return "custom_interface::action::Move_GetResult_Request";
}

template<>
inline const char * name<custom_interface::action::Move_GetResult_Request>()
{
  return "custom_interface/action/Move_GetResult_Request";
}

template<>
struct has_fixed_size<custom_interface::action::Move_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<custom_interface::action::Move_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<custom_interface::action::Move_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "custom_interface/action/detail/move__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interface::action::Move_GetResult_Response>()
{
  return "custom_interface::action::Move_GetResult_Response";
}

template<>
inline const char * name<custom_interface::action::Move_GetResult_Response>()
{
  return "custom_interface/action/Move_GetResult_Response";
}

template<>
struct has_fixed_size<custom_interface::action::Move_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<custom_interface::action::Move_Result>::value> {};

template<>
struct has_bounded_size<custom_interface::action::Move_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<custom_interface::action::Move_Result>::value> {};

template<>
struct is_message<custom_interface::action::Move_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interface::action::Move_GetResult>()
{
  return "custom_interface::action::Move_GetResult";
}

template<>
inline const char * name<custom_interface::action::Move_GetResult>()
{
  return "custom_interface/action/Move_GetResult";
}

template<>
struct has_fixed_size<custom_interface::action::Move_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interface::action::Move_GetResult_Request>::value &&
    has_fixed_size<custom_interface::action::Move_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interface::action::Move_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interface::action::Move_GetResult_Request>::value &&
    has_bounded_size<custom_interface::action::Move_GetResult_Response>::value
  >
{
};

template<>
struct is_service<custom_interface::action::Move_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interface::action::Move_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interface::action::Move_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "custom_interface/action/detail/move__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interface::action::Move_FeedbackMessage>()
{
  return "custom_interface::action::Move_FeedbackMessage";
}

template<>
inline const char * name<custom_interface::action::Move_FeedbackMessage>()
{
  return "custom_interface/action/Move_FeedbackMessage";
}

template<>
struct has_fixed_size<custom_interface::action::Move_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<custom_interface::action::Move_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<custom_interface::action::Move_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<custom_interface::action::Move_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<custom_interface::action::Move_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<custom_interface::action::Move>
  : std::true_type
{
};

template<>
struct is_action_goal<custom_interface::action::Move_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<custom_interface::action::Move_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<custom_interface::action::Move_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CUSTOM_INTERFACE__ACTION__DETAIL__MOVE__TRAITS_HPP_
