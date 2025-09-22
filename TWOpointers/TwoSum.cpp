#include <iostream>
#include<vector>
using namespace std;
int TwoSum(int n, int arr[], int key)
{
    int start=0;
    int end=n-1;
    while(start<end)
    {
        if(arr[start]+arr[end]==key)
        {
            return 1;
        }
        else if(arr[start]+arr[end]>key)
        {
         end--;  
        }
        else 
        {
            start++  ;
        }
    }
    return {};
}
int main()
{

    int arr[100];
    int n;
    cout << "Enters a size of array=";
    cin >> n;
    int key;
    cout << "Enter key=";
    cin >> key;

    cout << "Enter an array=";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << TwoSum(n, arr, key);
}
