#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number=";
    cin>>n;
    if(n<2)
    {
        cout<<"not a prime number";
        return 0;
    }
    else
    {
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"not a prime number";
            return 0;
        }
    }
    cout<<"prime number";
    return 0;
    }
}