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

void printList(struct Node* node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

int main()
{
    struct Node *head = NULL;
    for(int i=1; i<10; i++)
        insertData(i, &head);

    printList(head);
    return 0;
}
