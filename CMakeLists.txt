cmake_minimum_required(VERSION 3.14)  # Ensure CMake 3.14+ (FetchContent is available from this version)
project(Evolutionary_Algorithm)

set(CMAKE_CXX_STANDARD 17)

if(CMAKE_SYSTEM_NAME STREQUAL "Windows")
    message(STATUS "Compiling on Windows")
    set(CMAKE_C_COMPILER "cl")       # Use MSVC
    set(CMAKE_CXX_COMPILER "cl")
elseif(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
    message(STATUS "Compiling on macOS")
    set(CMAKE_C_COMPILER "/usr/bin/clang")      # Use Clang on macOS
    set(CMAKE_CXX_COMPILER "/usr/bin/clang++")
endif()

# FetchContent for OpenGA from GitHub
include(FetchContent)

FetchContent_Declare(
  OpenGA
  GIT_REPOSITORY https://github.com/Arash-codedev/openGA
  GIT_TAG master  # or you can specify a specific tag/commit if needed
)

FetchContent_Declare(
  stb
  GIT_REPOSITORY https://github.com/nothings/stb
  GIT_TAG master  # or you can specify a specific tag/commit if needed
 )

FetchContent_MakeAvailable(OpenGA stb)
message(STATUS "OpenGA & stb fetch and build completed!")

# Assume OpenGA's header files are under OpenGA/include
include_directories(${OpenGA_SOURCE_DIR}/include)

# If OpenGA builds a static library or a shared library, you should link it manually.
# Let's assume the build output is located under OpenGA_BINARY_DIR/lib (adjust if needed)
set(OpenGA_LIB_DIR ${OpenGA_BINARY_DIR}/lib)


# Set OpenGA directory
set(OpenGA_DIR ${OpenGA_BINARY_DIR})

# Add source and header files
file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "src/*.h")

# Add executable
add_executable(Evolutionary_Algorithm ${SOURCES} ${HEADERS})

target_include_directories(Evolutionary_Algorithm PRIVATE ${stb_SOURCE_DIR})
target_include_directories(Evolutionary_Algorithm PRIVATE ${OpenGA_SOURCE_DIR})

