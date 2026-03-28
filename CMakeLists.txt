cmake_minimum_required(VERSION 3.10)
project(ProyectoPaquete)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(ProyectoPaquete
    src/main.cpp
    src/PaqueteEnvio.cpp
)
