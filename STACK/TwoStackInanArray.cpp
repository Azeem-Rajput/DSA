#include<iostream>
#include<stack>
using namespace std;
class stackArray
{
    public:
    int *arr;
    int top1,top2;
    int size;
    stackArray(int n)
    {
        arr=new int[n];
        top1=-1;
        top2=n;
        size=n;
    }
    void push1(int x)
    {
        if(top1+1==top2)
        {
            return;
        }
        else
        {
            arr[top1]==x;
            top1++;
        }
    }
    void push2(int x)
    {
        if(top2-1==top1)
        {
            return;
        }
        else
        {
            arr[top2]==x;
            top2++;
        }
    }
    int pop1()
    {
        if(top1==-1)
        {
            return -1;
        }
        else
        {
            int element=arr[top1];
            top1--;
            return top1;
        }
    }
    int pop2()
    {
        if(top2==-1)
        {
            return -1;
        }
        else
        {
            int element=arr[top2];
            top2++;
            return top2;
        }
    }
};