cmake_minimum_required(VERSION 3.14)
project(gprof_samp
    DESCRIPTION "gprof testing"
)

set(SOURCES
    src/main.cpp
)

option(gprof "optiont to use gprof" ON)

if(RELEASE AND gprof)
    set(TARGET_NAME gmon.out)
else()
    set(TARGET_NAME ${PROJECT_NAME})
endif()

set(TARGET_NAME gmon.out)
add_executable(${TARGET_NAME} ${SOURCES})

set_target_properties(${TARGET_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY    "${CMAKE_SOURCE_DIR}/bin/${PROJECT_NAME}-${CMAKE_BUILD_TYPE}"
)

#-----------------------------------
# BUILD FLAGS
#-----------------------------------

# added pg flag for gprof
set(CMAKE_CXX_FLAGS"${CMAKE_CXX_FLAGS} -pg")

set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELASE} -O3")

#-----------------------------------

target_link_libraries(${TARGET_NAME}
    PUBLIC      -lstdc++
)