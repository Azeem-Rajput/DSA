#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,4,6,8,5};
    for(int j=4;j>=0;j--)
    {
        if(arr[j]<arr[j-1])
        {
            swap(arr[j-1],arr[j]);
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
    }
}