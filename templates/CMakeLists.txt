cmake_minimum_required(VERSION 3.1)

project(templates)

# Create a header only library to be included with the c++ solutions
add_library(templates INTERFACE)
target_include_directories(templates INTERFACE
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/c++/include>
    $<INSTALL_INTERFACE:c++/include>)