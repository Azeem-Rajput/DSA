#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter a no. of row=";
    cin>>r;
    int c;
    cout<<"Enter a no.of column=";
    cin>>c;
    char ch;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            ch='a'+(j-1);
            cout<<ch<<" ";
        }
        cout<<endl;
    }    
}