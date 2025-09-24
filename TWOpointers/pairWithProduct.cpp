#include<iostream>
using namespace std;
int pairproduct(int arr[],int n,int target)
{
    int start=0,end=n-1;
    while(start<end)
    {
        if(arr[end]*arr[start]==target)
        {
            return 1;
        }
        else if(arr[end]*arr[start]<target)
        {
            start++;
        }
        else
        {
            end--;
        }
        return 0;
    }
}
int main()
{
    int arr[100];
    int n;
    cout<<"Enter the size of array=";
    cin>>n;
    int t;
    cout<<"Enter the reqiured number=";
    cin>>t;
    cout<<"Enter an array=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<pairproduct;
}