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


Node*createDLL(int arr[],int index,int size,Node*back)
{

    if(index==size)
    {
        return NULL;
    }
    Node*temp=new Node(arr[index]);
    temp->next=back;
    temp->prev=createDLL(arr,index+1,size,temp);
    return temp;
    
}



int main()
{
    Node*head=NULL;
    int arr[]={1,2,3,4};
    head=createDLL(arr,0,4,NULL);


     Node*print=head;
    while(print)
    {
       cout<<print->data<<" ";
       print=print->next;
    }
}