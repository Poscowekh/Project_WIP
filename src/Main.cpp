// main.cpp

#include "Tests.h"
#include "Matrix.h"
#include "Graph.h"
#include "AI.h"

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

    /*GameModel::Matrix* matrix = new GameModel::Matrix(7,7);
    matrix->spawn_borderline();
    matrix->spawn_food("apple", make_pair(1,1), 1);
    matrix->spawn_block("wall", make_pair(2,3), 2);
    matrix->spawn_block("wall", make_pair(2,2), 3);
    matrix->spawn_block("wall", make_pair(3,2), 4);
    matrix->add_snake(2, make_pair(4,5), 100);
    matrix->update_matrix();
    matrix->print();*/

    GameModel::Matrix* matrix = new GameModel::Matrix(9,9);
    matrix->spawn_borderline();
    matrix->spawn_food("apple", make_pair(1,1), 3);
    matrix->spawn_block("wall", make_pair(1,2), 20);
    matrix->spawn_block("wall", make_pair(2,2), 21);
    matrix->spawn_block("wall", make_pair(2,3), 22);
    matrix->spawn_block("wall", make_pair(2,4), 23);
    matrix->spawn_block("wall", make_pair(2,6), 25);
    matrix->spawn_block("wall", make_pair(2,7), 26);
    matrix->spawn_block("wall", make_pair(2,8), 27);
    pair<size_t, size_t> coords = make_pair(4,1);
    matrix->add_snake(1, coords, 100);
    matrix->change_movement(100, make_pair(1,0));
    matrix->add_snake(2, make_pair(5,4), 102);
    matrix->change_movement(102, make_pair(0,1));
    matrix->update_matrix();

    GameModel::AI* ai = new GameModel::AI(matrix);
    ai->count_ways();
    ai->print_ways();
    ai->choose_way();

    matrix->update_matrix();

    ai = new GameModel::AI(matrix);
    ai->count_ways();
    ai->print_ways();
    ai->choose_way();

    //pair<int, int> vect = matrix->get_snakes()[matrix->return_snakes_index_by_id(102)].get_movement_vector();
    //cout << vect.first << ' ' << vect.second << endl;

    /*for(size_t i = 0; i < 4; i++)
    {
        matrix->update_matrix();
        cout << "MATRIX" << endl;
        matrix->print();
        //coords = make_pair(5, 4 + i);
        coords = make_pair(4 + i, 1);
        GameModel::Graph* graph = new GameModel::Graph(100, matrix); ///KEY = X*SHIFT + Y; x = right; y = down
        cout << "KEYS" << endl;
        graph->print_keys();
        graph->Dijkstra();
        cout << "DISTANCES";
        graph->print_distance();
        vector<size_t> way = graph->get_way();
        for(size_t i = 0; i < way.size(); i++)
            cout << way[i] << ' ';
        cout << endl << endl;
        //delete graph;*/
    //}

    //delete matrix;
    //delete graph;
    //delete ai;

    return 0;
}
