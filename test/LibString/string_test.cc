#include "gtest/gtest.h"
#include "LibString/string.hpp"

TEST(StringTest, ReturnsStringInUppercasePass) {
  std::string s1("apple");
  std::string s2(to_uppercase(s1));
  EXPECT_EQ(s2, "APPLE");
}

TEST(StringTest, OriginalStringIsNotChangedPass) {
  std::string s1("apple");
  std::string s2(to_uppercase(s1));
  EXPECT_EQ(s1, "apple");
}

TEST(StringTest, AbseilJoinWithSpacePass) {
  std::string s1("apple");
  std::string s2("tasty");
  std::string s3(join_strings(s1, s2, " "));
  EXPECT_EQ(s3, "apple tasty");
}

TEST(StringTest, AbseilJoinWithDashPass) {
  std::string s1("apple");
  std::string s2("tasty");
  std::string s3(join_strings(s1, s2, "-"));
  EXPECT_EQ(s3, "apple-tasty");
}