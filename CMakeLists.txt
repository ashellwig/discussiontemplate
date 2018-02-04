cmake_minimum_required(VERSION 3.0.0)
project(initpost VERSION 0.0.0)

set (CMAKE_CXX_COMPILER_ID "Clang++")
set (CMAKE_CXX_FLAGS "-Wall -std=c++17 -Weverything -fdiagnostics-format=clang")
set (CMAKE_CXX_FLAGS_DEBUG "-std=c++17 -Weverything -glldb -fcolor-diagnostics -fcaret-diagnostics -fdiagnostics-format=clang")
set (CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O2 -std=c++17 -Weverything -glldb -fcolor-diagnostics -fcaret-diagnostics -fdiagnostics-format=clang")

add_subdirectory(src)
