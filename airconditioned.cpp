#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int,int>l, pair<int,int> r)
{
    if (l.second == r.second)
    {
        return r.first > l.first;
    }

    return l.second < r.second;
}

int main() {

    int n, l, u, count = 1;

    cin >> n;

    vector<pair<int,int>> v;

    for (int i = 0; i < n; i++)
    {

        cin >> l >> u;

        v.push_back(pair<int,int>(l,u));

    }

    sort(v.begin(), v.end(), compare);

    int temp = v[0].second;

    for (int i = 1; i < n; i++)
    {

        if (v[i].first > temp)
        {

            temp = v[i].second;

            count++;

        }


    }

    cout << count << endl;


    return 0;
}
