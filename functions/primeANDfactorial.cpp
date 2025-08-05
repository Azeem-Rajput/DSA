#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    return fact;
}
bool prime(int n)
{
    if(n<2)
    {
    return 0;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int x,y;
    cout<<"Enter values of x and y=";
    cin>>x>>y;
    cout<<prime(x)<<endl;
    cout<<factorial(x)<<endl;
    cout<<prime(y)<<endl;
    cout<<factorial(y)<<endl;
    cout<<prime(x-y)<<endl;
    cout<<factorial(x-y)<<endl;
}