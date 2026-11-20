# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target can_driver::can_driver
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${can_driver_TARGETS}.
if(can_driver_TARGETS AND NOT TARGET can_driver::can_driver)
  add_library(can_driver::can_driver INTERFACE IMPORTED)
  set_target_properties(can_driver::can_driver PROPERTIES
    INTERFACE_LINK_LIBRARIES "${can_driver_TARGETS}")
endif()
