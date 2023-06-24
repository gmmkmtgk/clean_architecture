//Example 5: Abstract Base Class with Pure Virtual Functions and Multiple Levels of Inheritance

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
class Bicycle : public Vehicle {
public:
    void start() override {
        cout << "Bicycle started." << endl;
    }

    void stop() override {
        cout << "Bicycle stopped." << endl;
    }
};

// Concrete derived class
class ElectricCar : public Car {
public:
    void start() override {
        cout << "Electric car started." << endl;
    }
};

int main() {
    Car car;
    Bicycle bicycle;
    ElectricCar electricCar;

    car.start();         // Calls the start() function of Car class
    car.stop();          // Calls the stop() function of Car class

    bicycle.start();     // Calls the start() function of Bicycle class
    bicycle.stop();      // Calls the stop() function of Bicycle class

    electricCar.start(); // Calls the start() function of ElectricCar class
    electricCar.stop();  // Calls the stop() function of Car class (inherited)

    return 0;
}
