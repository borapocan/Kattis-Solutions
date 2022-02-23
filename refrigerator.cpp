#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int pA, pB, kA, kB, n;

    cin >> pA >> kA >> pB >> kB >> n;

    int total = 0;

    double paunit = pA/double(kA);

    double pbunit = pB/double(kB);

    bool flag = false;

    if (paunit > pbunit)
    {
        swap(pA, pB);

        swap(kA, kB);

        flag = true;
    }

    int curA = ceil((double)n/kA);

    int finA = curA, finB = 0;

    int curCost = curA * pA;

    int cost = curCost;

    int curFridge = curA * kA;

    while (curFridge > 0)
    {
        curFridge -= kA;

        cost -= pA;

        curA--;

        int m = ceil((double)(n - curFridge)/kB);

        if (cost + m * pB < curCost)
        {
            curCost = cost + m * pB;

            finA = curA, finB = m;
        }
    }


    if (flag)
    {
        swap(finA, finB);
    }

    cout << finA << " " << finB << " " << curCost << endl;

}
