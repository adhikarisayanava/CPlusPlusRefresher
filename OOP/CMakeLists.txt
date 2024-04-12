cmake_minimum_required(VERSION 3.10)

# Set the project name
project(MyProject)

# Add the directory with header files
include_directories(header)

# Grab all of the source files
file(GLOB SOURCES "src/*.cpp")

# Add the executable
add_executable(MyProject ${SOURCES})