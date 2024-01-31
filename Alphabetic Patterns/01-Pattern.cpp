#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number of Rows: ";
    cin >> n;
    int k = 1;
    char ch = 'A' + n - 1;
    for (int i = 0; i < n; i++)
    {
        char c = ch - i;
        for (int j = 0; j <= i; j++, k++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}