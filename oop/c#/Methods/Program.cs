namespace Methods
{
    class Program {
        static void Main(String[] args) {
            SayHi("Nahid");
            SayHi("Hassan");
            SayHi("Mony");

            int cube = Cube(3);
            Console.WriteLine(cube);
        }

        // return type void
        static void SayHi(string name) {
            Console.WriteLine("Hello " + name);
        }

        static int Cube(int num) {
            int result = num * num * num;
            return result;
        }
    }
}