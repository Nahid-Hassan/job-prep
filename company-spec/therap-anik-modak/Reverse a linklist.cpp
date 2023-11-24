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

struct Node* reverseList(struct Node* head)
{
    struct Node *cur = head;
    struct Node *prev = NULL, *next = NULL;
    while(cur != NULL)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
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
    for(int i=1; i<10; i++)
        insertData(i, &head);

    printList(head);
    head = reverseList(head);
    printList(head);
    return 0;
}

