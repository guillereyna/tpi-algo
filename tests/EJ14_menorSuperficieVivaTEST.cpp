#include "../ejercicios.h"
#include "gtest/gtest.h"

using namespace std;

TEST(menorSuperficieVivaTEST, enunciado){
    toroide t = {
            {true, false, false, true},   // 1
            {false, false, false, false}, // 2
            {false, false, false, false}, // 3
            {true, true, false, false}};  // 4

    int res = menorSuperficieViva(t);
    EXPECT_EQ(res, 6);
}

TEST(menorSuperficieVivaTEST, toroide9){
    toroide t = {{true, false, false, false},
                 {true, false, false, false},
                 {false, false, true, true},
                 {false, false, false, false}};
    int res = menorSuperficieViva(t);
    EXPECT_EQ(res, 9);
}

TEST(menorSuperficieVivaTEST, toroide9Traslacion){
    toroide t = {{false, false, false, false},
                 {false, false, true, false},
                 {false, false, true, false},
                 {true, true, false, false}};
    int res = menorSuperficieViva(t);
    EXPECT_EQ(res, 9);
}