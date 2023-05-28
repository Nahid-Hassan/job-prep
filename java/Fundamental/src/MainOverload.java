public class MainOverload {
    public static void main(String[] args) {
        System.out.println("Standard main method");
    }

    public static void main(String arg1) {
        System.out.println("Overloaded main method with one argument: " + arg1);
    }

    public static void main(String arg1, String arg2) {
        System.out.println("Overloaded main method with two arguments: " + arg1 + ", " + arg2);
    }
}
