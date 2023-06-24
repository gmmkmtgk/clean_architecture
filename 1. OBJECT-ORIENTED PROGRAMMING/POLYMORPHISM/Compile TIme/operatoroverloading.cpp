#include <iostream>
using namespace std;

class Vector {
private:
    int x;
    int y;

public:
    Vector(int xVal = 0, int yVal = 0) : x(xVal), y(yVal) {}

    Vector operator+(const Vector& other) const {
        Vector result;
        result.x = this->x + other.x;
        result.y = this->y + other.y;
        return result;
    }

    Vector operator-(const Vector& other) const {
        Vector result;
        result.x = this->x - other.x;
        result.y = this->y - other.y;
        return result;
    }

    void display() const {
        cout << "Vector: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector v1(2, 3);
    Vector v2(4, 5);

    Vector sum = v1 + v2;
    Vector difference = v1 - v2;

    v1.display();           // Output: Vector: (2, 3)
    v2.display();           // Output: Vector: (4, 5)
    sum.display();          // Output: Vector: (6, 8)
    difference.display();   // Output: Vector: (-2, -2)

    return 0;
}
