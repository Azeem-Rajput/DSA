#include<iostream>
using namespace std;
class Node
{
    public:
    int  data;
    Node*next;
    Node*prev;
    Node(int value)
    {
        data=value;
        next=NULL;
        prev=NULL;
    }
};
int main()
{
    Node*head=NULL;

    // insert at start

    //list not present
    if(head==NULL)
    {
        head=new Node(5);
    }
    // list present
    else
    {
        Node*temp=new Node(5);
        head->next=temp;
        temp->prev=head;
    }



    Node*print=head;
    while(print)
    {
       cout<<print->data<<" ";
       print=print->next;
    }
}