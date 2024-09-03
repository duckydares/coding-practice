cmake_minimum_required(VERSION 3.1)

project(merge_sorted_arrays)

add_executable(merge_sorted_arrays c++/main.cpp c++/merge_arrays.cpp)

target_link_libraries(merge_sorted_arrays
    PUBLIC templates)
# TODO: Include the header directories
# TODO: Add source code as executables
# TODO: Create unit tests