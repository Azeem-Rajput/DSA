#include<iostream>
using namespace std;
class node
{
    public:
    node*next;
    int data;
    node(int value)
    {
        data=value;
        next=NULL;
    }
};
class stack
{
    node*top;
    int size;
    public:
    stack()
    {
        top=NULL;
        size=0;
    }
    // push
    void push(int value)
    {
        node*temp=new node(value);
        temp->next=top;
        top=temp;
        cout<<temp->data<<" pushed into stack"<<endl;
        size++;
    }
    // pop
    void pop()
    {
        if(top==NULL)
        {
            cout<<"stack underflow"<<endl;
        }
        else
        {
        node*temp=top;
        cout<<temp->data<<" poped from stack"<<endl;
        top=top->next;
        delete temp;
        size--;
        
        }
    }
    void peek()
    {
        if(top==NULL)
        {cout<<"stack is empty"<<endl<<-1<<endl;
        }
        else
        {
        cout<<top->data<<endl;
        }
    }
    bool isempty()
    {
        return top==NULL;
    }
    void Issize()
    {
        cout<<size<<endl;
    }

};
int main()
{
    stack s;
    s.push(5);
    s.push(10);
    s.push(2);
    s.pop();
    // s.peek();
    cout<<s.isempty()<<endl;
    s.Issize(); 
    s.peek();  
}