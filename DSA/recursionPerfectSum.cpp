#include<iostream>
using namespace std;
int print(int arr[],int n,int index,int sum)
{
    if(sum==0)
    {
        return 1 ;
    }
    if(index==n || sum<0)
    {
        return 0;
    }
    return print(arr,n,index+1,sum)+print(arr,n,index+1,sum-arr[index]);
    
}
int main()
{
    int arr[]={5,2,3,6,10,8};
    cout<<print(arr,6,0,10);
    
}