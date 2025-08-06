#include<iostream>
using namespace std;
void swap(int n,int m)
{
    int s;
    m=s;
    n=m;
    s=m;
    return;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers=";
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}