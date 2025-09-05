#include<iostream>
using namespace std;
int book(int arr[],int n,int m)
{
    int start=0;
    int end=0;
    int mid,ans;
    if(m>n)
    {
        return -1;
    }
    for(int i=0;i<n;i++)
    {
        start=max(start,arr[i]);
        end+=arr[i];
    }
    

    while(start<=end)
    {
        mid=start+(end-start)/2;
        int page=0;
        int count=1;
        for(int i=0;i<n;i++)
        {
            page+=arr[i];
            if(page>mid)
            {
                count++;
                page=arr[i];
            }
        }
        if(count<=m)
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=end+1;
        }
    }
    return ans;
}
int main()
{
    int arr[100];
    int m;
    cout<<"Enter the required persons=";
    cin>>m;
    int n;
    cout<<"Enter a size of array=";
    cin>>n;
    cout<<"Enter an array=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<book(arr,n,m);

}