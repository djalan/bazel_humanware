#include "gtest/gtest.h"
#include "LibMath/math.hpp"

TEST(AdditionTest, ReturnsCorrectSumPass) {
  EXPECT_EQ(add_numbers(1, 1), 2);
}

TEST(AdditionTest, NotEqualBiggerPass) {
  EXPECT_LT(add_numbers(1, 1), 3);
}

TEST(AdditionTest, NotEqualSmallerPass) {
  EXPECT_GT(add_numbers(1, 1), 1);
}

TEST(LearningTest, Skipping) {
  GTEST_SKIP() << "Skipping me";
  EXPECT_EQ(0,1);
}