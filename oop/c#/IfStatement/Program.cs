namespace IfStatement {
    class Program {
        static void Main(string[] args) {
            int monthNumber = 1;

            if (monthNumber == 1) {
                Console.WriteLine("January");
            } else if (monthNumber == 2) {
                Console.WriteLine("February");
            } else if (monthNumber == 3) {
                Console.WriteLine("March");
            } else {
                SayHi("Nahid");
            }

            Console.WriteLine(GetMax(10, 20));
            Console.WriteLine(GetDayName(2)); // 1 - Saturday 7 - Friday
        }

        static void SayHi(string name) {
                Console.WriteLine("Hey " + name);
        }

        static string GetDayName(int dayNum) {
            string dayName;

            switch(dayNum) {
                case 1:
                    dayName = "Saturday";
                    break;
                case 2:
                    dayName = "Sunday";
                    break;
                case 3:
                    dayName = "Monday";
                    break;
                case 4:
                    dayName = "Tuesday";
                    break;
                case 5:
                    dayName = "Wednesday";
                    break;
                case 6:
                    dayName = "Thursday";
                    break;
                case 7:
                    dayName = "Friday";
                    break;
                default:
                    dayName = "Invalid Day Number";
                    break;                
            }

            return dayName;
        }

        static int GetMax(int a, int b) {
            int res = 0;
            if (a > b) res = a;
            else res = b;

            return res;
        }
    }
}