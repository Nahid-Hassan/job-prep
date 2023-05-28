package Inheritance;

class Employee {
    int salary = 10;
}

public class TI extends Employee{
    int bonus = 5;
    public static void main(String[] args) {
        TI t = new TI();
        System.out.println(t.bonus);
        System.out.println(t.salary);
    }
}
