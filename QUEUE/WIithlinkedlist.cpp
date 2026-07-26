#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;
    
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
class queue
{
    Node*front;
    Node*rare;
    public:
    queue()
    {
        front=NULL;
        rare=NULL; 
    }
    bool isempty()
    {
        return front==NULL;
    }
    void push(int x)
    {
        if(isempty())
        {
            front=rare=new Node(x);
            return;
        }
        else
        {
            rare->next=new Node(x);
            if(rare->next==NULL)
            {
                cout<<"queue overflow"<<endl;
                return;
            }
            rare=rare->next;
        }
    }
    void pop()
    {
        if(isempty())
        {
            cout<<"queue underflow"<<endl;
            return;
        }
        else
        {
            Node*temp=front;
            front=front->next;
            delete temp;
        }
    }
    int start()
    {
        if(isempty())
        {
            cout<<"queue is empty"<<endl;
            return -1;
        }
        else
        {
            return front->data;
        }
    }
};
int main()
{
    queue a;
    a.push(5);
    a.push(58);
    a.push(52);
    a.push(51);
    a.pop();
    cout<<a.start();
}