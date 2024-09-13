project(testing_code)
cmake_minimum_required(VERSION 3.10)

add_subdirectory(third_party/pybind11)

pybind11_add_module(testing_cpp first.cpp)