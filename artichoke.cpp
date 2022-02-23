#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{

    double price, max = -1, min = -1, output = 0.0;

    cin >> price;

    int size = 4;

    vector<double> v(size), stocks;

    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    int n;

    cin >> n;

    double res;

    for (int i = 1; i <= n; i++)
    {

        res = price * (sin(v[0] * i + v[1]) + cos(v[2] * i + v[3]) + 2);

        if (res > max)
        {

            max = res;

            min = res;

        }
        if (res < min || min == -1)
        {

            min = res;

        }
        if(max - min > output)
        {

            output = max - min;

        }

    }

    cout << setprecision(12) << output << endl;

    return 0;
}
