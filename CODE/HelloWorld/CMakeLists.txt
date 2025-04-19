cmake_minimum_required(VERSION 3.10)

# Project name
project(HelloWorld)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add source files
add_library(hello_world src/hello_world.cpp)

# Add the test executable
add_executable(test_hello_world tests/test_hello_world.cpp)

# Link the library to the test executable
target_link_libraries(test_hello_world hello_world)