#!/bin/bash

# Create the build directory
mkdir -p build

# Change to the build directory
cd build

# Run cmake with the parent directory as the source
cmake ..

make all