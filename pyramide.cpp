using System;

namespace project
{

    class Program
    {
        static void Main()
        {

            Console.WriteLine("Lines: ");
            short n = short.Parse(Console.ReadLine());
            string s = "*";
            for (int i = 1; i <= n; i++)
            {
                
                Console.WriteLine(s);
                s += "*";
            }



            
        }

    }
}