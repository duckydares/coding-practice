cmake_minimum_required(VERSION 3.16)

project(remove_elements)

# Add a library target with definitions
add_library(remove_solution STATIC c++/solution.cpp)

# Link header-only library to solutions library
target_link_libraries(remove_solution PUBLIC templates)

add_executable(remove_elements c++/tests/test.cpp)

# Link solution definitions to test
target_link_libraries(remove_elements PRIVATE remove_solution gtest gtest_main -pthread)

# Add test to use with ctest -V
add_test(NAME remove_elements COMMAND remove_elements)
