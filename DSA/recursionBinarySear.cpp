#include<iostream>
using namespace std;
int BinarySearch(int arr[],int start,int end,int x)
{
    // base condition
    if(start>end)
    {
        return -1;
    }

    int mid=start+(end-start/2);
    if(arr[mid]==x)
    {
        return mid;
    }
    else if(arr[mid]<x)
    {
        return BinarySearch(arr,mid+1,end,x);
    }
    else
    {
        return BinarySearch(arr,start,mid-1,x);
    }
}
int main()
{
    int arr[]={3,8,11,15,20,22};
    cout<<BinarySearch(arr,0,5,22);
}