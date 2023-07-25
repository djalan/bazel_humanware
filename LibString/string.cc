#include "string.hpp"
#include <algorithm>
#include "absl/strings/str_join.h"

std::string to_uppercase(std::string s1) {
    transform( s1.begin(), s1.end(), s1.begin(), ::toupper);
    return s1;
}

// use Abseil
std::string join_strings(std::string s1, std::string s2, std::string separator) {
    std::string result = absl::StrJoin({s1, s2}, separator);
    return result;
}