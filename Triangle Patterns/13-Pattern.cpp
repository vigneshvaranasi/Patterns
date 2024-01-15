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
            cout<<"* ";
        for(k=j;k<=n+n-i-3;k++)
        {
            if(i==0||i==n-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        if(i!=n-1)
            cout<<"* ";
        cout<<endl;
    }
}