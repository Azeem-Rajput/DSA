#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number=";
    cin>>n;
    int ans=0;
    int rem;
    int mul=1;
    while(n>0) //while(num)
    {
        rem=n%10;
        n/=10;
        ans+=rem*mul;
        mul*=2;
    }
    cout<<ans;
}