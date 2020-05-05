cmake_minimum_required (VERSION 2.6)

project(Graph)

include_directories(headers)

add_executable(Graph
    Main.cpp
    Graph.cpp
    Node.cpp
)
