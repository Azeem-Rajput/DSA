#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age=";
    cin>>age;
    if(age<18)
    {
        cout<<"teenage";
    }
    else
    {
        cout<<"adult";
    }
    return 0;
}