cmake_minimum_required(VERSION 3.16)
project(proj)

set(CMAKE_CXX_STANDARD 14)

set(SRCS src/main.cpp)
set (EXEC_FILE "exec")


add_executable(${EXEC_FILE} ${SRCS})

target_include_directories (${EXEC_FILE} PRIVATE ${CMAKE_SOURCE_DIR}/lib/test_lib)

option(WITH_TESTS "Enable/disable tests" OFF)
if (WITH_TESTS)
    enable_testing()
    add_subdirectory(lib)
endif()