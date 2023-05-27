strictfp class Calculation {
    strictfp double performCalculation(double a, double b) {
        return a + b;
    }
}

public class Strictfp {
    public static void main(String[] args) {
        Calculation calc = new Calculation();
        double result = calc.performCalculation(0.1, 0.2);
        System.out.println(result); // 3.0000000000000004
    }
}
