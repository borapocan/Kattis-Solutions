#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{

    int p; cin >> p;

    while (p--)
    {

        int k, n;

        cin >> k >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

        }

        vector<int> copy = v;

        sort(copy.begin(), copy.end());

        int index = 0;

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == copy[index])
            {
                index++;
            }
        }

        cout << k << " " << v.size() - index << endl;

    }

}
