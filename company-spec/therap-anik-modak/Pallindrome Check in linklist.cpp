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

bool compareLists(struct Node *tmp1, struct Node *tmp2)
{
    while(tmp1 && tmp2)
    {
        if(tmp1->data != tmp2->data)
            return 0;
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    return 1;
}

struct Node* middlePoint(struct Node *head)
{
    struct Node *slow = head, *fast = head;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
};

void checkPalindrome(struct Node *head)
{
    struct Node *tmp1 = head;
    struct Node *mid = middlePoint(head);
    struct Node *tmp2 = reverseList(mid);

    //cout<<tmp1->data<<" "<<tmp2->data<<endl;
    if(compareLists(tmp1, tmp2))
        cout<<"Palindrome\n";
    else
        cout<<"Not palindrome\n";
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

int main()
{
    struct Node *head = NULL;
    for(int i=1; i<=2; i++)
        insertData(i, &head);

    for(int i=3; i>=1; i--)
        insertData(i, &head);

    printList(head);
    checkPalindrome(head);
    return 0;
}


