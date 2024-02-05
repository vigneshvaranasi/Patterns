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
        for( j=0;j<=i;j++)
        {
            if(j==0 || j==i)
                cout<<"* ";
            else
                cout<<"  ";
        }
        for(j=0;j<2*(n-i-1);j++)
            cout<<"  ";
        for(k=0;k<=i;k++)
        {
            if(k==0 || k==i)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(j==0 || j==n-i-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        for(int j=0;j<2*i;j++)
            cout<<"  ";
        for(int k=0;k<n-i;k++)
        {
            if(k==0 || k==n-i-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

}