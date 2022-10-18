using System;
using System.Collections.Generic;
using System.Linq;

namespace project


{

    class Program
    {

        public static int Factorial(int x)
        {
            int z = 1;
            for (int i = 2; i <= x; i++)
            {
                z *= i;

                if (x == 0 || x == 1)
                {
                    return 1;
                }
                
            }

            return z;
        }

            static void Main()
        {
            int a, factor;

            Console.Write("Number: ");
            a = int.Parse(Console.ReadLine());

                factor = Factorial(a);

            Console.WriteLine($"{a}! = {factor}");

        }
        
    }

}