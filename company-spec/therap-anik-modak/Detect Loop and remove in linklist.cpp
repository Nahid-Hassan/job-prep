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
    cout<<endl;
}

void detectLoop(struct Node *head)
{
    struct Node *slow = head, *fast = head;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast)
            break;
    }

    if(slow==fast)
    {
        cout<<"Loop detected\n";
        slow = head;
        if(slow==fast)
        {
            while(fast->next != slow)
                fast = fast->next;
        }
        else
        {
            fast = head;
            while(fast->next != slow->next)
            {
                fast = fast->next->next;
                slow = slow->next;
            }
        }
        fast->next = NULL;
    }
    else
        cout<<"Loop not detected\n";
}

int main()
{
    struct Node *head = NULL, *tmp = NULL;
    for(int i=1; i<=3; i++)
        insertData(i, &head);

    head->next->next->next = head;
    detectLoop(head);
    printList(head);
    return 0;
}

