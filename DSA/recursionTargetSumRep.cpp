#include<iostream>
using namespace std;
int subsets(int arr[],int index,int n,int sum)
{
    if(sum==0)
    {
        return 1;
    }
    if(index==n || sum<0)
    {
        return 0;
    }
    return subsets(arr,index+1,n,sum)+subsets(arr,index,n,sum-arr[index]);
}
int main()
{
    int arr[]={2,0,4};
    cout<<subsets(arr,0,3,6);
}