#include<iostream>
#include<vector>
using namespace std;
int TrappingRain(int n,int arr[])
{
    vector<int>arr;
    int leftmax[n],rightmax[n];
    leftmax[0]=0;
    for(int i=1;i<n;i++)
    {
        leftmax[i]=max(leftmax[i-1],rightmax[i-1]);
    }
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