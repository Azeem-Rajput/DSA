#include<iostream>
using namespace std;
void swap(int &n,int &m)
{
    int s;
    s=n;
    n=m;
    m=s;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers=";
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}