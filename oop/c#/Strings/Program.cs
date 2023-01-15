namespace Strings {
    class Program {
        static void Main(string[] args) {
            string phrase = "Nahid Hassan";
            Console.WriteLine(phrase);                    
            Console.WriteLine(phrase.Length);            // return string length or size   
            Console.WriteLine(phrase.ToUpper());         // convert to uppercase
            Console.WriteLine(phrase.ToLower());         // convert to lowercase   

            Console.WriteLine(phrase.Contains("H"));     // boolean 
            Console.WriteLine(phrase[0]);                // indexing
            Console.WriteLine(phrase.IndexOf("Hassan")); // pos, or -1
            Console.WriteLine(phrase.Substring(2, 4));   // start, length of substring
            Console.WriteLine(phrase.Substring(2));      // pos to end
        }
    }
}