#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int n; cin >> n;

    stack<int> s; vector<int> num;

    for (int i = 0; i < n; i++)
    {
        int element; cin >> element;

        num.push_back(element);
    }

    for (int i = 0; i < n; i++)
    {
        if (!s.empty() && num[i] % 2 == s.top() % 2)
        {
            s.pop();
        }
        else
        {
            s.push(num[i]);
        }
    }

    cout << s.size() << endl;

    return 0;
}
