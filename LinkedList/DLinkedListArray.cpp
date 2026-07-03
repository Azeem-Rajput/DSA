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
    Node*head,*tail;
    tail=head=NULL;

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
        head=temp;
    }
    // insert array
    tail=head;
    int arr[]={1,2,3,4};
    for(int i=0;i<4;i++)
    {
        if(head==NULL)
        {
            head=new Node(arr[i]);
            tail=head;
        }
        else
        {
            Node*temp=new Node(arr[i]);
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
    }




    
    Node*print=head;
    while(print)
    {
       cout<<print->data<<" ";
       print=print->next;
    }
}