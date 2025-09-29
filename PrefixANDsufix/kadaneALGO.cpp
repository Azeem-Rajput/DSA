#include<iostream>
#include<limits.h>
using namespace std;
int kadane(int n,int arr[])
{
     int prefix=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        prefix+=arr[i];
        if(prefix<0)
        {
            prefix=0;
        }
        maxi=max(maxi,prefix);
    }
    return maxi;
}
int main()
{
    int arr[100];
    int n;
    cout<<"Enter a size of array=";
    cin>>n;

    cout<<"Enter an array=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<kadane(n,arr);
}