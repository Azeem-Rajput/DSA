#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter anumber of row=";
    cin>>n;
    int count=0;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(int col=1;col<=row+count;col++)
        {
            cout<<"*";
        }
        count++;
        cout<<endl;
    }
}