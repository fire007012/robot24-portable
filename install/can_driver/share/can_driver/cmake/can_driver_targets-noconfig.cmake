#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "can_driver::can_driver_core" for configuration ""
set_property(TARGET can_driver::can_driver_core APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(can_driver::can_driver_core PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcan_driver_core.so"
  IMPORTED_SONAME_NOCONFIG "libcan_driver_core.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS can_driver::can_driver_core )
list(APPEND _IMPORT_CHECK_FILES_FOR_can_driver::can_driver_core "${_IMPORT_PREFIX}/lib/libcan_driver_core.so" )

# Import target "can_driver::can_driver_system" for configuration ""
set_property(TARGET can_driver::can_driver_system APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(can_driver::can_driver_system PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcan_driver_system.so"
  IMPORTED_SONAME_NOCONFIG "libcan_driver_system.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS can_driver::can_driver_system )
list(APPEND _IMPORT_CHECK_FILES_FOR_can_driver::can_driver_system "${_IMPORT_PREFIX}/lib/libcan_driver_system.so" )

# Import target "can_driver::can_driver_node" for configuration ""
set_property(TARGET can_driver::can_driver_node APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(can_driver::can_driver_node PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/can_driver/can_driver_node"
  )

list(APPEND _IMPORT_CHECK_TARGETS can_driver::can_driver_node )
list(APPEND _IMPORT_CHECK_FILES_FOR_can_driver::can_driver_node "${_IMPORT_PREFIX}/lib/can_driver/can_driver_node" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
