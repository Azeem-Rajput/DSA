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
    while(n>0)
    {
        rem=n%2; // rem=n&1;
        n=n/2; // n=n>>1;
        ans+=rem*mul;
        mul*=10;
    }
    cout<<ans;
}