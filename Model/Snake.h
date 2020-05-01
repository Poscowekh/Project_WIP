// Snake.h for Snake

#ifndef SNAKE_H
#define SNAKE_H
#include <stdlib.h>
#include <vector>
#include <utility>
#include <string>
using namespace std;
namespace GameModel
{


    class Snake {
    private:
        size_t id;
        pair<int, int> movement_vector;
        vector< pair<int, int> > body;
    public:
        Snake();
        Snake(size_t size, pair<int, int> head);
        void move();
        void change_direction(pair<int, int> new_direction);
        size_t get_size();
        size_t get_id();
    };
}
#endif // SNAKE_H
