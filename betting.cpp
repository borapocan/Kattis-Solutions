#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int p; cin >> p;

    cout << fixed << setprecision(10) << 1 + (1.0 * (((100.0 - p) / 100.0) / (p / 100.0))) << endl;

    cout << fixed << setprecision(10) << 1 + ((1.0 * (p / 100.0) / ((100.0 - p) / 100.0))) << endl;

    return 0;
    
}
