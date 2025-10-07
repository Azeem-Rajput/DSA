#include<iostream>
using namespace std;
int TrappingRain(int n,int arr[])
{
    
}
int main()
{
    int arr[1000];
    int n;
    cout<<"Enter size of array=";
    cin>>n;

    cout<<"Enter array=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   cout<<TrappingRain(n,arr);
}