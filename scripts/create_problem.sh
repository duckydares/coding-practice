#!/bin/bash

# This script creates the directory structure for a practice problem
# Usage: ./script/create_problem.sh "p#-problem-name" "leetcode/hackerrank"

dir_name=$1
source_name=$2

mkdir -p $source_name/$dir_name/c++/tests
mkdir -p $source_name/$dir_name/python/tests

touch $source_name/$dir_name/README.md
cp ../templates/templateList.txt $source_name/$dir_name/CMakeLists.txt
touch $source_name/$dir_name/c++/solution.cpp
touch $source_name/$dir_name/c++/tests/test.cpp
touch $source_name/$dir_name/python/solution.py
touch $source_name/$dir_name/python/__init__.py
touch $source_name/$dir_name/python/tests/test.py
touch $source_name/$dir_name/python/test/__init__.py