cmake_minimum_required(VERSION 2.8.9)
project(ordenamiento)

include_directories(include)

set(SOURCES src/ordenamiento.cpp  src/main.cpp)

add_executable(ordenamiento ${SOURCES})
