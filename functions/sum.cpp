#include<iostream>
using namespace std;
int sum(int n,int m)
{
    int ans=n+m;
    return ans;
}
int main()
{
    int x,y;
    cout<<"Enter values of x and y=";
    cin>>x>>y;
    cout<<sum(x,y);
}