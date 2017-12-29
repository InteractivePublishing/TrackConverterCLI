
cmake_minimum_required(VERSION 3.1)
project(TrackIO)

#Make sure we build with C++ 14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

if (APPLE)
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++ -fvisibility=hidden -fvisibility-inlines-hidden ${no_warn}")
endif()
set(CMAKE_LINKER_FLAGS "-std=c++11 -stdlib=libc++")

#==============================================================================
# Slicer
find_package(Slicer REQUIRED)
include(${Slicer_USE_FILE})

#==============================================================================
add_subdirectory("src/")
