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
    // Override the display() function in Derived class
    void display() {
        cout << "Display function in Derived" << endl;
    }
};

int main() {
    Derived derived;
    derived.Base1::display();  // Access display() from Base1
    derived.Base2::display();  // Access display() from Base2
    derived.display();         // Access display() in Derived class
    return 0;
}
