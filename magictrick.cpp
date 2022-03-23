#include <iostream>
#include <algorithm>
using namespace std;

bool containsDuplicate(char n[], int m)
{
    int f = 0;
    
    sort(n, n + m);

    for (int i = 0; i < m - 1; i++)
    {
    
        if (n[i] == n[i + 1])
        {
            f = 1;
            
            break;
        }
        
    }

    if (f == 1)
    
        return true;
    else
    
        return false;
}

int main() {

    string str;

    cin >> str;

    char c[str.length()];

    for (int i = 0; i < str.length(); i++)
    {

        c[i] = str[i];

    }

    if (containsDuplicate(c, str.length()))
    {

        cout << "0" << endl;

    }
    else
    {

        cout << "1" << endl;

    }

    return 0;
}
