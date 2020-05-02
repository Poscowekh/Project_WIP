// Snake.h for Snake

#ifndef SNAKE_H
#define SNAKE_H

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <utility>

using namespace std;

class Snake {
	private:
		vector< pair<int, int> > body;
	public:
		Snake();
		Snake(int, int, int);
		void move(string) const;
	    int get_size() const;
};
#endif // SNAKE_H
