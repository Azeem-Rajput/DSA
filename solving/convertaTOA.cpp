#include<iostream>
using namespace std;
char convert(char a)
{
    char c=a-32;
    return c;
}
int main()
{
    char al;
    cout<<"Enter any alphabet=";
    cin>>al;
    cout<<convert(al);
}