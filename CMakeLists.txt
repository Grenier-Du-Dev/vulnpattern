cmake_minimum_required(VERSION 3.21)
project(main VERSION 1.0 DESCRIPTION "Project to find vulnerability pattern in code base" LANGUAGES CXX)
# Include subdirectories
add_subdirectory(src)
# Include header files
include_directories(include)


set (CMAKE_CXX_STANDARD 17)