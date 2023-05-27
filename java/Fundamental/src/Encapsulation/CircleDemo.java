package Encapsulation;  
class Circle {
    double x, y;
    double r;

    double area() {
        return 3.14156 * r * r;
    }
}

public class CircleDemo {
    public static void main(String[] args) {
        Circle c = new Circle();
        c.x = 10;
        c.y = 20;
        c.r = 4;

        System.out.println(c.area());
    }
}
