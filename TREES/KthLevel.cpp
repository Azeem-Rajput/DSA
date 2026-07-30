#include<iostream>
#include<queue>
#include<vector>
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
void kthvalue(Node*root,int k)
{
    if(root==NULL)
    {
        return;
    }
    if(k==1)
    {
        cout<<root->data;
        return;
    }
    kthvalue(root->left,k-1);
    kthvalue(root->right,k-1);

}

