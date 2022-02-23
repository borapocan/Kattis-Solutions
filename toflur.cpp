#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

/*
9
1 2 3 1 1 2 2 3 3

7
4 8 7 25 95 97 6

*/

typedef long long ll;

int main()
{
    int n; cin >> n; ll sum = 0;

    vector<ll> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.rbegin(), v.rend());

    for (int i = 0; i < n - 1; i++)
    {
        sum += pow(v[i] - v[i+1], 2);
    }

    cout << sum << endl;

    return 0;
}
