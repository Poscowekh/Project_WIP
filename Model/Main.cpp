// Main_Model.cpp for Model

#include "Matrix.h"
#include "Snake.h"

using namespace std;

int main()
{
    //srand(time(NULL));
    srand(1);
    int x = 7;
    int y = 5;
    //cin >> x >> y;
    GameModel::Matrix field = GameModel::Matrix(x, y); //Matrix x by y
    field.add_snake(3, make_pair(2,2));  //Snake of size 3 at x(2-2),y(2-4)
    field.spawn_food(1);
    field.spawn_blocks(2);
    field.print();
    field.move_snakes();
    field.set_values();
    field.print();
    //system("pause");
    return 0;
}
/* To do list:
{
What works:
    1) Creating field
    2) Random spawning of food and blocks
    3) Field values and print
    4)
    5)
What does not:
    1) Creating and adding snake through matrix
    2) Reseting field to zero
    3)
    4)
    5)
{*/
