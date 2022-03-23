#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n;

    cin >> n;

    int total = 0;

    for (int i = 0; i < n; i++)
    {
        int num;

        cin >> num;

        if (num < 0)
        {
            total -= num;
        }
    }

    cout << total;

}
