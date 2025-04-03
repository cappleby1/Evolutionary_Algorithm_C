@echo off
echo Cleaning CMake cache...

:: Remove the CMake cache and generated files if they exist
rmdir /s /q CMakeCache.txt CMakeFiles
del CMakeCache.txt
del cmake_install.cmake
del Makefile
echo Cache cleaned.

:: Create a build directory if it doesn't exist
if not exist "build" mkdir build

:: Set source directory to the current directory where CMakeLists.txt is located
set SRC_DIR=%cd%

echo Running CMake for Visual Studio...

:: Run CMake to generate Visual Studio solution files in the 'build' directory
cmake -B build -S "%SRC_DIR%" -G "Visual Studio 17 2022" || goto :error

echo Building the project...

:: Build the project using MSBuild through CMake in the 'build' directory
cmake --build build --config Release || goto :error

echo Build successful!
exit /b 0

:error
echo Build failed!
exit /b
