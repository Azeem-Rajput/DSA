#include<iostream>
using namespace std;
int fact(int N)
{
    if(N==1 || N==0)
    {
        return 1;
    }
    return N*fact(N-1);
}
int main()
{
    int n=0;
    if(n<0)
    {
        cout<<"Factorial not exist";
    }
    cout<<fact(n);
}