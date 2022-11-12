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

int isBSTUtil(node* node, int min, int max)
{
    if (node==NULL)
        return 1;

    if (node->data < min || node->data > max)
        return 0;

    return
        isBSTUtil(node->left, min, node->data-1) && // Allow only distinct values
        isBSTUtil(node->right, node->data+1, max); // Allow only distinct values
}


int isBST(node* node)
{
    return(isBSTUtil(node, INT_MIN, INT_MAX));
}

int sizeOfTree(node* node)
{
    if (node == NULL)
        return 0;
    else
        return(sizeOfTree(node->left) + 1 + sizeOfTree(node->right));
}

int largestBST(struct node *root)
{
    if(root == NULL)
        return 0;

    if (isBST(root))
        return sizeOfTree(root);
    else
        return max(largestBST(root->left), largestBST(root->right));
}

node* insert(int data, node*root)
{
    if(root == NULL)
    {
        node *temp = new node(data);
        return temp;
    }

    if(data > root->data) root->right = insert(data, root->right);
    else if(data < root->data) root->left =  insert(data, root->left);
    return root;
}

int main()
{
    node *root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);

    root = insert(10, root);

    int ans = largestBST(root);
    cout<<ans<<"\n";
    return 0;
}

