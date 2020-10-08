cmake_minimum_required(VERSION 3.17)
project(EasyADBCLI)

set(CMAKE_CXX_STANDARD 14)

add_executable(EasyADBCLI main.cpp menu.h adb.h)