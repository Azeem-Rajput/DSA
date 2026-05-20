#include<iostream>
using namespace std;
// void p(int num,int n)
// {
//     1 to n (two arguments)
//     if(num==n)
//     {
//         cout<<n;
//         return;
//     }
//     cout<<num;
//     p(num+1,n);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     p(1,n);
// }


void print(int N)
{
    // 1 to n(one argument)
    if(N==1)
    {
        cout<<1;
        return;
    }
    print(N-1);
    cout<<N;
}

int main()
{
    print(5);   
}