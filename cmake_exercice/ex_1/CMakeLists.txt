cmake_minimum_required(VERSION 3.22)
project(hello_world)

file(GLOB SRC_FILES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SRC_FILES})