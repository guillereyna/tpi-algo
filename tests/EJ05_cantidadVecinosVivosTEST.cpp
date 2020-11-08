#include "../ejercicios.h"
#include "../auxiliares.h"
#include "gtest/gtest.h"
#include <algorithm>

using namespace std;

TEST(cantidadVecinosVivosTEST, seisVivos){
    toroide t = {
            {true, false, false, false},
            {false, false, true, true},
            {false, false, false, false},
            {true, false, true, true}};

    EXPECT_EQ(cantidadVecinosVivos(t, 0, 3), 6);
}

TEST(cantidadVecinosVivosTEST, ceroVecinosVivos){
    toroide t(5,vector<bool>(4,false));
    t[2][3] = true;
    int res = cantidadVecinosVivos(t,2,3);
    EXPECT_EQ(res,0);
}

TEST(cantidadVecinosVivosTEST, todosLosVecinosTrasladadosVivos){
    toroide t = {
            {false, false, false, true},
            {false, false, true, true},
            {false, false, false, false},
            {true, true, false, true}};

    EXPECT_EQ(cantidadVecinosVivos(t, 0, 0), 5);
}