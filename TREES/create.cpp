#include<iostream>
#include<queue>
using namespace std;
class Node
{
    public:
    int data;
    Node*left,*right;
    Node(int value)
    {
        data=value;
        left=NULL;
        right=NULL;
    }    
};
int main()
{
    int x;
    cout<<"Enter a value=";
    cin>>x;
    int first,secand;
    queue<Node*>q;
    Node*root=new Node(x);
    q.push(root);   
    // build the binary tree
    while(!q.empty())
    {
        Node*temp=q.front();
        q.pop();
        // left
        cout<<"enter the left child of "<<temp->data<<"=";   
        cin>>first;
        if(first!=-1)
        {
            temp->left=new Node(first);
            q.push(temp->left);
        }
        // right
        cout<<"enter the right child of "<<temp->data<<"=";   
        cin>>secand;
        if(secand!=-1)
        {
            temp->right=new Node(secand);
            q.push(temp->right);
        }
    }
}