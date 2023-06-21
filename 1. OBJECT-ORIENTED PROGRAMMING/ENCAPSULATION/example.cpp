#include <iostream>

class Circle {
private:
    double radius;

public:
    void setRadius(double r) {
        if (r > 0) {
            radius = r;
        }
    }

    double getRadius() const {
        return radius;
    }

    double calculateArea() const {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Circle circle;
    circle.setRadius(5.0);
    
    std::cout << "Radius: " << circle.getRadius() << std::endl;
    std::cout << "Area: " << circle.calculateArea() << std::endl;
    
    return 0;
}
