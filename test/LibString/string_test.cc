#include "gtest/gtest.h"
#include "LibString/string.hpp"

TEST(StringTest, ReturnsStringInUppercasePass) {
  string s1("apple");
  string s2(to_uppercase(s1));
  EXPECT_EQ(s2, "APPLE");
}

TEST(StringTest, OriginalStringIsNotChangedPass) {
  string s1("apple");
  string s2(to_uppercase(s1));
  EXPECT_EQ(s1, "apple");
}