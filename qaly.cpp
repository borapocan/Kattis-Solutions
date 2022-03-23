#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    int n;
    
    cin >> n;
    
    double total = 0;
    
    for (int i = 0; i < n; i++)
    {
        double quality, year;
        
        cin >> quality >> year;
        
        total += quality * year;
    }
    
    cout << total << endl;
    
}
