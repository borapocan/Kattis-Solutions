#include <iostream>
using namespace std;

int main()
{
    int w;
    cin >> w;
    int n;
    cin >> n;
    int totalPerimeter = 0;
    int width, length;
    for (int i = 0; i < n; i++)
    {
        cin >> width >> length;
        totalPerimeter += width * length;
    }

    cout << totalPerimeter / w;
}
