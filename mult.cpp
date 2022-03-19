#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n; cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int temp = v[0];

    for (int i = 1; i < n; i++)
    {
        int j = i;

        if (v[j] % temp == 0)
        {
            cout << v[j] << endl;

            temp = v[j+1];

            i = j + 1;
        }

    }

    return 0;
}
