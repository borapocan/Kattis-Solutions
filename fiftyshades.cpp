#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int n, counter = 0; cin >> n;

    for (int i = 0; i < n; i++)
    {
        string input; cin >> input;

        std::transform(input.begin(), input.end(), input.begin(), [](unsigned char c){ return std::tolower(c); });

        if (input.find("pink") != string::npos || input.find("rose") != string::npos)
        {
            counter++;
        }
    }

    (counter > 0) ? cout << counter << endl : cout << "I must watch Star Wars with my daughter" << endl;
}
