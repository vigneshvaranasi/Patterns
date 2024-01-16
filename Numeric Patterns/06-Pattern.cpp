#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number of Rows: ";
    cin>>n;
    int i,j,k;
    for( i=0;i<n;i++)
    {
        int num=i+1;
        for( j=0;j<=i;j++)
            cout<<j+1<<" ";
        for(k=j;k<n+n-i-1;k++)
            cout<<"  ";
        for(j=k;j<=n+n-1;j++)
        cout<<num--<<" ";
        cout<<endl;
    }
}