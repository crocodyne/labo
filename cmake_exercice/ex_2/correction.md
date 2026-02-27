## Correction

```CMake
cmake_minimum_required(VERSION 3.22)
project(hello_world)

file(GLOB SRC_FILES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SRC_FILES})

target_compile_options(${PROJECT_NAME} PRIVATE 
    -g
    -Wall
)
```

## Another way of doing it

```bash
cmake -DCMAKE_BUILD_TYPE=Debug --build build
```
---
Pour information les variables globales cmake pour les flags :

 - CMAKE_CXX_FLAGS
 - CMAKE_C_FLAGS

 ```CMake
 set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall")
 ```