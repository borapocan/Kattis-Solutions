#include <iostream>
using namespace std;

int main() {

    int n, l, sum = 0, count = -1;

    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cin >> l;

        sum += l;

        count++;

    }

    cout << sum - count << endl;

    return 0;
}
