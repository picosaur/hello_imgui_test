cmake_minimum_required(VERSION 3.13)  
project(hello_imgui_test VERSION 1.0.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(HELLOIMGUI_USE_SDL2 ON CACHE BOOL "" FORCE)
set(HELLOIMGUI_HAS_OPENGL3 ON CACHE BOOL "" FORCE)

add_subdirectory(external/hello_imgui)

hello_imgui_add_app(${PROJECT_NAME} src/main.cpp)
