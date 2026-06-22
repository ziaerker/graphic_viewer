cmake_minimum_required(VERSION 3.10)

project(graphic_viewer)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(libs/glfw-3.4)

add_executable(graphic_viewer src/main.cpp)

target_link_libraries(graphic_viewer PRIVATE glfw)

