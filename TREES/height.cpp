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
int height(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int leftht=height(root->left);
    int rightht=height(root->right);
    return max(leftht,rightht)+1;
}

int main()
{
    vector<int>level={1,2,3,-1,-1,4,5};
      if(level.empty())
    {
        return 0;
    }
    
    Node*root=new Node(level[0]);
    queue<Node*>q;
    q.push(root);   
    // build the binary tree
    int i=0;
    while(!q.empty() && level[i] != -1)
    {
        Node*temp=q.front();
        q.pop();
        // left
        if(i < level.size() && level[i] != -1)
        {
            temp->left=new Node(level[i]);
            q.push(temp->left);
        }
        i++;
        // right
        if(i < level.size() && level[i] != -1)
        {
            temp->right=new Node(level[i]);
            q.push(temp->right);
        }
        i++;
    }
    cout<< "height= "<<height(root);
    return 0;
}