cmake_minimum_required(VERSION 3.14)
project(cpp_sandbox
    DESCRIPTION "cpp sandbox to learn and play with"
    LANGUAGES C CXX
)

set(SOURCES
    src/main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME}
    PUBLIC      -lstdc++
)

target_precompile_headers(
    ${PROJECT_NAME}
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include/cpp_sandbox_pch.h
)

target_include_directories(${PROJECT_NAME}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)
