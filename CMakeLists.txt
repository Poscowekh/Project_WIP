cmake_minimum_required (VERSION 2.6)

project(Graph)

include_directories(headers)

add_executable(Main
	Main.cpp
	Snake.cpp
	Matrix.cpp
	Block.cpp
	Food.cpp
	Graph.cpp
	Node.cpp
	Tests.cpp
)
