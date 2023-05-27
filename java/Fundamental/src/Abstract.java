abstract class Animal {
    String name;

    abstract void sound();

    void sleep() {
        System.out.println("Zzzz...");
    }
}

class Dog extends Animal {
    void sound() {
        System.out.println("Woof!");
    }
}

public class Abstract {
    public static void main(String[] args) {
        // in java we cannot create abstract class object.
        Dog dog = new Dog();
        dog.sound();
        dog.sleep();
    }
}
