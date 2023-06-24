// Function overloading based solely on the return type is not allowed in C++. 
// Function overloading is determined by the function name, number of arguments, and their types. 
// The return type alone cannot differentiate overloaded functions.

// Here's an example to illustrate why overloading based solely on the return type is not allowed:

#include <iostream>
using namespace std;

// Error: Functions cannot be overloaded based on return type
int add(int a, int b) {
    return a + b;
}

float add(int a, int b) {
    return static_cast<float>(a + b);
}

int main() {
    int sum1 = add(2, 3);
    float sum2 = add(1, 4);

    cout << "Sum1: " << sum1 << endl;
    cout << "Sum2: " << sum2 << endl;

    return 0;
}

