// Example 4: Abstract Base Class with Pure Virtual Functions and Concrete Derived Classes with Additional Functionality
#include <iostream>
using namespace std;

// Abstract base class
class Animal {
public:
    virtual void makeSound() = 0; // Pure virtual function

    void sleep() {
        cout << "Animal is sleeping." << endl;
    }
};

// Concrete derived class
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks." << endl;
    }

    void fetchBall() {
        cout << "Dog is fetching a ball." << endl;
    }
};

// Concrete derived class
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows." << endl;
    }

    void climbTree() {
        cout << "Cat is climbing a tree." << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    dog.makeSound();   // Calls the makeSound() function of Dog class
    dog.sleep();       // Calls the sleep() function of Animal class
    dog.fetchBall();   // Calls the fetchBall() function of Dog class

    cat.makeSound();   // Calls the makeSound() function of Cat class
    cat.sleep();       // Calls the sleep() function of Animal class
    cat.climbTree();   // Calls the climbTree() function of Cat class

    return 0;
}
