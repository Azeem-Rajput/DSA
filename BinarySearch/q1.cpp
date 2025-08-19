#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {2, 4, 5, 7, 11, 17};
    int key = 11;
    int start = 0;
    int end = 5;
    int mid;
     while(start<=end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            cout << "Got it, it's in this array";
            break;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}