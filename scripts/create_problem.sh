#!/bin/bash

# This script creates the directory structure for a practice problem based on the template directory
# Usage: ./script/create_problem.sh -s leetcode -g top150 -p ###-problem-name

if [ $# -ne 3]; then
    echo "Usage:"
    echo "./script/create_problem.sh -hlt -s source -g group -p problem"
    echo "-s [source]: the top-level directory name"
    echo "-g [group]: the group-level directory name"
    echo "-p [problem]: problem name with format ###-problem-name"
    echo "-h = -s hackerrank"
    echo "-l = -s leetcode"
    echo "-t = -g top150"
    echo "Example: ./script/create_problem.sh -s leetcode -g top150 -p ###-sample-problem"
    echo "Example: ./script/create_problem.sh -lt -p ###-sample-problem"
    exit 0
fi

source=''
group=''
problem=''

# Using getopts instead of getopt as I don't think long input flags is necessary
# Note: getopts is POSIX standard meaning script not portable to other OS that don't have getopts
# TODO: Switch to argbash (github.com/matejak/argbash) & install with dependencies
while getopts 'g:hlp:s:t' flag; do
    case "$flag" in
        g) group="$OPTARG" ;;
        h) source='hackerrank' ;;
        l) source='leetcode' ;;
        p) problem="$OPTARG" ;;
        s) source="$OPTARG" ;;
        t) group='top150' ;;
        *) error "Unexpected option $flag" ;;
    esac
done

# TODO implement checks on inputs to error out properly
problem_path="$source/$group/$problem"

echo "Creating directory: $problem_path"
mkdir -p $problem_path

# Sync template space to new problem space
echo "Copying templates into the problem space"
rsync -i -r --exclude='c++/include/' \
    --exclude='python/solution.py' \
    --exclude='CMakeLists.txt' \
    --exclude='__pycache__/' \
    --exclude='python/__pycache__' \
    templates/* $problem_path

mv $problem_path/tempList.txt $problem_path/CMakeLists.txt

# Modify problem name
problem=$(echo "$problem" | perl -pe 's/\d+-//g') # Remove problem # from front
problem=$(echo "$problem" | perl -pe 's/-/_/g') # Substitute all - for _

# Replace template_name with problem
sed -i "s/template_name/$problem/g" $problem_path/CMakeLists.txt
sed -i "s/template_name/$problem/g" $problem_path/c++/tests/test.cpp

# Add last empty files
touch $problem_path/README.md
touch $problem_path/python/solution.py
touch $problem_path/python/tests/__init__.py