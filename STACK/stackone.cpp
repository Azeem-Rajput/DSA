#include<iostream>
using namespace std;
class stack
{
    int *arr;
    int size;
    int top;
    public:
    //constructor
    stack(int s)
    {
        size=s;
        top=-1;
        arr=new int[s];
    }
    //push
    //pop
    //peek
    //iSsize
    //iSempty
    void push(int value)
    {
        if(top==size-1)
        {
           cout<<"stack overflow"<<endl;
        }
        else
        {
             top++;
            arr[top]=value;
            cout<<value<<" pushed into stack"<<endl;
            
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"stack underflow"<<endl;
        }
        else
        {
            
            cout<<arr[top]<<" popped from stack"<<endl;
            top--;
        }
    }
    void peek()
    {
        if(top==-1)
        {
            cout<<"stack underflow"<<endl;
        }
        else
        {
        cout<<arr[top]<<" is on peak of stack"<<endl;
        }
    }
    bool isempty()
    {
        return top==-1;
    }
    void iSsize()
    {
        cout<<top+1<<endl;
    }

};
int main()
{
    stack s(5);
    s.peek();
}
