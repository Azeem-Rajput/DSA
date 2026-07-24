#include <iostream>
#include <stack>
using namespace std;
class solution
{
    stack<int>st;
    void push(int x)
    {
        if(st.empty())
        {
            st.push(x*101+x);   
        }
        else
        {
            st.push(x*101+min(st.top()%101,x));
        }
        
    }
    int pop()
    {
        if(st.empty())
        {
            cout<<"-1"<<endl;
        }
        else
        {
           int element=st.top()/101;
           st.pop();
           return element;
        }
    }
    int getmin()
    {
        if (st.empty())
        {
            return -1;
        }
        else
        {
            return st.top()%101;
        }
    }
};