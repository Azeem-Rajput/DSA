#include<iostream>
using namespace std;
int answer(int a,int b)
{
    int total=0;
    total+=min(8-a,8-b);
    total+=min(8-a,b-1);
    total+=min(a-1,b-1);
    total+=min(a-1,8-b);
    return total;
}
int main()
{
    int n,m;
    cout<<"Enter row and column=";
    cin>>n>>m;
    cout<<answer(n,m);
}