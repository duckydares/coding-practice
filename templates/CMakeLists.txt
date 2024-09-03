cmake_minimum_required(VERSION 3.16)

project(templates)

# Create a header only library to be included with the c++ solutions
add_library(templates INTERFACE)
<<<<<<< HEAD
<<<<<<< HEAD
target_include_directories(templates INTERFACE 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/c++/include>
    $<INSTALL_INTERFACE:${PROJECT_NAME}/include>)
=======
target_include_directories(templates INTERFACE
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/c++/include>
    $<INSTALL_INTERFACE:c++/include>)
>>>>>>> 63901fd... Error build state with C++
=======
target_include_directories(templates INTERFACE 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/c++/include>
    $<INSTALL_INTERFACE:${PROJECT_NAME}/include>)
>>>>>>> d5261a5... Fixed CMakeLists.txt to find interface library
