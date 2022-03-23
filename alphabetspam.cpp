#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

    double whiteSpaces = 0.0, lowercaseLetters = 0.0, uppercaseLetters = 0.0, symbols = 0.0;

    string str; cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 95)
        {
            whiteSpaces++;
        }
        else if (str[i] >= 65 && str[i] <= 90)
        {
            uppercaseLetters++;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            lowercaseLetters++;
        }
        else
        {
            symbols++;
        }

    }

    cout << fixed << setprecision(16) << whiteSpaces / (double)str.size() << endl;
    cout << fixed << setprecision(16) << lowercaseLetters / (double)str.size() << endl;
    cout << fixed << setprecision(16) << uppercaseLetters / (double)str.size() << endl;
    cout << fixed << setprecision(16) << symbols / (double)str.size() << endl;

    return 0;
}
