#include<iostream>
#include<limits.h>
using namespace std;
int MaxBT(int n,int arr[])
{
    int ans=INT_MIN;
    int suffix=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        ans=max(ans,arr[i]-suffix);
        suffix=max(suffix,arr[i]);
    }
    return ans;
}
int main()
{
    int arr[1000];
    int n;
    cout<<"Enter a size eof array=";
    cin>>n;

    cout<<"Enter an array=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<MaxBT(n, arr);

}