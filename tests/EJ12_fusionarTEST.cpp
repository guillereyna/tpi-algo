#include "../ejercicios.h"
#include "gtest/gtest.h"
#include <algorithm>

using namespace std;

TEST(fusionarTEST, sinInterseccion){
    toroide t1 = { 
                  {true, false, false},
                  {false, true, false},
                  {false, false, true}}; 
    toroide t2 = { 
                  {false, true, true},
                  {true, false, true},
                  {true, true, false}};

    toroide tout = {
            {false, false, false},
            {false, false, false},
            {false, false, false}};

    toroide res = fusionar(t1, t2);
    EXPECT_EQ(res, tout);
}

TEST(fusionarTEST, conInterseccion){
    toroide t1 = {{true, false, false, false},
                  {true, false, false, false},
                  {false, false, true, true},
                  {false, false, false, false}};
    toroide t2 = {{true, true, false, false},
                  {true, false, false, true},
                  {true, false, false, false},
                  {false, false, false, false}};

    toroide tout = {{true, false, false, false},
                    {true, false, false, false},
                    {false, false, false, false},
                    {false, false, false, false}};

    toroide res = fusionar(t1, t2);
    EXPECT_EQ(res, tout);
}