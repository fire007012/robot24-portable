# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target vision_pkg::vision_pkg
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${vision_pkg_TARGETS}.
if(vision_pkg_TARGETS AND NOT TARGET vision_pkg::vision_pkg)
  add_library(vision_pkg::vision_pkg INTERFACE IMPORTED)
  set_target_properties(vision_pkg::vision_pkg PROPERTIES
    INTERFACE_LINK_LIBRARIES "${vision_pkg_TARGETS}")
endif()
