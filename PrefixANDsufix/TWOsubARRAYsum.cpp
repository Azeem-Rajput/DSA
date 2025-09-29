#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int totalsum=0;
    int n;
    cout<<"Enter a size of array=";
    cin>>n;
    cout<<"Enter array=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        totalsum+=arr[i];
    }

    int sum=0;
    int test=0;
    for(int j=0;j<n-1;j++)
    {
        sum+=arr[j];
        test=totalsum-sum;
        if(sum==test)
        {
            cout<<"1"; //return 1;
        }
    }
     //return 0;
}