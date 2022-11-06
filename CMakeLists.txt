cmake_minimum_required(VERSION 3.00)

project(main)
add_subdirectory(adder)

include(FetchContent)
FetchContent_Declare(fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt
    GIT_TAG 9.0.0
)
FetchContent_MakeAvailable(fmt)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)

add_executable(main main.cpp)
target_link_libraries(main adder)
target_link_libraries(main fmt)