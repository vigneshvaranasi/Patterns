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
        for(j=0;j<=i;j++)
            cout<<"  ";
        for(k=j;k<=n+n-i-1;k++)
            cout<<"* ";
        cout<<endl;
    }
}