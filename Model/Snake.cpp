// Snake.cpp for Snake

#include "Snake.h"

namespace GameModel
{
using namespace std;

    Snake::Snake()
    {//Creates Snake at (0,0)
        body.push_back(make_pair(0,0));
    }

    Snake::Snake(size_t size, pair<int, int> head)
    { //Creates Snake of size at (x,y)
        body.resize(size);
        for (size_t i = 0; i < size; i++)
        {
            body[i] = make_pair(head.first + i, head.second);
        }
    }

    size_t Snake::get_size()
    {
        return this->body.size();
    }

    void Snake::change_direction(pair<int, int> new_direction)
    { //Changes Snake's movement direction
        if(new_direction.first != movement_vector.first && new_direction.first != movement_vector.first)
            movement_vector = new_direction;
    }

    void Snake::move()
    { //Moves Snake in defined direction
        for (size_t i = 0; i < body.size(); i++)
        {
            body[i].first += movement_vector.first;
            body[i].second += movement_vector.second;
        }
    }

    size_t Snake::get_id()
    {//Returns Snake's ID
        return id;
    }
}
