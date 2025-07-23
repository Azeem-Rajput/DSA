#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number=";
    cin>>n;
    int p;
    cout<<"Enter a power=";
    cin>>p;
    int num=n;
    for(int i=1;i<p;i++)
    {
        num=num*n;
    }
    cout<<num;
}