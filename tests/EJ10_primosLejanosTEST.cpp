#include "../ejercicios.h"
#include "gtest/gtest.h"
#include <algorithm>

using namespace std;

TEST(primosLejanosTEST, toroideHorizontalPeriodico2){
    toroide t1 = { 
                  {false, false, false, false, false}, 
                  {false, false, false, false, false}, 
                  {false, true, true, true, false},
                  {false, false, false, false, false}, 
                  {false, false,false, false, false} };
    toroide t2 = { 
                  {false, false, false, false, false}, 
                  {false, false, true, false, false}, 
                  {false, false, true, false, false},
                  {false, false, true, false, false}, 
                  {false, false,false, false, false} };
    bool res = primosLejanos(t1, t2);
    EXPECT_TRUE(res);
    res = primosLejanos(t2, t1);
    EXPECT_TRUE(res);
}

TEST(primosLejanosTEST, toroide1primoDe2){
    toroide t1 = {{false, false, false, true},
                  {true, false, true, false},
                  {false, false, true, false},
                  {false, false, false, false}};
    toroide t2 = {{true, false, true, false},
                  {true, true, true, true},
                  {true, true, true, true},
                  {false, false, false, false}};
    bool res = primosLejanos(t1,t2);
    EXPECT_TRUE(res);
}

TEST(primosLejanosTEST, toroide2primoDe1){
    toroide t1 = {{false, false, false, true},
                  {true, false, true, false},
                  {false, false, true, false},
                  {false, false, false, false}};
    toroide t2 = {{true, false, true, false},
                  {true, true, true, true},
                  {true, true, true, true},
                  {false, false, false, false}};
    bool res = primosLejanos(t2,t1);
    EXPECT_TRUE(res);
}

TEST(primosLejanosTEST, toroidePeriodico){
    toroide t = {{true, false, false, false},
                 {true, false, false, false},
                 {false, false, true, true},
                 {false, false, false, false}};

    bool res = primosLejanos(t, t);
    EXPECT_TRUE(res);
}

TEST(primosLejanosTEST, toroidesNoPrimos){
    toroide t1 = {
            {false, false, false, false, false},
            {false, false, false, false, false},
            {false, true, true, true, false},
            {false, false, false, false, false},
            {false, false, false, false, false} };
    toroide t2 = {
            {true, true, true, true, true},
            {false, false, false, false, false},
            {true, true, true, true, true},
            {false, false, false, false, false},
            {true, true, true, true, true} };

    bool res = primosLejanos(t1, t2);
    EXPECT_FALSE(res);
    res = primosLejanos(t2, t1);
    EXPECT_FALSE(res);
}

TEST(primosLejanosTEST, toroidesMismosNoPrimos){
    toroide t = {
            {false, false, false, false, false},
            {false, false, false, false, false},
            {false, true, true, false, false},
            {false, false, false, false, false},
            {false, false, false, false, false} };

    bool res = primosLejanos(t, t);
    EXPECT_FALSE(res);
}