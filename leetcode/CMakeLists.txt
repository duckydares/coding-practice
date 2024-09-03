cmake_minimum_required(VERSION 3.1)

project(leetcode)

find_library(TEMPLATES_LIB
    NAMES templates REQUIRED)

add_subdirectory(top150/88-merge-sorted-arrays)