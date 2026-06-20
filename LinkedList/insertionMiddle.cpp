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


    // add at middle
    int x=2;
    Node*temp=Head;
    x--;
    while(x--)
    {
        temp=temp->next;
    }

    Node*temp2=new Node(30);
    temp2->next=temp->next;
    temp->next=temp2;

  // print
  Node*temp3=Head;
  while(temp3)// or while(temp!=NULL)
  {
    cout<<temp3->data<<" ";
    temp3=temp3->next;
}
}