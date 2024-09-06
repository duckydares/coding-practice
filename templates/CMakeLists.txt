cmake_minimum_required(VERSION 3.16)

project(templates)

# Create a header only library to be included with the c++ solutions
add_library(templates INTERFACE)
target_include_directories(templates INTERFACE 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/c++/include>
    $<INSTALL_INTERFACE:${PROJECT_NAME}/include>)