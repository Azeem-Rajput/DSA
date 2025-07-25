#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number of row=";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(char col_='A';col_<='A'+(row-1);col_++)
        {
            cout<<col_;
        }
        cout<<endl;
    }   
}