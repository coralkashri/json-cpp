cmake_minimum_required(VERSION 3.17.3)
set(PROJECT_NAME json-cpp)
project(${PROJECT_NAME})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "src/*" main.cpp "tests/*")

include_directories(../CppTemplateCustomConditions/include)

add_executable(${PROJECT_NAME} ${SOURCES})

link_directories(${PROJECT_NAME} ../CppTemplateCustomConditions/include)