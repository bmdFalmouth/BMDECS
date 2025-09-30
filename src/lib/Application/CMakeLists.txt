include(FetchContent)

#lib level cmakelists
include_directories(include)
add_library(appLib Application.cpp)

# Fetch Raylib
set(RAYLIB_VERSION 5.5)
FetchContent_Declare(
            raylib
            GIT_REPOSITORY https://github.com/raysan5/raylib.git
            GIT_TAG ${RAYLIB_VERSION})

set(BUILD_EXAMPLES OFF CACHE INTERNAL "")
FetchContent_MakeAvailable(raylib)

target_link_libraries(appLib
    PUBLIC raylib
)

# Expose public headers
target_include_directories(appLib
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)