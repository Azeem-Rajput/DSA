#include<iostream>
#include<vector>
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
static int index=-1;
Node*buildTree(vector<int>preorder){
    index++;
    if(preorder[index]==-1)
    {
        return NULL;
    }
    Node*root=new Node(preorder[index]);
    root->left=buildTree(preorder);
    root->right=buildTree(preorder);
    return root;
}
void preOrder(Node*root)   // pre-order traversal
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node*root)   // in-order traversal----left,root,right
{
    if(root==NULL)
    {
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node*root)   // post-order traversal----left,right,root
{
    if(root==NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
    
}
void levelorder(Node*root)
{
    queue<Node*>q;
    q.push(root);
    q.push(NULL);    // for next line
    while(q.size()>0)
    {
        Node*curr=q.front();
        q.pop();
        if(curr==NULL)
        {
            if(!q.empty())
            {
                cout<<endl;
                q.push(NULL);
                continue;
            }
            else
            {
                break;
            }
        }

        cout<<curr->data;
        if(curr->left!=NULL)
        {
            q.push(curr->left);
        }
        if(curr->right!=NULL)
        {
            q.push(curr->right);
        }
    }
    cout<<endl;
}
int main()
{
    vector<int>preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node*Root=buildTree(preorder);
    // preOrder(Root);
    // cout<<endl;
    // inOrder(Root);
    // cout<<endl;
    // postOrder(Root);
    levelorder(Root);
    return 0;
    
}