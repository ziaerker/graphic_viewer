cmake_minimum_required(VERSION 3.10)

project(graphic_viewer)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(libs/glfw-3.4)

add_executable(graphic_viewer src/main.cpp src/glad.c)

target_include_directories(graphic_viewer PRIVATE include)

if (WIN32)
    target_link_libraries(graphic_viewer PRIVATE glfw opengl32)
else()
    target_link_libraries(graphic_viewer PRIVATE glfw GL m dl)
endif()