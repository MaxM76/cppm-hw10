cmake_minimum_required(VERSION 3.22.0)
project(my_second_cmake_project)
file(GLOB CPPS "*.cpp")
add_executable(my_second_cmake_program ${CPPS})