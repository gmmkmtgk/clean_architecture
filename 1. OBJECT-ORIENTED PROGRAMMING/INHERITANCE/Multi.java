// Grandparent class
class Animal {
    void eat() {
        System.out.println("The animal is eating.");
    }
}

// Parent class inheriting from the grandparent class
class Dog extends Animal {
    void bark() {
        System.out.println("The dog is barking.");
    }
}

// Child class inheriting from the parent class
class Labrador extends Dog {
    void run() {
        System.out.println("The Labrador is running.");
    }
}

// Main class to test the inheritance
public class Multi {
    public static void main(String[] args) {
        // Creating an instance of the child class
        Labrador labrador = new Labrador();

        // Calling methods from the grandparent, parent, and child class
        labrador.eat();  // Inherited from the Animal class
        labrador.bark(); // Inherited from the Dog class
        labrador.run();  // Defined in the Labrador class
    }
}
