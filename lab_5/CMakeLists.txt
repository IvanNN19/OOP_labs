cmake_minimum_required(VERSION 3.10)
project(lab5)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(main main.cpp) 
add_executable(tests tests.cpp)  

target_link_libraries(tests PRIVATE GTest::gtest_main)