#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int a, b;

    vector<int> v;

    cin >> a >> b;

    v.push_back(a);

    v.push_back(b);

    sort(v.begin(), v.end());

    for (auto x : v)
    {

        cout << x << " ";

    }

    return 0;
}
