#include "../ejercicios.h"
#include "gtest/gtest.h"
#include <algorithm>

using namespace std;

TEST(esPeriodicoTEST, toroideHorizontalPeriodico2){
    toroide t = { 
                  {false, false, false, false, false}, 
                  {false, false, false, false, false}, 
                  {false, true, true, true, false},
                  {false, false, false, false, false}, 
                  {false, false,false, false, false} };
    int p;
    bool res = esPeriodico(t, p);
    EXPECT_TRUE(res);
    EXPECT_EQ(p, 2);
}

TEST(esPeriodicoTEST, toroideInmortalNoPeriodico){
    toroide t = {{true, false, false, true},
                 {true, false, false, false},
                 {true, false, false, false},
                 {false, false, false, false}};
    int p = -1;
    bool res = esPeriodico(t, p);
    EXPECT_FALSE(res);
    EXPECT_EQ(p,-1);
}

TEST(esPeriodicoTEST, toroidePeriodico){
    toroide t = {{true, false, false, false},
                 {true, false, false, false},
                 {false, false, true, true},
                 {false, false, false, false}};
    int p = -1;
    bool res = esPeriodico(t, p);
    EXPECT_TRUE(res);
    EXPECT_EQ(p,2);
}

TEST(esPeriodicoTEST, toroideNoPeriodico){
    toroide t = {{true, true, false, false},
                 {true, false, false, true},
                 {true, false, false, false},
                 {false, false, false, false}};
    int p = -1;
    bool res = esPeriodico(t, p);
    EXPECT_FALSE(res);
    EXPECT_EQ(p,-1);
}