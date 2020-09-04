cmake_minimum_required(VERSION 3.10)

project(sjqutils CXX)

add_library(sjqutils INTERFACE)
target_include_directories(sjqutils INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})