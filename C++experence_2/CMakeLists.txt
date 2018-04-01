cmake_minimum_required(VERSION 3.6)
project(C__experence_2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp company.cpp company.h staff.cpp staff.h)
add_executable(C__experence_2 ${SOURCE_FILES} company.cpp company.h staff.cpp staff.h)