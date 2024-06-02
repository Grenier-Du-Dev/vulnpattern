cmake_minimum_required(VERSION 3.21)
project(vulnpattern VERSION 1.0 DESCRIPTION "Project to find vulnerability pattern in code base" LANGUAGES CXX)

set (CMAKE_CXX_STANDARD 17)

# Include subdirectories
add_subdirectory(src)
# Include header files
include_directories(include)


