namespace ForLoop
{
    class Program {
        static void Main(string[] args) {
            int[] numbers = {1,2,3,4,5};

            for (int i = 0; i < numbers.Length; i++) {
                Console.WriteLine(numbers[i]);
            }
        }
    }
}