cmake_minimum_required(VERSION 3.14)
project(untitled)

find_package(OpenCV REQUIRED)
message(STATUS "OpenCV library status:")
message(STATUS "     version: ${OpenCV_VERSION}")
message(STATUS "     libraries: ${OpenCV_LIBS}")
message(STATUS "     include path: ${OpenCV_INCLUDE_DIRS}")
include_directories(${OpenCV_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 11)

add_executable(main showimg/main.cpp showimg/matchtemplate.cpp)
target_link_libraries(main ${OpenCV_LIBS})