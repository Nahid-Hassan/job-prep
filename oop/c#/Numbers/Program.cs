// using System;

namespace Numbers {
    class Program {
        static void Main(string[] args) {
            Console.WriteLine(3.43);
            int a = 10;
            int b = 20;

            Console.WriteLine(a + b);
            Console.WriteLine(a - b);
            Console.WriteLine(a * b);
            Console.WriteLine(a / b);
            Console.WriteLine(a % b);

            Console.WriteLine(2.1 + 2.2);
            Console.WriteLine(2.1 + 2);
            Console.WriteLine(2 + 2.2);
            Console.WriteLine(5 / 2.2);
            Console.WriteLine(5.0 / 2);
            Console.WriteLine(5.3 / 2.2);

            a++;
            Console.WriteLine(a);
            a--;
            Console.WriteLine(a);

            Console.WriteLine(Math.Abs(-40));
            Console.WriteLine(Math.Pow(3,3));
            Console.WriteLine(Math.Sqrt(36));
            Console.WriteLine(Math.Max(36, 40));
            Console.WriteLine(Math.Min(36, 23));
            Console.WriteLine(Math.Round(36.23, 1));
        }
    }
}