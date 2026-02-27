cmake_minimum_required(VERSION 3.22)
project(hello_world)

file(GLOB SRC_FILES "src/*.cpp")
file(GLOB SRC_FILES "src/*.cpp")

add_executable(${PROJECT_NAME} ${CFLAGS} ${SRC_FILES})

target_compile_options(${PROJECT_NAME} PRIVATE 
    -g
    -Wall
)