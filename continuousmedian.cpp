#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int median(vector<int> v)
{
    sort(v.begin(), v.end());

    return v.size() % 2 == 0 ? (v[v.size() / 2 - 1] + v[v.size() / 2]) / 2 : v[v.size() / 2];
}

int main() {

    int t;

    cin >> t;

    for (; t > 0; t--)
    {
        int n, element, sum = 0;

        cin >> n;

        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            cin >> element;

            v.push_back(element);

            sort(v.begin(), v.end());

            sum += median(v);
        }

        cout << sum << endl;

    }

    return 0;

}
