namespace WhileLoop
{
    class Program {
        static void Main(string[] args) {
            int idx = 0;

            while (idx <= 5) {
                Console.WriteLine(idx);
                idx++;
            }

            idx = 0;
            do {
                Console.WriteLine(idx);
                idx++;
            } while (idx <= 5);

            // guess game
            string name = "Nahid";
            string guess = "";
            int guessCount = 0;
            int guessLimit = 3;
            bool outOfGuesses = false;

            while (guess != name && !outOfGuesses) {
                if (guessCount < guessLimit) {
                    Console.Write("Enter your guess: ");
                    guess = Console.ReadLine();
                    guessCount++;
                } else {
                    outOfGuesses = true;
                }
            }

            if (outOfGuesses) {
                Console.WriteLine("You loss");
            } else {
                Console.WriteLine("You win!");
            }
        }
    }
}