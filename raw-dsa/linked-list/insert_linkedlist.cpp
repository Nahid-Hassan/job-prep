#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int data;
    struct ListNode *next;
    
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next): data(x), next(next) {}
};

void printLinkedList(ListNode* head) {
    while (head != NULL) {
        if (head->next != NULL)
            cout << head->data << "->";
        else
            cout << head->data << endl;
        
        head = head->next;
    }
}

int main() {
    vector<int> elements = {1,2,3,4,5,6,7};
    vector<int> empty;

    ListNode* head = NULL;
    ListNode* dummy;

    for (int i = 0; i < elements.size(); i++) {
        if (i == 0) {
            head = new ListNode(elements[i]);
            dummy = head;
        } else {
            dummy->next =new ListNode(elements[i]);
            dummy = dummy->next;
        }
    }
    printLinkedList(head);
}