#!/bin/bash

# This script runs pytest on all problems solved
LOG=false
TEST_FILES=$(find -type f -name test.py)

if [ $# -eq 1 ]; then
    if [ $1 == '-s' ]; then
        LOG=true
    elif [ $1 == '--help' ]; then
        echo "Usage:"
        echo "scripts/pytest_all.sh -s"
        echo "-s: disables output capturing for logging"
        exit 0
    fi
fi
for TEST in ${TEST_FILES}; do
    if $LOG; then
        pytest -v --log-cli-level=DEBUG --log-cli-format="%(asctime)s - %(name)s - %(levelname)s - %(message)s" $TEST
    else
        pytest -v $TEST
    fi
done
