// Main.cpp for Model/Graph

#include "Graph.h"

using namespace std;

int main() {
    GameModel::Graph graph = GameModel::Graph(make_pair(2,2), make_pair(0,0));
    graph.create_map();
    graph.print_graph();
    return 0;
}
