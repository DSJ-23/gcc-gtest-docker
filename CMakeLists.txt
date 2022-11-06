cmake_minimum_required(VERSION 3.00)

project(main)
add_subdirectory(adder)

include(FetchContent)
FetchContent_Declare(fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt
    GIT_TAG 9.0.0
)
FetchContent_MakeAvailable(fmt)

FetchContent_Declare(googletest
    GIT_REPOSITORY https://github.com/google/googletest
    GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)

enable_testing()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)

add_executable(main main.cpp)
target_link_libraries(main adder)
target_link_libraries(main fmt)

add_executable(
  hello_test
  hello_test.cc
)

target_link_libraries(
  hello_test
  GTest::gtest_main
)
include(GoogleTest)
gtest_discover_tests(hello_test)
