#!/bin/bash

# This script runs pytest on all problems solved
LOG=false
TEST_FILES=$(find -type f -name test.py)

function usage() {
    echo "Usage:"
    echo "scripts/pytest_all.sh -v"
    echo "-v: disables output capturing for logging"
}
if [ $# -eq 1 ]; then
    if [ $1 == '-v' ]; then
        LOG=true
    elif [ $1 == '--help' ]; then
        usage
        exit 0
    fi
elif [ $# -gt 1 ]; then
    usage
    exit 0
fi

for TEST in ${TEST_FILES}; do
    if $LOG; then
        pytest -v --log-cli-level=DEBUG --log-cli-format="%(asctime)s - %(name)s - %(levelname)s - %(message)s" $TEST
    else
        pytest -v $TEST
    fi
done
