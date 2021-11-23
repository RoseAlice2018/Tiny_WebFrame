cmake_minimum_required(VERSION 3.20)
project(Tiny_WebFrame)

set(CMAKE_CXX_STANDARD 17)

add_executable(Tiny_WebFrame main.cpp log.h singleton.h log.cpp)
