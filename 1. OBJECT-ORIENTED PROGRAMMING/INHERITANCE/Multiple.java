// First interface
interface Flyable {
    void fly();
}

// Second interface
interface Swimmable {
    void swim();
}

// Class implementing multiple interfaces
class Duck implements Flyable, Swimmable {
    @Override
    public void fly() {
        System.out.println("The duck is flying.");
    }

    @Override
    public void swim() {
        System.out.println("The duck is swimming.");
    }
}

// Main class to test the multiple inheritance
public class Multiple {
    public static void main(String[] args) {
        // Creating an instance of the Duck class
        Duck duck = new Duck();

        // Calling methods from the interfaces
        duck.fly();
        duck.swim();
    }
}
