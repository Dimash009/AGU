cmake_minimum_required(VERSION 3.16)
project(EnvironmentTest LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(EnvironmentTest main.cpp)

if(MSVC)
    target_compile_options(EnvironmentTest PRIVATE /Zc:__cplusplus)
endif()