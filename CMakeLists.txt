cmake_minimum_required(VERSION 3.1)

project(coding-practice VERSION 0.0)

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 17)
endif()

# Add -Wall (shows all warnings) -g (debugging symbols) -Werror (warnings -> errors) -pedantic (warnings by ISO C++ rules) -Wextra (extra warnings) -03 (most expensive optimization vs 02/01)
set(CMAKE_CXX_FLAGS "${CMAKE_CSS_FLAGS} -std=c++17 -Wall -g")

add_subdirectory(templates)
add_subdirectory(leetcode)
# add_subdirectory(hackerrank)