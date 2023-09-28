#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "roar_rviz_plugin::roar_rviz_plugin" for configuration ""
set_property(TARGET roar_rviz_plugin::roar_rviz_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(roar_rviz_plugin::roar_rviz_plugin PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libroar_rviz_plugin.so"
  IMPORTED_SONAME_NOCONFIG "libroar_rviz_plugin.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS roar_rviz_plugin::roar_rviz_plugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_roar_rviz_plugin::roar_rviz_plugin "${_IMPORT_PREFIX}/lib/libroar_rviz_plugin.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
