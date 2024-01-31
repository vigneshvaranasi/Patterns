#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number of Rows: ";
    cin>>n;
    int k=1;
    char ch='a';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++,k++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}