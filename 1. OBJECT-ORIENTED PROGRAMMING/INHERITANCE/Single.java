// Parent class
class Animal {
    void eat() {
        System.out.println("The animal is eating.");
    }
}

// Child class inheriting from the parent class
class Dog extends Animal {
    void bark() {
        System.out.println("The dog is barking.");
    }
}

// Main class to test the inheritance
public class Single {
    public static void main(String[] args) {
        // Creating an instance of the child class
        Dog dog = new Dog();

        // Calling methods from the parent and child class
        dog.eat();  // Inherited from the Animal class
        dog.bark(); // Defined in the Dog class
    }
}
