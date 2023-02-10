cmake_minimum_required(VERSION 3.22)
project(HELLO)

set(CMAKE_CXX_STANDARD 23)
include_directories(.)

file(GLOB_RECURSE SOURCES "Src/*.*")



add_executable(HELLO main.c ${SOURCES})
