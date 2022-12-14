include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)

set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

set(SRCS
  runner.cpp
  test_first.cpp
  test_second.cpp
)

message(STATUS "bhbhbhbb ${CMAKE_SOURCE_DIR}")
set (EXEC_FILE "tests_runner")

add_executable(${EXEC_FILE} ${SRCS})
target_include_directories(${EXEC_FILE} PRIVATE ${CMAKE_SOURCE_DIR}/lib/test_lib)
target_link_libraries(${EXEC_FILE} GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(${EXEC_FILE})