#include <iostream>
#include <vector>

using namespace std;

int main() {

    int t; cin >> t;

    while (t--) {

        int nCS, nE, ans = 0; cin >> nCS >> nE; double totalCS = 0, totalE = 0;

        vector<double> vCS(nCS), vE(nE);

        for (int i = 0; i < nCS; i++) { cin >> vCS[i]; totalCS += vCS[i]; }

        for (int i = 0; i < nE; i++) { cin >> vE[i]; totalE += vE[i]; }

        double avgCS = totalCS / nCS, avgE = totalE / nE;

        for (int i = 0; i < nCS; i++)
        {
            double newAvgCS = (totalCS - vCS[i]) / (nCS - 1);

            double newAvgE = (totalE + vCS[i]) / (nE + 1);

            if (newAvgCS > avgCS && newAvgE > avgE)
            {
                ans++;
            }
        }

        cout << ans << endl;

    }

    return 0;

}
