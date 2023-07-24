#include <iostream>
#include "math_hw.h"

using namespace std;

int main() {
    cout << "Hello World!" << endl;
    
    math_hw_ns::real_numbers calculator;
    cout << "Print sum of 1 + 1: "
        << calculator.add_numbers(1,1)
        << endl;

    return 0;
}
