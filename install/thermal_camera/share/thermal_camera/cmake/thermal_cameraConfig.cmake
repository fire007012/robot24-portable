# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_thermal_camera_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED thermal_camera_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(thermal_camera_FOUND FALSE)
  elseif(NOT thermal_camera_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(thermal_camera_FOUND FALSE)
  endif()
  return()
endif()
set(_thermal_camera_CONFIG_INCLUDED TRUE)

# output package information
if(NOT thermal_camera_FIND_QUIETLY)
  message(STATUS "Found thermal_camera: 0.3.0 (${thermal_camera_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'thermal_camera' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${thermal_camera_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(thermal_camera_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${thermal_camera_DIR}/${_extra}")
endforeach()
