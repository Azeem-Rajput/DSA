#include<iostream>
using namespace std;
int s(int n)
{
    //break case
    if(n==1)
    {
        return 1;
    }
    return (n*n)+s(n-1);
}
int main()
{
    int n;
    
    n=4;
    cout<<s(n);
}