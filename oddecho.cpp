#include <iostream>
#include <vector>
using namespace std;


int main() {

    int n;

    cin >> n;

    vector<string> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i+=2)
    {
        cout << v[i] << endl;
    }

    return 0;
}
