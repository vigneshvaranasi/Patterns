#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number of Rows: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<n-i;k++)
            cout<<"  ";
        cout<<"* ";
        for(int j=1;j<n-1;j++)
        {   
            if(i==0 || i==n-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<"* ";
        cout<<endl;
    }
}