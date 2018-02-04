cmake_minimum_required(VERSION 3.0.0)
project(initpost VERSION 0.0.0)

enable_testing()

set (CMAKE_CXX_COMPILER_ID "Clang++")

set (CMAKE_CXX_FLAGS_INIT "-Wall -std=c++17 -Weverything -fdiagnostics-format=clang")
set (CMAKE_CXX_FLAGS_DEBUG_INIT "-std=c++17 -Weverything -glldb -fcolor-diagnostics -fcaret-diagnostics -fdiagnostics-format=clang")
set (CMAKE_CXX_FLAGS_MINSIZEREL_INIT "-Os -DNDEBUG")
set (CMAKE_CXX_FLAGS_RELEASE_INIT "-O4 -DNDEBUG")
set (CMAKE_CXX_FLAGS_RELWITHDEBINFO_INIT "-O2 -std=c++17 -Weverything -glldb -fcolor-diagnostics -fcaret-diagnostics -fdiagnostics-format=clang")

option(USE_CLANG ON)
include_directories("../include")
add_subdirectory(src)
