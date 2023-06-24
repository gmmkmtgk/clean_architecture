#include <iostream>
using namespace std;

// Parent class
class Shape {
public:
    void display() {
        cout << "This is a shape." << endl;
    }
};

// Child class 1 inheriting from the parent class
class Circle : public Shape {
public:
    void displayCircle() {
        cout << "This is a circle." << endl;
    }
};

// Child class 2 inheriting from the parent class
class Square : public Shape {
public:
    void displaySquare() {
        cout << "This is a square." << endl;
    }
};

// Main function to test the inheritance
int main() {
    Circle circle;
    Square square;

    circle.display();       // Inherited from the Shape class
    circle.displayCircle(); // Defined in the Circle class

    square.display();       // Inherited from the Shape class
    square.displaySquare(); // Defined in the Square class

    return 0;
}
