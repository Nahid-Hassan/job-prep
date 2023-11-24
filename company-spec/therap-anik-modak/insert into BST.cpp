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
    for(int i=1; i<10; i++)
        head = insertBST(i, head);

    inorder(head);
    return 0;
}


