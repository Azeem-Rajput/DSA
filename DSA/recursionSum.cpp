#include<iostream>
using namespace std;
int sum(int N)
{
    //break case
    if(N==1)
    {
        return 1;
    }
    return N+sum(N-1);
}
int main()
{
    int n;
    n=5;
    cout<<sum(n);
}