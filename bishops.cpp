#include <iostream>
using namespace std;

int main() {

    int n;

    while (cin >> n)
    {
        if (n == 0)
        {
            cout << 0 << endl;
        }
        else if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 * (n - 1) << endl;
        }
    }

    return 0;
}
