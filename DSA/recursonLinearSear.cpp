#include<iostream>
using namespace std;
bool linearSearch(int arr[],int x,int index)
{
    //base case
    if(index==-1)
    {
        return 0;
    }

    if(arr[index]==x)
    {
        return 1;
    }
    return linearSearch(arr,x,index-1);
}
int main()
{
    int arr[]={2,5,9,1,7,4};
    int x=10;
    cout<<linearSearch(arr,x,5)<<endl;
}