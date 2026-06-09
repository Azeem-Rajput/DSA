#include<iostream>
#include<vector>
using namespace std;
void subsequence(int arr[],int index,int n,int sum,vector<int>&ans,vector<int>&temp)
{
    // base case
    if(index==n)
    {
        ans.push_back(sum,temp);  
        return;
    }

   //no 
   subsequence(arr,index+1,n,sum,ans,temp);
   // yes
   subsequence(arr,index+1,n,sum+arr[index],ans,temp);
   temp.push_back(arr[index]);
}
int main() 
{
    int arr[]={3,4,5};
    vector<int>ans;
    vector<int>temp;
    subsequence(arr,0,3,0,ans,temp);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }

}