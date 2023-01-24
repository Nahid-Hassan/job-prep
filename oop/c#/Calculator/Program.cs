namespace Calculator
{
    class Program {
        static void Main(string[] args) {
            Console.Write("Enter a number: ");
            int a = Convert.ToInt32(Console.ReadLine());

            Console.Write("Enter a number: ");
            int b = Convert.ToInt32(Console.ReadLine());
        
            int sum = a + b;
            Console.WriteLine(sum);
        }
    }
}