namespace Input 
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter your name: ");
            string name = Console.ReadLine();
            Console.Write("Enter your age: ");
            string age = Console.ReadLine();

            Console.WriteLine("Your name is " + name + ", and your age is :" + age);
        }
    }
}
