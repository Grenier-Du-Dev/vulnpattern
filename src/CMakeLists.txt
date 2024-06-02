
add_subdirectory(cpp)
add_subdirectory(content)
add_subdirectory(utils)
include_directories(../include)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE ccodebase_lib utils_lib content_lib)

