#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number of Rows: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k=i+1;
        for(int j=0;j<n-i;j++,k++)
            cout<<k<<" ";
        cout<<endl;
    }
}