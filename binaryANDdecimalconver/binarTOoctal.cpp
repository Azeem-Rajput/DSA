#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number=";
    cin>>n;
    int rem,rem_;
    int ans=0;
    int ans_=0;
    int mul=1;
    int mul_=1;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        ans=rem*mul+ans;
        mul=mul*2;
    }

    while(ans>0)
    {
        rem_=ans%8;
        ans=ans/8;
        ans_=rem_*mul_+ans_;
        mul_=mul_*10;
    }
    cout<<ans_;
}