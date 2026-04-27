#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "motor_manager::motor_manager" for configuration ""
set_property(TARGET motor_manager::motor_manager APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(motor_manager::motor_manager PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmotor_manager.so"
  IMPORTED_SONAME_NOCONFIG "libmotor_manager.so"
  )

list(APPEND _cmake_import_check_targets motor_manager::motor_manager )
list(APPEND _cmake_import_check_files_for_motor_manager::motor_manager "${_IMPORT_PREFIX}/lib/libmotor_manager.so" )

# Import target "motor_manager::ethercat" for configuration ""
set_property(TARGET motor_manager::ethercat APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(motor_manager::ethercat PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libethercat.a"
  )

list(APPEND _cmake_import_check_targets motor_manager::ethercat )
list(APPEND _cmake_import_check_files_for_motor_manager::ethercat "${_IMPORT_PREFIX}/lib/libethercat.a" )

# Import target "motor_manager::minas" for configuration ""
set_property(TARGET motor_manager::minas APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(motor_manager::minas PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libminas.a"
  )

list(APPEND _cmake_import_check_targets motor_manager::minas )
list(APPEND _cmake_import_check_files_for_motor_manager::minas "${_IMPORT_PREFIX}/lib/libminas.a" )

# Import target "motor_manager::zeroerr" for configuration ""
set_property(TARGET motor_manager::zeroerr APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(motor_manager::zeroerr PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libzeroerr.a"
  )

list(APPEND _cmake_import_check_targets motor_manager::zeroerr )
list(APPEND _cmake_import_check_files_for_motor_manager::zeroerr "${_IMPORT_PREFIX}/lib/libzeroerr.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
