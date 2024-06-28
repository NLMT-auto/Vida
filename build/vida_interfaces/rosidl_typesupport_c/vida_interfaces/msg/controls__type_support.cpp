// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from vida_interfaces:msg/Controls.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "vida_interfaces/msg/detail/controls__struct.h"
#include "vida_interfaces/msg/detail/controls__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace vida_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Controls_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Controls_type_support_ids_t;

static const _Controls_type_support_ids_t _Controls_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Controls_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Controls_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Controls_type_support_symbol_names_t _Controls_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vida_interfaces, msg, Controls)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vida_interfaces, msg, Controls)),
  }
};

typedef struct _Controls_type_support_data_t
{
  void * data[2];
} _Controls_type_support_data_t;

static _Controls_type_support_data_t _Controls_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Controls_message_typesupport_map = {
  2,
  "vida_interfaces",
  &_Controls_message_typesupport_ids.typesupport_identifier[0],
  &_Controls_message_typesupport_symbol_names.symbol_name[0],
  &_Controls_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Controls_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Controls_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace vida_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, vida_interfaces, msg, Controls)() {
  return &::vida_interfaces::msg::rosidl_typesupport_c::Controls_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
