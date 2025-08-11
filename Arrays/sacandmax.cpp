#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter the array=";
    int ans=INT_MIN;
    int maxx;
    int s_max=INT_MIN;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]>ans)
        {
            ans=arr[i];
        }
    }
    for(int i=0;i<5;i++)
    {
        if(ans!=arr[i])
        {
            s_max=max(s_max,arr[i]);
        }
    }
    cout<<s_max;
    return 0;
}