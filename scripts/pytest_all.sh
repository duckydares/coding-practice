#!/bin/bash

# This script runs pytest on all problems solved
TEST_FILES=$(find -type f -name test.py)

for TEST in ${TEST_FILES}; do
    pytest -v $TEST
done
