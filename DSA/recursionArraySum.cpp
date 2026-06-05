#include<iostream>
using namespace std;
int sum(int arr[],int index)
{
    //base condition
    if(index<0)
    {
        return 0;
    }

    return arr[index]+sum(arr,index-1);
}
int main()
{
    int arr[]={3,4,5,8,2};
    cout<<sum(arr,4);
    
}