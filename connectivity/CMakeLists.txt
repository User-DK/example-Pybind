cmake_minimum_required(VERSION 3.11)
project(connectivity)

set(CMAKE_CXX_STANDARD 14)

# Find and include pybind11 manually
find_package(pybind11 REQUIRED)

# Configure and link with pybind11
pybind11_add_module(connectivity connectivity.cpp)

# Find Python 3.11 specifically. This is actually required for my system, as I have multiple versions of Python installed.
find_package(Python3 3.11 EXACT REQUIRED COMPONENTS Interpreter Development)
