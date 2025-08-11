#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter the array=";
    int ans=INT_MAX;
    for(int i=0;i<=4;i++)\
    {
        cin>>arr[i];
    }
    for(int i=0;i<=4;i++)
    {
        if(arr[i]<ans)
        {
            ans=arr[i];
        }
    }
    cout<<ans;
    return 0;
}