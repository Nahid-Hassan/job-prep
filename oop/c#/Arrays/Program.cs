namespace Arrays
{   
    class Program {
        static void Main(String[] args) {
            int[] numbers = {1,2,3,4,5};
            Console.WriteLine(numbers[0]);
            numbers[1] = 20;
            Console.WriteLine(numbers[1]);
        
            // if you don't know the array size
            string[] friends = new string[3];
            friends[0] = "Md. Nahid Hassan"; 
            friends[1] = "Mehedi Hasan Mahin"; 
            friends[2] = "Bepul Hosen";
            
            Console.WriteLine(friends[1]); 
        }   
    }
}