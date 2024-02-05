#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number of Rows: ";
    cin>>n;
    int i,j;
    for( i=0;i<n;i++)
    {
        for( j=0;j<=i;j++)
        {
            if(i==j)
            cout<<j+1<<" ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}