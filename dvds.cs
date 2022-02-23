using System;
using System.Collections;

namespace DVDs
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = Convert.ToInt32(Console.ReadLine());

            for (int i = 0; i < n; i++)
            {
                int k = Convert.ToInt32(Console.ReadLine());

                int[] kInput = Array.ConvertAll(Console.ReadLine().Split(' '), a => Convert.ToInt32(a));

                int count = 0;

                int pos = 1;

                foreach (int j in kInput)
                {
                    if (pos != j)
                    {
                        count++;
                    }
                    else
                    {
                        pos++;
                    }
                }
                Console.WriteLine(count);
            }
        }
    }
}
