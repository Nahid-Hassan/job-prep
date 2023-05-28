package Polymorphism;

class Person {
    String name;
    int id;

    public Person(int id, String name) {
        this.id = id;
        this.name = name;
    }
}

class Emp extends Person {
    double salary;

    public Emp(int id, String name, double salary) {
        super(id, name);
        this.salary = salary;
    }

    void display() {
        System.out.println(id + " " + name + " " + salary);
    }
}

public class SuperExample {
    public static void main(String[] args) {
        Emp e = new Emp(1, "nahid", 123.3);
        e.display();
    }
}
