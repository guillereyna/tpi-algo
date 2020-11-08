#include "../ejercicios.h"
#include "gtest/gtest.h"
#include <algorithm>

using namespace std;

TEST(evolucionToroideTEST, toroideDiagonalTresPorTresUnPaso){
    toroide t = { {true, false, false}, {false, true, false}, {false, false, true} };
    //1*0 0 1*0
    //0 1 0 0 1
    //0 0 1 0 0
    //1 0 0 1 0
    //0*1 0 0*1
    toroide evo_t = { {true, true, true}, {true, true, true}, {true, true, true} };
    //  1 1 1
    //  1 1 1
    //  1 1 1
    evolucionToroide(t);
    EXPECT_EQ(t, evo_t);
}

TEST(evolucionToroideTEST, toroideMuerto){
    toroide t = { {false, false, false, false, false},
                  {false, false, false, false, false},
                  {false, false, false, false, false},
                  {false, false, false, false, false},
                  {false, false, false, false, false} };

    evolucionToroide(t);
    toroide evo = { {false, false, false, false, false},
                    {false, false, false, false, false},
                    {false, false, false, false, false},
                    {false, false, false, false, false},
                    {false, false, false, false, false} };

    EXPECT_EQ(evo, t);
}

TEST(evolucionToroideTEST, todasVivas){
    toroide t = { {true, true, true, true},
                  {true, true, true, true},
                  {true, true, true, true},
                  {true, true, true, true}, };

    evolucionToroide(t);

    toroide evo = { {false, false, false, false},
                    {false, false, false, false},
                    {false, false, false, false},
                    {false, false, false, false} };

    EXPECT_EQ(evo, t);
}