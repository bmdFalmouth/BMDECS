#lib level cmakelists
include_directories(include)
add_library(ecsLib entity.cpp)

# Expose public headers
target_include_directories(ecsLib
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)