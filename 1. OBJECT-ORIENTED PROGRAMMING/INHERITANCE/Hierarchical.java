class Animal {
    void eat() {
        System.out.println("The animal is eating.");
    }
}

// Child class 1 inheriting from the parent class
class Dog extends Animal {
    void bark() {
        System.out.println("The dog is barking.");
    }
}

// Child class 2 inheriting from the parent class
class Cat extends Animal {
    void meow() {
        System.out.println("The cat is meowing.");
    }
}

// Hierarchical class to test the inheritance
public class Hierarchical {
    public static void main(String[] args) {
        // Creating instances of the child classes
        Dog dog = new Dog();
        Cat cat = new Cat();

        // Calling methods from the parent and child classes
        dog.eat();  // Inherited from the Animal class
        dog.bark(); // Defined in the Dog class

        cat.eat();  // Inherited from the Animal class
        cat.meow(); // Defined in the Cat class
    }
}
