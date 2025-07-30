#source level makelist
add_executable(myapp main.cpp)
add_subdirectory(lib)
target_link_libraries(myapp PRIVATE ecsLib raylib)