#include <iostream>

// First parent class
class Animal {
public:
    void eat() {
        std::cout << "The animal is eating." << std::endl;
    }
};

// Second parent class
class Mammal {
public:
    void feedMilk() {
        std::cout << "The mammal is feeding milk." << std::endl;
    }
};

// Child class inheriting from multiple parent classes
class Dog : public Animal, public Mammal {
public:
    void bark() {
        std::cout << "The dog is barking." << std::endl;
    }
};

// Main function to test the inheritance
int main() {
    // Creating an instance of the child class
    Dog dog;

    // Calling methods from the parent and child classes
    dog.eat();       // Inherited from the Animal class
    dog.feedMilk();  // Inherited from the Mammal class
    dog.bark();      // Defined in the Dog class

    return 0;
}
