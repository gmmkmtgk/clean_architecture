// Example 1: Abstract Base Class with Pure Virtual Function

#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

// Concrete derived class
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

int main() {
    Circle circle;
    circle.draw();  // Calls the draw() function of Circle class

    return 0;
}
