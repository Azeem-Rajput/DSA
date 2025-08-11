#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter the array=";
    for (int i = 0; i <= 4; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= 4; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     for (int i = 4; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
}