#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);

    int n; cin >> n;

    unordered_set <string> log;

    vector<string> v;

    while (n--)
    {

        string command, name;

        cin >> command >> name;

        if (command == "entry")
        {

            if (log.find(name) == log.end())
            {

                cout << name << " entered" << endl;

                log.insert(name);

            }
            else
            {

                cout << name << " entered (ANOMALY)" << endl;

            }

        }
        else
        {

            if (log.find(name) != log.end())
            {

                cout << name << " exited" << endl;

                log.erase(name);

            }
            else
            {

                cout << name << " exited (ANOMALY)" << endl;

            }

        }

    }

}
