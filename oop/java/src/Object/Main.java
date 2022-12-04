package Object;

public class Main {
    public static void main(String args[]) {
        // Class object = new Class() // for memory allocation
        Human nahid = new Human();  // nahid is the Human class reference object
        nahid.name = "Md. Nahid Hassan";
        nahid.age = 24;
        nahid.height = 5.4;
//        nahid.eat();
//        nahid.walk();
//        nahid.sleep();         // call object

        Human hasan;
        hasan = new Human();

        System.out.println(hasan.name);
        System.out.println(hasan.age);

        Human mony = new Human(10);
        System.out.println(mony.age);

//        hasan.name = "Hasan Shariar";
//        hasan.age = 25;
//        hasan.walk();
//
//        System.out.println(nahid.name);
    }
}
