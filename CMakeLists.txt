cmake_minimum_required(VERSION 3.16)
project(space_invader LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# to locate the globally installed Raylib 
find_package(raylib REQUIRED)

# Define the executable BEFORE linking
add_executable(space_invader src/main.cpp) 

# Link the library file
target_link_libraries(space_invader PRIVATE raylib)

# Ensure include paths are correct 
target_include_directories(space_invader PRIVATE ${RAYLIB_INCLUDE_DIRS})
