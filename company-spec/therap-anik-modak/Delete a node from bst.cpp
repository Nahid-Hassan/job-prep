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
    {
        cout<<endl;
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

node *minValueNode(node *node)
{
  struct node *current = node;
  while (current && current->left != NULL)
    current = current->left;
  return current;
}

node* deleteBST(int key, node *root)
{
    if(root==NULL)
        return NULL;
    if(root->data > key)
        root->left = deleteBST(key, root->left);
    else if(root->data < key)
        root->right = deleteBST(key, root->right);
    else
    {
        if(root->left==NULL && root->right==NULL)
            return NULL;
        if(root->left==NULL)
        {
            node *tmp = root->right;
            free(root);
            return tmp;
        }
        else
        {
            node *tmp = root->left;
            free(root);
            return tmp;
        }

        node *tmp = minValueNode(root->right);
        root->data = tmp->data;
        root->right = deleteBST(tmp->data, root->right);
    }
    return root;
}

int main()
{
    node *head = NULL;
    for(int i=1; i<5; i++)
    {
        head = insertBST(5-i, head);
        head = insertBST(5+i, head);
    }

    inorder(head);
    head = deleteBST(6, head);
    inorder(head);

    return 0;
}



