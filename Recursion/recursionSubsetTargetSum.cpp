#include<iostream>
using namespace std;
bool subsets(int arr[],int n,int index,int target)
{
    if(target==0)
    {
        return 1;
    }
    if(target<0 || index==n)
    {
        return 0;
    }
    return subsets(arr,n,index+1,target) || subsets(arr,n,index+1,target-arr[index]);
}
int main()
{
    int arr[]={3,6,4,5};
    cout<<subsets(arr,4,0,12);
}