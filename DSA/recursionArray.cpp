#include<iostream>
using namespace std;

void p(int arr[],int index,int n)
{
    //break case
    if (index==n)
    {
        return;
    }
    p(arr,index+1,n);
    cout<<arr[index]<<" ";
    
}


int main()
{
    
    int arr[]={3,7,6,2,8};
    p(arr,0,5);
    
}