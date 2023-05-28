class Animal {
    public void makeSound() {
        System.out.println("Animal makes a sound.");
    }
}

class Cat extends Animal {
    @Override
    public void makeSound() {
        System.out.println("Cat meows.");
    }
}

class Dog extends Animal {
    @Override
    public void makeSound() {
        System.out.println("Dog barks.");
    }
}

public class RuntimePolymorphism {
    public static void main(String[] args) {
        Animal animal1 = new Cat();
        Animal animal2 = new Dog();
        
        animal1.makeSound(); // Output: Cat meows.
        animal2.makeSound(); // Output: Dog barks.
    }
}
