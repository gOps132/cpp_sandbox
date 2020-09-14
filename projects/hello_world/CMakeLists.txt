cmake_minimum_required(VERSION 3.14)
project(cpp_hello_world
    DESCRIPTION "Boilerplate code for cpp sandbox"
)

set(SOURCES
    src/main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY    "${CMAKE_SOURCE_DIR}/bin/${PROJECT_NAME}-${CMAKE_BUILD_TYPE}"
)

#-----------------------------------
# BUILD TYPE FLAGS
#-----------------------------------

set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELASE} -O3")

#-----------------------------------


target_link_libraries(${PROJECT_NAME}
    PUBLIC      -lstdc++
)