#include <iostream>
#include <vector>
#include <map>
#include <cassert>
# include <string>

using namespace std;

vector<vector<char>> FlipVertical(vector<vector<char>> matrix, int maxRows, int MaxColumn)
{
    for (int r = 0; r < (4/2); r++)
    {
        for (int c = 0; c != 4; ++c)
        {
            std::swap(matrix[r][c], matrix[4 - 1 - r][c]);
        }
    }

    return matrix;

}

int main() {

    string input; cin >> input;

    vector<int> inputs;

    for (int i = 0; i < input.size(); i++)
    {
        inputs.push_back(input[i] - '0');
    }

    vector<int> binaries = {1,2,4,8};

    vector<bool> boolBinaries = {0, 0, 0, 0};

    vector<vector<char>> matrix;

    for (int o = 0; o < 4; o++)
    {
        std::map<int, bool> m;

        assert(binaries.size() == boolBinaries.size());

        for (size_t i = 0; i < binaries.size(); ++i)

            m[binaries[i]] = boolBinaries[i];

        int sum = 0;

        map<int, bool>::iterator itr;

        sum = inputs[o];

        for (auto itr = m.rbegin(); itr != m.rend(); itr++)
        {

            if (sum == itr->first || sum > itr->first)

                itr->second = 1;

            else

                continue;

            sum = sum - itr->first;

            if (sum < 0)

                break;

        }

        vector<char> ans;

        for (auto itr = m.rbegin(); itr != m.rend(); itr++)
        {
            if (itr->second == 1)
            {
                ans.push_back('*');
            }
            else
            {
                ans.push_back('.');
            }

        }

        matrix.push_back(ans);

    }

    vector<vector<char>> matrix2(4, vector<char>(4));

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matrix2[i][j] = matrix[j][(4 - 1 -i)];
        }

        //cout << endl;
    }

    vector<vector<char>> matrix3(4, vector<char>(4));

    matrix3 = FlipVertical(matrix2,4,4);
//
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j < 3)
                
                cout << matrix3[i][j] << " ";
                
            else
            
                cout << matrix3[i][j];

            if (j == 1)

                cout << "  ";

        }

        cout << endl;

    }

}
