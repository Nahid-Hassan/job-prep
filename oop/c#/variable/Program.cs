namespace Variable {
    class Program {
        static void Main(string[] args) {
            string characterName = "Tom";
            int characterAge;
            characterAge = 35;

            Console.WriteLine("There once was a man named " + characterName);
            Console.WriteLine("He was " + characterAge + " years old.");

            characterName = "Jerry";
            characterAge = 25;

            Console.WriteLine("There once was a women named " + characterName);
            Console.WriteLine("She was " + characterAge + " years old.");
        }
    }
}