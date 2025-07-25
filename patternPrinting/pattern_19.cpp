#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a no. of row=";
    cin>>n;
    for(int row=1;row<=n;row ++)
    {
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(int col_=1;col_<=row;col_++)
        {
            cout<<col_;
        }
        cout<<endl;  
    }    
}
 