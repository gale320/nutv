cmake_minimum_required(VERSION 3.16)
project(loko CXX C)

include(cmake/option.cmake)
include(cmake/glog.cmake)
include(cmake/opencv.cmake)
include(cmake/boost.cmake)

include_directories(src)

add_subdirectory(src)
add_subdirectory(module)
add_subdirectory(app)
add_subdirectory(test)
