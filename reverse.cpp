using System;
using System.Collections.Generic;

namespace project


{

    class Program
    {
        static void Main()
        {
            List<int> numbers = new List<int>() { 5, 12, -3, 4, 8, 51, 16 };

            numbers.Reverse();

            foreach (int el in numbers)
            {

                Console.WriteLine("Element: " + el);

            }


        }

    }
}