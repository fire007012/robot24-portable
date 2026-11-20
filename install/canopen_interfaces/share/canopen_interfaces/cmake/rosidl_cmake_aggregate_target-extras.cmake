# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target canopen_interfaces::canopen_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${canopen_interfaces_TARGETS}.
if(canopen_interfaces_TARGETS AND NOT TARGET canopen_interfaces::canopen_interfaces)
  add_library(canopen_interfaces::canopen_interfaces INTERFACE IMPORTED)
  set_target_properties(canopen_interfaces::canopen_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${canopen_interfaces_TARGETS}")
endif()
