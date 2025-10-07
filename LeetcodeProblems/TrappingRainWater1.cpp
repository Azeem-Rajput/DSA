#include<iostream>
#include<vector>
using namespace std;
int TrappingRain(int n,int arr[])
{
    int miniheight[1000];
    int leftmax[n],rightmax[n];
    leftmax[0]=0;
    for(int i=1;i<n;i++)
    {
        leftmax[i]=max(leftmax[i-1],arr[i-1]);
    }
    rightmax[n-1]=0;
    for(int i=n-2;i>0;i--)
    {
        rightmax[i]=max(rightmax[i+1],arr[i+1]);
    }
    int water=0;
    for(int i=0;i<n;i++)
    {
        miniheight[i]=min(leftmax[i],rightmax[i]);
        if(miniheight[i]-arr[i]>=0)
        {
            water+=miniheight[i]-arr[i];
        }
    }
    return water;
    
}
int main()
{
    int arr[1000];
    int n;
    cout<<"Enter size of array=";
    cin>>n;

    cout<<"Enter array=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   cout<<TrappingRain(n,arr);
}