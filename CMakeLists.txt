cmake_minimum_required(VERSION 3.20)
project(zxc C)

find_package(Python COMPONENTS Development.Module REQUIRED)

# Build zxc_c 
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src/zxc_c)

# Python extension module: zxc_wrapper/_zxc.*
Python_add_library(_zxc MODULE src/zxc/_zxc.c)

# Without "lib" prefix
set_target_properties(_zxc PROPERTIES PREFIX "")

target_include_directories(_zxc PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/src/zxc_c/include
)

target_link_libraries(_zxc PRIVATE zxc_lib)

install(TARGETS _zxc DESTINATION zxc)