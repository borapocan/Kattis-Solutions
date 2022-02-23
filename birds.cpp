#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int l, d, n, pos, dis = 6, count = 0, curr = 6;

    vector<int> v;

    vector<int> v2;

    cin >> l >> d >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> pos;

        v.push_back(pos);
    }

    sort(v.begin(), v.end());

    if (n == 0)
    {
        count += (l - 12) / d + 1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            while (v[i] - curr >= d)
            {
                curr += d;

                count++;
            }

            curr = v[i] + d;

        }
        while (curr <= l - 6)
        {
            count++;

            curr += d;
        }

    }

    cout << count << endl;
    
}
