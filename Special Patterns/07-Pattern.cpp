#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number of Rows: ";
    cin>>n;
    int i,j,k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
            cout<<"* ";
        for(int j=0;j<2*i;j++)
            cout<<"  ";
        for(int k=0;k<n-i;k++)
            cout<<"* ";
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            cout<<"* ";
        for(j=0;j<2*(n-i-1);j++)
            cout<<"  ";
        for(k=0;k<=i;k++)
            cout<<"* ";
        cout<<endl;
    }

}