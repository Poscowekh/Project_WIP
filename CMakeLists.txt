cmake_minimum_required (VERSION 2.6)

project(Graph)

include_directories(headers)

add_executable(Main
        src/Main.cpp
        src/Snake.cpp
        src/Matrix.cpp
        src/Block.cpp
        src/Food.cpp
        src/Graph.cpp
        src/Node.cpp
        src/Tests.cpp
)
