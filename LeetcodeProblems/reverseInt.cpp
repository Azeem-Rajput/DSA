#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number=";
    cin>>n;
    int ans=0;
    int rem;
    
    while(n>0)
    {
        rem=n%10;
        n/=10;
        if(ans>INT64_MAX/10 || ans<INT64_MIN/10)
        {
            return 0;
        }
        ans=(ans*10)+rem;
    }
    cout<<ans;
}