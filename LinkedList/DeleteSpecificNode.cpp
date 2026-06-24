#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next; 

    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
Node* CreateLinkedList(int arr[],int index,int size)
{
    // base condition
    if(index==size)
    {
        return NULL;
    }

    Node*temp;
    temp=new Node(arr[index]);
    temp->next=CreateLinkedList(arr,index+1,size);

    return temp;
}
int main()
{
    Node*Head=NULL;
    
    int arr[]={2,4,6,3};
    Head=CreateLinkedList(arr,0,4);

    Node*curr=Head;
    Node*prev=NULL;
    int x=3;
    x--;

    if(x==1)
    {
        Node*temp=Head;
        Head=Head->next;
        delete temp;
    }
    else
    {
        while(x--)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        delete curr; 
    }






















    // print
      Node*temp2=Head;
  while(temp2)// or while(temp!=NULL)
  {
    cout<<temp2->data<<" ";
    temp2=temp2->next;
}
}