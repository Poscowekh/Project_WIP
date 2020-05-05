// Graph.cpp for Model

#include "Graph.h"

using namespace std;
namespace GameModel
{
    Graph::Graph(pair<int, int> snakes_head_coordinates, pair<int, int> food_coordinates)
    {
        height = abs(snakes_head_coordinates.first - food_coordinates.first) + 1;
        width = abs(snakes_head_coordinates.second - food_coordinates.second) + 1;
        snakes_head = snakes_head_coordinates;
        food = food_coordinates;
    }

    void Graph::create_map()
    {
        for(size_t i = 0; i < height; i++)
            for(size_t j = 0; j < width; j++)
                nodes[width*j + height] = Node(make_pair(i,j), 0, width*j + height);
    }

    size_t Graph::get_height()
    {
        return height;
    }

    size_t Graph::get_width()
    {
        return width;
    }

    size_t Graph::get_count()
    {
        return height*width;
    }

    //size_t Graph::Dijkstra()
}
