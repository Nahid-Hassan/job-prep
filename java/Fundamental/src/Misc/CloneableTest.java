package Misc;

class Student implements Cloneable {
    int roll;
    String name;

    Student(int roll, String name) {
        this.roll = roll;
        this.name = name;
    }

    public Object clone() throws CloneNotSupportedException {
        return super.clone();
    }
}
public class CloneableTest {
    public static void main(String[] args) {
        try {
            Student student1 = new Student(1, "Nahid");
            Student student2 = (Student) student1.clone();
        } catch (ClassNotFoundException c) {}

    }
}
