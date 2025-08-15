#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a value=";
    cin>>n;
    int arr[n];
    cout<<"Enter a array=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        int index=i;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]>arr[index])
            {
                index=j;
            }
           
        }
        swap(arr[i],arr[index]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}