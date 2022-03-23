#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, k, rating, min = -3, max = 3;

    cin >> n >> k;

    vector<int> ratings;

    for (int i = 0; i < k; i++)
    {

        cin >> rating;

        if (rating >= min && rating <= max)
        {

            ratings.push_back(rating);

        }

    }

    float sum = 0.0;

    for (int i = 0; i < ratings.size(); i++)
    {

        sum += ratings[i];

    }

    if (ratings.size() < n)
    {

        auto resMin = float((sum + ((n - k) * min)) / n);

        auto resMax = float((sum + ((n - k) * max)) / n);

        cout << resMin << " " << resMax;
    }
    else
    {

        cout << float((sum + ((n - k) * min)) / n) << " " << float((sum + ((n - k) * max)) / n);

    }



    return 0;
}
