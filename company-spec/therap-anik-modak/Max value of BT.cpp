#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* left;
    node* right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* insertBST(int n, node *root)
{
    if(root==NULL)
    {
        return root = new node(n);
    }
    if(root->data > n)
        root->left = insertBST(n, root->left);
    else
        root->right = insertBST(n, root->right);
}

int maxBST(node *root)
{
    if(root==NULL)
        return -1;

    int l = maxBST(root->left);
    int r = maxBST(root->right);

    return max(root->data, max(l, r));
}

void inorder(node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    node *head = NULL;
    for(int i=1; i<=5; i++)
    {
        head = insertBST(10+i, head);
        head = insertBST(10-i, head);
    }

    inorder(head);
    cout<<endl<<maxBST(head)<<endl;
    return 0;
}


