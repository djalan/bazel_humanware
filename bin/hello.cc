#include "LibMath/math.hpp"
#include "LibString/string.hpp"

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Hello World!" << endl;
    
    cout << "Print sum of 1 + 1: "
        << add_numbers(1,1)
        << endl;
    
    string fruit("apple");
    cout << "Print '" << fruit << "' in uppercase: "
        << to_uppercase(fruit)
        << endl;

    return EXIT_SUCCESS;
}
