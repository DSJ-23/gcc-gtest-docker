#include <gtest/gtest.h>
#include "../bankaccount/bankaccount.h"

class CoordinateTest : public ::testing::Test {
protected:
    bank::Coordinates* test;

    virtual void SetUp(){
        test =  new bank::Coordinates(10,11);
    }

    virtual void TearDown(){
        delete test;
    }
};

TEST_F(CoordinateTest, properties){
    EXPECT_EQ(test->x, 10);
    EXPECT_EQ(test->y, 11);
}

TEST_F(CoordinateTest, sumCoordinates){
    int expectedResult(21);
    EXPECT_EQ(expectedResult, test->sumCoordinates());
}