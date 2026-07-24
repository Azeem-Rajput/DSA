#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
class solution
{
    stack<int>st1;
    stack<int>st2;
    void push(int x)
    {
        if(st1.empty())
        {
            st1.push(x);
            st2.push(x);
        }
        else
        {
            st1.push(x);
            st2.push(std::min(x, st2.top()));
        }
    }
    void pop()
    {
        if(st1.empty())
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int element=st1.top();
            st1.pop();
            st2.pop();
            cout<<element;
        }
    }
    void min()
    {
        if (st1.empty())
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<st2.top();
        }
    }
};