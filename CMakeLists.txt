cmake_minimum_required(VERSION 3.14)
project(cpp_sandbox
    DESCRIPTION "cpp sandbox to learn and play with"
    LANGUAGES C CXX
)

set(PROJECT_DIR  ${CMAKE_CURRENT_SOURCE_DIR}/projects)

add_subdirectory(${PROJECT_DIR}/hello_world)
add_subdirectory(${PROJECT_DIR}/gprof_samp)