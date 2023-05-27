public class Variable {
    public static void main(String[] args) {
        float a = 19.4f;
        // int b = a; // compile time error!!
        int b = (int)a;

        System.out.println(b);

        byte ba, bb, bc;
        ba = 10;
        bb = 20;

        // bc = ba + bb;  // ba + bb produce integer
        bc = (byte) (ba + bb);
        System.out.println(bc);
    }
}
