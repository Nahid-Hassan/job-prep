class Test {
    int aa;
    int bb;

    Test() {
        System.out.println("Object is created!");
    }

    Test(int a, int b) {
        aa = a;
        bb = b;
    }

    void display() {
        System.out.println(aa + " " + bb);
    }
}

class TestConstructor {
    public static void main(String[] args) {
        Test t1 = new Test();
        Test t2 = new Test(10, 20);

        t2.display();
    }
}
