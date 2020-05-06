// Graph.cpp for Model

#ifndef GRAPH_H
#define GRAPH_H
#include <stdlib.h>
#include <iostream>
#include <map>
#include "Node.h"
using namespace std;
namespace GameModel
{
    class Graph
    {
        private:
            int height;
            int width;
            map<int, Node> nodes;
            //map<int, Node>::iterator nodes_iterator;
            pair<int, int> food;
            pair<int, int> snakes_head;
        public:
            Graph(pair<int, int> snakes_head_coordinates, pair<int, int> food_coordinates);
            size_t get_height();
            size_t get_width();
            size_t get_count();
            size_t Dijkstra();
            void create_map();
            void print_graph();
    };
}
#endif // GRAPH_H
