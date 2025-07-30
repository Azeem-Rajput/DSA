#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number of rows=";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        for(int col=1;col<=(2*n-2*row);col++)
        {
            cout<<"  ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int roww=n-1;roww>=1;roww--)
    {
        for(int coll=roww;coll>=1;coll--)
        {
            cout<<"* ";
        }
        for(int coll=1;coll<=(2*n-2*roww);coll++)
        {
            cout<<"  ";
        }
        for(int coll=roww;coll>=1;coll--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}