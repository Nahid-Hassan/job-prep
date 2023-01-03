// Linked list implementation in C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Creating a node
class Node
{
public:
    int value;
    Node *next;
};

int main()
{
    Node *head;
    Node *one = NULL;
    Node *two = NULL;
    Node *three = NULL;

    // allocate 3 nodes in the heap
    one = new Node();
    two = new Node();
    three = new Node();

    // Assign value values
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

    // print the linked list value
    head = one;


    // insert beginning
    Node *node = new Node();
    node->value = 0;
    node->next = head;
    head = node;

    // insert at the end
    Node *newNode = new Node();
    newNode->value = 4;
    newNode->next = NULL;

    Node* temp = head;
    
    temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = newNode;

    // insert into the middle
    Node *extra = new Node();
    extra->value = 7;

    temp = head;
    while (temp->next != NULL) {
        if (temp->value == 2) {
            break;
        }
        temp = temp->next;
    }

    extra->next = temp->next;
    temp->next = extra;

    temp = head;
    while (temp != NULL) {
        cout << temp->value << "--->";
        temp = temp->next;
    } cout << endl;

    
}