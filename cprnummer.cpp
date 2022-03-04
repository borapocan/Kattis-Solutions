#include <iostream>
#include <vector>

using namespace std;

int main() {

    string input; int sum = 0; cin >> input;

    vector<int> v; vector<int> v2 = {4, 3, 2, 7, 6, 5, 4, 3, 2, 1};

    for (int i = 0; i < input.size(); i++)
    {
        if (i < 6)
        {
            v.push_back(input[i] - 48);
        }

        else if (i > 6)
        {
            v.push_back(input[i] - 48);
        }
        
    }

    for (int i = 0; i < input.size(); i++)
    {
        v[i] *= v2[i];

        sum += v[i];
    }

    (sum % 11 == 0) ? cout << 1 : cout << 0;

    return 0;
}
