package Polymorphism;

class A {
    A() {
        System.out.println("Class A");
    }

    {
        System.out.println("Instance Initializer class A - 1");
    }

    {
        System.out.println("Instance Initializer class A - 2");
    }
}


class B extends A {
    B() {
        System.out.println("Class B");
    }

    {
        System.out.println("Instance Initializer class B - 1");
    }

    {
        System.out.println("Instance Initializer class B - 2");
    }
}

public class InstanceInitializerBlock {
    public static void main(String[] args) {
        B b = new B();
    }
}
