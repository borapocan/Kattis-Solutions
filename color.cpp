#include <iostream>
#include <vector>
#include <algorithm>

#define all(x) (x).begin(), (x).end()

using namespace std;

int main()
{
    int n, c, k, total = 1, machines = 1;
    
    cin >> n >> c >> k;

    vector<int>socks(n);

    for (int i = 0; i < n; i++)
    {

        cin >> socks[i];

    }

    sort(all(socks));

    int lowest = socks[0];

    for (int i = 1; i < n; i++)
    {

        if (total == c)
        {

            machines++;

            total = 0;

            lowest = socks[i];

        }

        if (socks[i] - lowest > k)
        {

            machines++;

            total = 0;

            lowest = socks[i];

        }

        total++;
    }

    cout << machines << endl;

}
