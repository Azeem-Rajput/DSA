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
int main()

// insert node at begining
{
    int arr[]={2,4,6,8,10};
    Node*Head;
    Head=NULL;

    //linked list not present
    for(int i=0;i<5;i++)
 {
    if(Head==NULL)
    {
        Head=new Node(arr[i]);
    }
    // linked list present
    else
    {
        Node*temp;
        temp= new Node(arr[i]);     
        temp->next=Head;
        Head=temp;
    }
  }




  // print
  Node*temp=Head;
  while(temp)// or while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}