cmake_minimum_required(VERSION 3.6)
project(experience_one)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp main.h Triangle.cpp Triangle.h)
add_executable(experience_one ${SOURCE_FILES} Triangle.cpp Triangle.h)