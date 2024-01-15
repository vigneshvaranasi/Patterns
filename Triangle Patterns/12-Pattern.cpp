#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number of Rows: ";
    cin>>n;
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
            cout<<"  ";
        cout<<"* ";
        for (int k = 0; k < 2 * i - 1; k++) 
        {
            if (i != 0 && i != n - 1) 
                cout << "  ";
            else 
                cout << "* ";
        }
        if(i!=0)
            cout<<"* ";
        cout<<endl;
    }
}