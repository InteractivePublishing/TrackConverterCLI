
cmake_minimum_required(VERSION 3.5)

# Enable C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(TrackIO)

# Default build type to use if none was specified
if(NOT DEFINED CMAKE_DEFAULT_BUILD_TYPE)
  set(CMAKE_DEFAULT_BUILD_TYPE "Release")
endif()
message(STATUS "Setting build type to '${CMAKE_DEFAULT_BUILD_TYPE}' as none was specified.")
set(CMAKE_BUILD_TYPE ${CMAKE_DEFAULT_BUILD_TYPE} CACHE STRING "Choose the type of build." FORCE)
mark_as_advanced(CMAKE_BUILD_TYPE)
# Set the possible values of build type for cmake-gui
set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")

if(APPLE)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fvisibility=hidden -fvisibility-inlines-hidden")
endif()

if(DEFINED Slicer_DIR)
  find_package(Slicer REQUIRED)
  include(${Slicer_USE_FILE})
endif()

add_subdirectory("src")
