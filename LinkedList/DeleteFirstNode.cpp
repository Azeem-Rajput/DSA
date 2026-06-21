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

// insert node at end
{
    Node*Head;
    Head=NULL;
    int arr[]={2,4,6};
    Head=CreateLinkedList(arr,0,3);

    // deleten node
    if(Head!=NULL)
    {
      Node*temp=Head;
      Head=Head->next;
      delete temp;
    }

  Node*temp2=Head;
  while(temp2)// or while(temp!=NULL)
  {
    cout<<temp2->data<<" ";
    temp2=temp2->next;
}
}