#include<iostream>
using namespace std;
int pairdifference(int arr[],int n,int target)
{
    int start=0,end=1;
    while(end<n)
    {
        if(arr[start]-arr[end]==target)
        {
            return 1;
        }
        else if(arr[start]-arr[end]<target)
        {
            end++;
        }
        else
        {
            start++;
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
    cout<<pairdifference;
}