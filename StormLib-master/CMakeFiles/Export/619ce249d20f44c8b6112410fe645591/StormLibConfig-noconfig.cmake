#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "StormLib::storm" for configuration ""
set_property(TARGET StormLib::storm APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(StormLib::storm PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "C;CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libstorm.a"
  )

list(APPEND _cmake_import_check_targets StormLib::storm )
list(APPEND _cmake_import_check_files_for_StormLib::storm "${_IMPORT_PREFIX}/lib/libstorm.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
