#!/bin/bash

echo "Cleaning CMake cache..."

# Remove the CMake cache and generated files if they exist
rm -rf CMakeCache.txt CMakeFiles
rm -f CMakeCache.txt cmake_install.cmake Makefile
echo "Cache cleaned."

# Create a build directory if it doesn't exist
if [ ! -d "build" ]; then
  mkdir build
fi

# Set source directory to the current directory where CMakeLists.txt is located
SRC_DIR=$(pwd)

echo "Running CMake..."

# Run CMake to generate build files in the 'build' directory
# Modify the generator based on the type of build system you're using on macOS
cmake -B build -S "$SRC_DIR" || { echo "CMake configuration completed with errors."; exit 1; }

echo "Building the project..."

# Build the project using the generated build files in the 'build' directory
# Will still try to build, but it's okay if it fails due to errors in configuration
cmake --build build --config Release || { echo "Build failed or CMake configuration errors detected!"; exit 1; }

echo "Build successful!"
exit 0
