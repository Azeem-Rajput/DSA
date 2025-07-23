#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter a number";
    cin>>number;
    if(number<0)
    {
        cout<<"negative number";
    }
    else
    {
        if(number>0)
        {
            cout<<"positive number";
        }
        else
        {
            cout<<"equal numbers";
        }
    }
    return 0;
}