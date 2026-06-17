#include<iostream>
using namespace std;
int minele(int arr[],int index, int n)
{
    //base condition
    if(index==n-1)
    {
        return arr[index];
    }

    return min(arr[index],minele(arr,index+1,n));
}
int main()
{
    int arr[]={7,4,2,8,1};
    cout<<minele(arr,0,5);
}