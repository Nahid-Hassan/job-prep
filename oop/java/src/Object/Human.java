package Object;

class Human {
    // instance variables
    String name;
    int age;
    double height;

    // constructor: has no return types and class name and construct has same name
    Human() {
        System.out.println("Constructor...");
        name = "Not Given";
        age = 0;
    }
    void eat() {
        System.out.println("Eating...");
    }

    void sleep() {
        System.out.println("Sleeping...");
    }

    void walk() {
        System.out.println("Walking...");
    }
}