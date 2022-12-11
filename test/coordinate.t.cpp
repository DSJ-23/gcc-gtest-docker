#include <gtest/gtest.h>
#include "bankaccount/bankaccount.h"

TEST(CoordinateInitialize, properties){
    bank::Coordinates test(10,11);
    EXPECT_EQ(test.x, 10);
    EXPECT_EQ(test.y, 11);
}

TEST(CoordinateSum, sumCoordinates){
    bank::Coordinates test(10,11);
    int expectedResult(21);
    EXPECT_EQ(expectedResult, test.sumCoordinates());
}