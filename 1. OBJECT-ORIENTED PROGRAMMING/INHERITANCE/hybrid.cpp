#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "The animal is eating." << endl;
    }
};

// First derived class with single inheritance
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog is barking." << endl;
    }
};

// Second base class
class Bird {
public:
    void fly() {
        cout << "The bird is flying." << endl;
    }
};

// Derived class inheriting from both Dog and Bird
class FlyingDog : public Dog, public Bird {
public:
    void fetch() {
        cout << "The flying dog is fetching." << endl;
    }
};

// Main function to test the inheritance
int main() {
    FlyingDog flyingDog;
    flyingDog.eat();   // Inherited from Animal class through Dog class
    flyingDog.bark();  // Inherited from Dog class
    flyingDog.fly();   // Inherited from Bird class
    flyingDog.fetch(); // Defined in FlyingDog class
    return 0;
}
