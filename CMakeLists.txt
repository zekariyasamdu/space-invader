cmake_minimum_required(VERSION 3.16)
project(space_invader LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SOURCE_FILES src/*.cpp src/*.hpp)

find_package(raylib REQUIRED)

add_executable(space_invader ${SOURCE_FILES}) 

target_link_libraries(space_invader PRIVATE raylib)

target_include_directories(space_invader PRIVATE 
    ${RAYLIB_INCLUDE_DIRS}
)
