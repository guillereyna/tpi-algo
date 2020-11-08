#include "../ejercicios.h"
#include "gtest/gtest.h"

using namespace std;

TEST(densidadPoblacionTEST, toroideDiagonal){
    vector<bool> a = { true, true, true, true };
    toroide t = { a, a, a, a, a };
    EXPECT_NEAR(densidadPoblacion(t), 1.0, 0.01);
}

TEST(densidadPoblacionTEST, toroideLinea){
    toroide t = {
            {true, false, false},
            {false, true, false},
            {false, false, true},
            {true, false, false},
            {false, true, false},
            {false, false, true}};
    float res = densidadPoblacion(t);
    EXPECT_NEAR(res, 0.33, 0.01);
}

TEST(densidadPoblacionTEST, toroideMuerto){
    toroide t(5,vector<bool>(4,false));
    float res = densidadPoblacion(t);
    EXPECT_NEAR(res, 0, 0.01);
}