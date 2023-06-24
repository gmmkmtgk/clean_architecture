#include <iostream>
using namespace std;

// First base class
class Base1 {
public:
    void display() {
        cout << "Display function in Base1" << endl;
    }
};

// Second base class
class Base2 {
public:
    void display() {
        cout << "Display function in Base2" << endl;
    }
};

// Derived class inheriting from Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    // This function will cause ambiguity due to naming conflict
    void display() {
        cout << "Display function in Derived" << endl;
    }
};

int main() {
    Derived derived;
    derived.display(); // Error: ambiguity in function call
    return 0;
}
