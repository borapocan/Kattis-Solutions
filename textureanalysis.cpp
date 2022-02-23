#include <iostream>
#include <string>
#include <vector>

using namespace std;

int isEven(string str)
{
    bool isFound = false;

    int count = 0;

    for (int i = 0; i < str.size() && !isFound; i++)
    {
        for (int j = 0; j < str.size() && !isFound; j++)
        {
            if (str[i] == '*' && str[j] == '*' && i != j)
            {

                count = (j - i);

                isFound = true;
            }
        }
    }

    return count;

}

int main() {

    string str; vector<int> v; int times = 1;

    while (cin >> str)
    {
        bool isSame = true;

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '*')
            {
                v.push_back(i);
            }
        }

        //cout << isEven(str) << endl;

        string ans = "EVEN";

        for (int i = 0; i < v.size() && isSame; i++)
        {
            for (int j = i+1; j < v.size() && isSame; j++)
            {
                if (j == i+1)

                    if (v[j] - v[i] != isEven(str))
                    {
                        ans = "NOT EVEN";

                        isSame = false;
                    }

            }
        }

        if (str == "END")
        {
            break;
        }

        cout << times << " " << ans << endl;

        times++;

        v.clear();

    }

    return 0;
}

/*

*.*.*.*.*.*.*.*.*
*..*.*.*.*.*.*.*.*
*..*..*
*
***
*.**

 */
