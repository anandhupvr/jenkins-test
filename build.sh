#!/bin/bash

mkdir -p thirdParty

cd thirdParty

git clone https://github.com/google/googletest.git

cd ../

# Create the build directory
mkdir -p build

# Change to the build directory
cd build

# Run cmake with the parent directory as the source
cmake ..

make all