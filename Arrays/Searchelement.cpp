#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter the array=";
    for(int i=0;i<=4;i++)
    {
        cin>>arr[i];
    }
     int match;
    cout<<"Enter a number of array=";
    cin>>match;
    for(int i=0;i<=4;i++)
    {
        if(arr[i]==match)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<"-1";
}