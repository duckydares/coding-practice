#!/bin/bash

# This script builds the problems in repository code and compiles it
# Usage: ./scripts/build.sh
if [ ! -d './build' ]; then
    mkdir ./build
fi
cmake -B ./build
cmake --build ./build