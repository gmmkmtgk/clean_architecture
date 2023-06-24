// Example 3: Abstract Base Class with Data Members and Pure Virtual Functions

#include <iostream>
using namespace std;

// Abstract base class
class Shape {
protected:
    int width;
    int height;

public:
    Shape(int w, int h) : width(w), height(h) {}

    virtual void calculateArea() = 0; // Pure virtual function
};

// Concrete derived class
class Rectangle : public Shape {
public:
    Rectangle(int w, int h) : Shape(w, h) {}

    void calculateArea() override {
        int area = width * height;
        cout << "Rectangle Area: " << area << endl;
    }
};

// Concrete derived class
class Triangle : public Shape {
public:
    Triangle(int w, int h) : Shape(w, h) {}

    void calculateArea() override {
        int area = (width * height) / 2;
        cout << "Triangle Area: " << area << endl;
    }
};

int main() {
    Rectangle rectangle(4, 6);
    Triangle triangle(3, 8);

    rectangle.calculateArea();  // Calls the calculateArea() function of Rectangle class
    triangle.calculateArea();   // Calls the calculateArea() function of Triangle class

    return 0;
}
