cmake_minimum_required(VERSION 3.0.0)
project(todlist VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(lib src/todolist.cpp)
add_executable(todlist src/main.cpp)

target_link_libraries(todlist lib)



set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
