#include "string.hpp"
#include <algorithm>

string to_uppercase(string s1) {
    transform( s1.begin(), s1.end(), s1.begin(), ::toupper);
    return s1;
}
