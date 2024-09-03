cmake_minimum_required(VERSION 3.16)

project(merge_sorted_arrays)

# Add a library target with definitions
add_library(template_solution STATIC c++/solution.cpp)

# Link header-only library to solutions library
target_link_libraries(template_solution PUBLIC templates)

add_executable(merge_sorted_arrays c++/test/test.cpp)

# Link solution definitions to test
target_link_libraries(merge_sorted_arrays PRIVATE template_solution gtest gtest_main -pthread)

# Add test to use with ctest -V
add_test(NAME test_merge_sorted_arrays COMMAND merge_sorted_arrays)
