#include<iostream>
using namespace std;
int MissingIndex(int arr[],int n,int k)
{
    int start=0;
    int end=n-1;
    int mid;
    int index;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]-mid-1>=k)
        {
            index=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return index+k;
}
int main()
{
    int arr[100];
    int number;
    cout<<"Enter a required no. in array="; 
    cin>>number;
    int n;
    cout<<"Enter a size of array=";
    cin>>n;
    cout<<"Enter an array=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<MissingIndex(arr,n,number);
}