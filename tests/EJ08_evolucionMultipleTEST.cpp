#include "../ejercicios.h"
#include "gtest/gtest.h"
#include <algorithm>

using namespace std;

TEST(evolucionMultipleTEST, toroideDiagonalTresPorTresUnPaso){
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
    toroide res = evolucionMultiple(t, 1);
    EXPECT_EQ(res, evo_t);
}

TEST(evolucionMultipleTEST, evolucion4ticks){
    toroide t1 = {{false, false, false, true},
                  {true, false, true, false},
                  {false, false, true, false},
                  {false, false, false, false}};
    toroide t2 = {{true, false, true, false},
                  {true, true, true, true},
                  {true, true, true, true},
                  {false, false, false, false}};
    toroide res = evolucionMultiple(t1,4);
    EXPECT_EQ(res, t2);
}
