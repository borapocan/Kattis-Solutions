using System;

namespace Mastermind
{
    class Mastermind
    {
        static void Main(string[] args)
        {

            string s = Console.ReadLine();

            string[] ss = s.Split(' ');

            int length = int.Parse(ss[0]);

            string code = ss[1];

            string guess = ss[2];

            int correct = 0;

            int charmatch = 0;

            int[,] alphabet = new int[2, 'Z' - 'A' + 1];

            for (int i = 0; i < length; i++)
            {
                if (code[i] == guess[i])
                {
                    correct++;
                }

                alphabet[0, code[i] - 'A']++;

                alphabet[1, guess[i] - 'A']++;
            }
            for (int i = 0; i < alphabet.GetLength(1); i++)
            {

                charmatch += alphabet[0, i] > alphabet[1, i] ? alphabet[1, i] : alphabet[0, i];

            }

            charmatch -= correct;

            Console.WriteLine(correct + " " + charmatch);

        }
    }
}
