#include<iostream>
using namespace std;
int target(int arr[],int n,int number)
{
    int start=0;  
    int end=n-1;
    int mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==number)
        {
            return mid;
        }
        else if(arr[mid]>=arr[0])
        {
            if(number<=arr[mid] && number>=arr[start])
            {
            end = mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        else
        {
            if(number>=arr[mid] && number<=arr[end])
            {
            start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[100];
    int n;
    cout<<"Enter a number=";
    cin>>n;
    int number;
    cout<<"Enter a target number=";
    cin>>number;
    cout<<"Enter an array=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<target(arr,n,number);
}