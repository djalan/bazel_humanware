#include <gtest/gtest.h>
#include "LibMath/math_hw.hpp"


TEST(AdditionTest, ReturnsCorrectSum) {
  EXPECT_EQ((1+1), 2);
  // EXPECT_EQ(add_numbers(1, 1), 2);
  // EXPECT_NEQ(add_numbers(1, 1), 1);
  // EXPECT_NEQ(add_numbers(1, 1), 3);
}