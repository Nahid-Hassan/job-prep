#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void insertData(int n, struct Node **head)
{
    struct Node *newnode = (struct Node*) malloc(sizeof(struct Node));
    newnode->data = n;
    newnode->next = NULL;

    if(*head==NULL)
    {
        *head = newnode;
        return;
    }

    struct Node *cur = *head;
    while(cur->next != NULL)
    {
        cur = cur->next;
    }
    cur->next = newnode;
}

struct Node* getList(struct Node *root)
{
    if(root==NULL)
        return NULL;

    int sum = 0;
    struct Node *tmp = root;
    root->next = getList(root->next);
    while(tmp != NULL)
    {
        sum += tmp->data;
        if(sum==0)
            root = tmp->next;
        tmp = tmp->next;
    }
    return root;
};

void printList(struct Node* node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout<<endl;
}

int main()
{
    struct Node *head = NULL;
    for(int i=1; i<=10; i++)
    {
        insertData(i, &head);
        insertData(i-10, &head);
    }

    printList(head);
    head = getList(head);
    printList(head);
    return 0;
}

