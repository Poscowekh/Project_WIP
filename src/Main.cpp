// main.cpp

#include "Tests.h"
#include "Matrix.h"
#include "Graph.h"

using namespace std;
int main() {
    //GameModel::test_circle();             //Test circle movement
    //GameModel::test_food();               //Test eating food
    //GameModel::test_block();              //Test reaching block
    //GameModel::test_food_block();         //Test eating food and reaching block

    //GameModel::test_border();             //Test destroying at border
    //GameModel::test_border_food();        //Test eating food at border
    //GameModel::test_border_block();       //Test destroying by block at border
    //GameModel::test_border_food_block();  //Test eating and destroying at border

    GameModel::Matrix* matrix = new GameModel::Matrix(7,7);
    matrix->spawn_borderline();
    matrix->spawn_food("apple", make_pair(1,1), 1);
    matrix->spawn_block("wall", make_pair(2,3), 2);
    matrix->spawn_block("wall", make_pair(2,2), 3);
    matrix->spawn_block("wall", make_pair(3,2), 4);
    matrix->add_snake(2, make_pair(5,5), 100);
    matrix->update_matrix();
    matrix->print();
    cout << endl;

    GameModel::Graph* graph = new GameModel::Graph(make_pair(3,3), matrix);
    //graph->print_graph();
    graph->Dijkstra();
    graph->print_distance();

    return 0;
}
