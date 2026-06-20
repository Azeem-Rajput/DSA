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

Node* CreateLinkedList(int arr[],int index,int size,Node *prev)
{
    // base condition
    if(index==size)
    {
        return prev;
    }

    Node*temp;
    temp=new Node(arr[index]);
    temp->next=prev;
    return CreateLinkedList(arr,index+1,size,temp);
}
int main()

// insert node at end
{
    Node*Head;
    Head=NULL;
    int arr[]={2,4,6,10};
    Head=CreateLinkedList(arr,0,4,Head);


  Node*temp2=Head;
  while(temp2)// or while(temp!=NULL)
  {
    cout<<temp2->data<<" ";
    temp2=temp2->next;
}
}