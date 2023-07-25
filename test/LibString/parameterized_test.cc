#include "gtest/gtest.h"
#include "LibString/string.hpp"
#include "tuple"

// =========================
// Uppercase tests
// =========================
class UppercaseMultipleParametersTests :public ::testing::TestWithParam<std::tuple<std::string, std::string>>
{};

TEST_P(UppercaseMultipleParametersTests, CheckIfUppercase) {
  std::string word = std::get<0>(GetParam());
  std::string expected = std::get<1>(GetParam());
  ASSERT_EQ(expected, to_uppercase(word));
}

INSTANTIATE_TEST_SUITE_P(
  UppercaseTests, UppercaseMultipleParametersTests,
  ::testing::Values(
    std::make_tuple("Alain", "ALAIN"),
    std::make_tuple("Alain123", "ALAIN123"),
    std::make_tuple("456", "456"),
    std::make_tuple("", ""),
    std::make_tuple("Some space", "SOME SPACE"),
    std::make_tuple("Belanger!", "BELANGER!")
  )
);

// ===================
// Year is even test
// ===================
class YearsAreEvenTests :public ::testing::TestWithParam<int>
{};

TEST_P(YearsAreEvenTests, CheckIfUppercase) {
  int year = GetParam();
  ASSERT_EQ(0, (year % 2));
}

INSTANTIATE_TEST_SUITE_P(
  YearEvenTests, YearsAreEvenTests,
  ::testing::Values(
    2, 4, 6, 8
  )
);
