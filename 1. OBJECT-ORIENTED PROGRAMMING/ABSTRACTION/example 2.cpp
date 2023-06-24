// Example 2: Abstract Base Class with Common Interface

#include <iostream>
using namespace std;

// Abstract base class
class Vehicle {
public:
    virtual void start() = 0;  // Pure virtual function
    virtual void stop() = 0;   // Pure virtual function
};

// Concrete derived class
class Car : public Vehicle {
public:
    void start() override {
        cout << "Car started." << endl;
    }

    void stop() override {
        cout << "Car stopped." << endl;
    }
};

// Concrete derived class
class Bike : public Vehicle {
public:
    void start() override {
        cout << "Bike started." << endl;
    }

    void stop() override {
        cout << "Bike stopped." << endl;
    }
};

int main() {
    Car car;
    Bike bike;

    car.start();   // Calls the start() function of Car class
    car.stop();    // Calls the stop() function of Car class

    bike.start();  // Calls the start() function of Bike class
    bike.stop();   // Calls the stop() function of Bike class

    return 0;
}

