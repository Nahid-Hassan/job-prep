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

int maxsumBST(node *root, int &sum)
{
    if(root==NULL)
        return 0;

    int l = maxsumBST(root->left, sum);
    int r = maxsumBST(root->right, sum);
    int tmp = max(max(l, r) + root->data, root->data);

    int mx = max(tmp, l+r+root->data);
    sum = max(mx, sum);
    return tmp;
}

int findMaxSum(Node* root, int &globalMax){
    if(root == NULL)
        return 0;
    int left = findMaxSum(root->left, globalMax);
    int right = findMaxSum(root->right, globalMax);
    int returnMax = max(max(left, right) + root->val, root->val);

    int mx = max(returnMax, left + right + root->val);
    if(mx > globalMax)
        globalMax = mx;
    return returnMax;
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
    for(int i=1; i<=10; i++)
    {
        head = insertBST(5+i, head);
        head = insertBST(5-i, head);
    }

    inorder(head);
    int sum = INT_MIN;
    cout<<endl<<maxsumBST(head, sum)<<endl;
    return 0;
}



