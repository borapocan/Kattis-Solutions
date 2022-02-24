#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, vol = 7;

    cin >> n;

    while (n--)
    {
        string a, b;

        cin >> a >> b;

        if (b[0] == 'o' && vol < 10)
        {
            vol++;
        }
        else if (b[0] == 'n' && vol > 0)
        {
            vol--;

        }
    }

    cout << vol << endl;

    return 0;
}
