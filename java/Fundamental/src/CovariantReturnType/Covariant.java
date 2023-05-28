package CovariantReturnType;

class A1 {
    A1 foo() {
        return this;
    }

    void display() {
        System.out.println("Inside class A1");
    }
}

class A2 extends A1 {
    @Override
    A1 foo() {
        return this;
    }

    @Override
    void display() {
        System.out.println("Inside class A2");
    }
}

class A3 extends A2 {
    @Override
    A1 foo() {
        return this;
    }

    @Override
    void display() {
        System.out.println("Inside class A3");
    }
}

public class Covariant {
    public static void main(String[] args) {
        A1 a1 = new A1();
        a1.display();

        A2 a2 = new A2();
        a1 = a2.foo();
        a1.display();
    }
}
