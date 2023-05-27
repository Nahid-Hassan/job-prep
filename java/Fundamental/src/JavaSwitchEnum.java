public class JavaSwitchEnum {
    public enum Day {Sat, Sun, Mon, Tue, Wed, Thu, Fri};
    public static void main(String[] args) {
        Day[] dayNow = Day.values();

        for (Day now : dayNow) {
            switch(now) {
                case Sun:
                    System.out.println("Sunday");
                    break;
                case Mon:
                    System.out.println("Monday");
                    break;
                default:
                    System.out.println("Others");
            }
        }
    }
}
