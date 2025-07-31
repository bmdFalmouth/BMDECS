#top level cmakelist
# Dependencies
include(FetchContent)

cmake_minimum_required(VERSION 3.16)
project(BMDECS VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

# Detect platform
message(STATUS "System name: ${CMAKE_SYSTEM_NAME}")

if (CMAKE_SYSTEM_NAME STREQUAL "Windows")
    add_definitions(-DPLATFORM_WINDOWS)
elseif (CMAKE_SYSTEM_NAME STREQUAL "Linux")
    add_definitions(-DPLATFORM_LINUX)
elseif (CMAKE_SYSTEM_NAME STREQUAL "Darwin")
    add_definitions(-DPLATFORM_MACOS)
endif()

# Fetch Raylib
set(RAYLIB_VERSION 5.5)
FetchContent_Declare(
            raylib
            GIT_REPOSITORY https://github.com/raysan5/raylib.git
            GIT_TAG ${RAYLIB_VERSION})

set(BUILD_EXAMPLES OFF CACHE INTERNAL "")
FetchContent_MakeAvailable(raylib)

add_subdirectory(src)
#add_subdirectory(tests)

#include(CTest)
#enable_testing()
