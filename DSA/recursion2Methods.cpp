#include<iostream>
using namespace std;
// void p(int num,int n)
// {
//     // Print even numbers 1 to n (two arguments)
//     if(num>n)
//     {
//         return;
//     }
//     cout<<num;
//     p(num+2,n);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     if(n%2==1)
//     n--;
//     p(2,n);
// }





void print(int N)
{
    //Print even numbers 1 to n(one argument)
    if(N==2)
    {
        cout<<2<<" ";
        return;
    }
    print(N-2);
    cout<<N<<" ";
}


int main()
{
    int n;
    cin>>n;
    if(n%2==1)
    n--;
    print(n);   
}