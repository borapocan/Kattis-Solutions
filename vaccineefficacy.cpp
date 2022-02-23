#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

/*
10
NYNY
NNYY
NYYY
NYYN
NNNY
YYNN
YYYN
YYNY
YYNN
YYNY
*/

int sgn(const double &x) {
    static const double EPS = 1e-7;
    if (x > EPS) return 1;
    if (x > -EPS) return 0;
    return -1;
}

double f(const double &a, const double &b) {
    return (b-a)/b*100.0;
}

int main()
{
    int n; cin >> n;

    float aV = 0, bV = 0, cV = 0, aN = 0, bN = 0, cN = 0, vaccinated = 0, unvaccinated = 0;

    while (n--)
    {
        vector<char> v(4);

        for (int  i = 0;  i < v.size(); ++ i)
        {
            cin >> v[i];
        }

        if (v[0] == 'N')
        {
            unvaccinated++;

            if (v[1] == 'Y')
            {
                aN++;
            }
            if (v[2] == 'Y')
            {
                bN++;
            }
            if (v[3] == 'Y')
            {
                cN++;
            }
        }
        else if (v[0] == 'Y')
        {
            vaccinated++;

            {
                if (v[1] == 'Y')
                {
                    aV++;
                }
                if (v[2] == 'Y')
                {
                    bV++;
                }
                if (v[3] == 'Y')
                {
                    cV++;
                }
            }
        }
    }

    {
        double vac_a = aV*1.0/vaccinated; double vac_b = bV*1.0/vaccinated; double vac_c = cV*1.0/vaccinated;
        double unvac_a = aN*1.0/unvaccinated; double unvac_b = bN*1.0/unvaccinated; double unvac_c = cN*1.0/unvaccinated;
        
        if (sgn(vac_a - unvac_a) >= 0)
        {
            cout << "Not Effective" << '\n';
        } else {
            cout << fixed << setprecision(6) << f(vac_a, unvac_a) << '\n';
        }
        if (sgn(vac_b - unvac_b) >= 0)
        {
            cout << "Not Effective" << '\n';
        } else {
            cout << fixed << setprecision(6) << f(vac_b, unvac_b) << '\n';
        }
        if (sgn(vac_c - unvac_c) >= 0)
        {
            cout << "Not Effective" << '\n';
        } else {
            cout << fixed << setprecision(6) << f(vac_c, unvac_c) << '\n';
        }

    }



    return 0;

}
