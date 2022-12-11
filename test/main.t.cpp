#include <gtest/gtest.h>
#include "../adder/adder.h"

TEST(HelloGTEST, first){
    bool test = false;
    EXPECT_FALSE(test);
}

TEST(HelloGTEST, second){
    int a = 1;
    EXPECT_EQ(a, 1);
}

TEST(HelloGTEST, third){
    int expected_result = 3;
    EXPECT_EQ(plusone(2), expected_result);
}