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

// insert node at end
{
    int arr[]={2,4,6,8,10};
    Node*Head,*tail;
    tail=Head=NULL;

    //linked list not present
    for(int i=0;i<5;i++)
 {
    if(Head==NULL)
    {
        Head=new Node(arr[i]);
        tail=Head;
    }
    // linked list present
    else
    {
      tail->next=new Node(arr[i]);
      tail=tail->next;

    }
  }




  // print
  Node*temp2=Head;
  while(temp2)// or while(temp!=NULL)
  {
    cout<<temp2->data<<" ";
    temp2=temp2->next;
}
}