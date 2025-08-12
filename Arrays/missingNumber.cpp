#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number=";
    cin>>n;
    int arr[n-1];
    int sum=n*(n+1)/2;
    int sum2=0;
    cout<<"Enter an array=";
    for(int i=0;i<=n-2;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<=n-2;i++)
    {
        sum2=sum2+arr[i];
    }
    int missing=sum-sum2;
    cout<<"The missing number in array is="<<missing;

}