#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter Number of Rows: ";
    cin>>n;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j <= n - i; j++)
            cout <<"  ";
        int num = 1;
        for (int j = 0; j <= i; j++) 
        {
            cout << " " << num << "  ";
            num = num * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return 0;
}
