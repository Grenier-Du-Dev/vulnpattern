
add_subdirectory(cpp)
include_directories(../include)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE ccodebase_lib)

