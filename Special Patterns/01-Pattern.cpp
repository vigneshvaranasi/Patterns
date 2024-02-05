#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter Number of Rows: ";
    cin>>n;
    for (int i = 0; i < 2 * n - 1; ++i) 
    {
        for (int j = 0; j < 2 * n - 1; ++j) 
        {
            int minValue = min(i, j);
            minValue = min(minValue, 2 * n - 2 - i);
            minValue = min(minValue, 2 * n - 2 - j);
            cout << n - minValue << " ";
        }
        cout << endl;
    }

}
