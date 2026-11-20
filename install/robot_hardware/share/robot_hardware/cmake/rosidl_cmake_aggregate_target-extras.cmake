# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target robot_hardware::robot_hardware
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${robot_hardware_TARGETS}.
if(robot_hardware_TARGETS AND NOT TARGET robot_hardware::robot_hardware)
  add_library(robot_hardware::robot_hardware INTERFACE IMPORTED)
  set_target_properties(robot_hardware::robot_hardware PROPERTIES
    INTERFACE_LINK_LIBRARIES "${robot_hardware_TARGETS}")
endif()
