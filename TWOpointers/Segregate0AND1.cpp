#include<iostream>
using namespace std;
void segregate(int n,int arr[])
{
    int start=0;
    int end=n-1;
    while(start<end)
    {
        if(arr[start]==0 && arr[end]==1)
        {
            start++;
            end--;
        }
        else
        {
            if(arr[start]==1)
            {
                if(arr[end]==0)
                {
                    swap(arr[start],arr[end]);
                    start++;
                    end--;
                }
                else
                {
                    end--;
                }
            }
            else
            {
                start++;
            }
            
        }
    }
}
int main()
{
    int arr [100];
    int n;
    cout<<"Enters a size of array=";
    cin>>n;
    
    cout<<"Enter an array=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    segregate(n,arr);

     for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}