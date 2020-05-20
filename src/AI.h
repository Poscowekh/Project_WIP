#ifndef AI_H
#define AI_H

#include "Graph.h";

using namespace std;
namespace GameModel
{
    class AI
    {
        private:
            size_t ai_id;
            Graph* ai_graph;
            Graph* human_graph;
            vector<size_t> ai_way;
            vector<size_t> human_way;
            vector<size_t> ids;
            Matrix* matrix;
            bool compete_flag;
        public:
            AI(Matrix* mtrx);
            void count_ways();
            void choose_way();
            pair<int,int> choose_safe();
            pair<int,int> rand_move();
            void print_ways();
    };
}
#endif // AI_H
