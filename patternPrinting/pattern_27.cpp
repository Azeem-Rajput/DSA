#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number of rows=";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int roww=n;roww>=1;roww--)
    {
        for(int coll=1;coll<=n-roww;coll++)
        {
            cout<<" ";
        }
        for(int coll=1;coll<=roww;coll++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}