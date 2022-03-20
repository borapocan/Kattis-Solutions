#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string str; cin >> str;

    int size = str.size(), res1 = 0, res2 = 0;

    vector<int> v1, v2;

    for (int i = 0; i < size / 2; i++)
    {
        res1 += (int)str[i] - 65;

        v1.push_back((int)str[i] - 65);
    }

    res1 %= 26;

    for (int i = 0; i < v1.size(); i++)
    {
        v1[i] += res1;

        v1[i] %= 26;
    }

    for (int i = size / 2; i < size; i++)
    {
        res2 += (int)str[i] - 65;

        v2.push_back((int)str[i] - 65);
    }

    for (int i = 0; i < v2.size(); i++)
    {
        v2[i] += res2;

        v2[i] %= 26;
    }

    for(int i = 0; i < v2.size(); i++)
    {
        v2[i] += v1[i];
        
        v2[i] %= 26;
        
        cout << char(v2[i] + 65);
    }

    return 0;
}
