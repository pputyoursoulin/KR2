cmake_minimum_required(VERSION 3.8)

project(KR2)

set (KR2_SRC  Main.cpp Autotest.cpp Methods.spp)
set (KR2_HDR Class.h)

add_executable (${PROJECT_NAME} ${KR2_SRC} ${KR2_HDR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")