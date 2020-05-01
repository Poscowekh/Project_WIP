// Matrix.h

#ifndef SNAKE_GAME_MATRIX_H
#define SNAKE_GAME_MATRIX_H

#include <iostream>
#include <stdlib.h>
#include <vector>
#include "Snake.h"

using namespace std;
namespace GameModel
{
    class Matrix
    {
    private:
        size_t rows;
        size_t columns;
        vector<Snake > snakes;
        vector<pair<int, int> > food;
        vector<pair<int, int> > block;
    public:
        vector< vector<int> > matrix;
        Matrix();
        Matrix(int, int);
        int& operator()(const int &row, const int &col);
        int getRows() const;
        int getCols() const;
        void print() const;
    };
}
#endif // MATRIX_H
