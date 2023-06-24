#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void makeSound() {
        cout << "The animal makes a sound." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "The dog barks." << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "The cat meows." << endl;
    }
};

int main() {
    Animal* animalPtr;

    Dog dog;
    Cat cat;

    animalPtr = &dog;
    animalPtr->makeSound();  // Calls the derived class function (dog barks)

    animalPtr = &cat;
    animalPtr->makeSound();  // Calls the derived class function (cat meows)

    return 0;
}
