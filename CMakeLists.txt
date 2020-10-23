cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp tree/tree.cpp tree/tree.h tree_handler/TreeHandler.cpp tree_handler/TreeHandler.h)