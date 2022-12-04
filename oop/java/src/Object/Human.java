package Object;

class Human {
    // instance variables
    String name;
    int age;
    double height;

    // constructor: has no return types and class name and construct has same name
    // Constructor overloading .......
    Human() {
        System.out.println("Constructor...");
        name = "Not Given";
        age = 0;
    }

    Human(int ag) {
        age = ag;
    }

    Human(String str, int num) {
        name = str;
        age = num;
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