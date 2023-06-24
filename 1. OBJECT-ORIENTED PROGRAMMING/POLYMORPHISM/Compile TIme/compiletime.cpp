#include <iostream>
using namespace std;

// Function to calculate the sum of two integers
int sum(int a, int b) {
    return a + b;
}

// Function to calculate the sum of three integers
int sum(int a, int b, int c) {
    return a + b + c;
}

// Function to calculate the sum of two floating-point numbers
float sum(float a, float b) {
    return a + b;
}

int main() {
    int result1 = sum(2, 3);                  // Calls sum(int, int)
    int result2 = sum(2, 3, 4);               // Calls sum(int, int, int)
    float result3 = sum(2.5f, 3.7f);          // Calls sum(float, float)

    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;
    cout << "Result 3: " << result3 << endl;

    return 0;
}
