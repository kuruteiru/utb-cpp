cmake_minimum_required(VERSION 3.10)

# Project name and version
project(ex1 VERSION 0.1.0 LANGUAGES CXX)

# Require C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add the executable
add_executable(${PROJECT_NAME}
    src/main.cpp
)

# If you plan to add include directories later:
# target_include_directories(${PROJECT_NAME} PRIVATE include)
