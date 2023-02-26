#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int data;
    struct ListNode *next;
    
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next): data(x), next(next) {}
};

ListNode* insertInSortedWay(ListNode** head_ref, ListNode *dummy) {
    
}

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
    vector<int> elements = {7, 6, 1, 4, 2};
    vector<int> empty;

    ListNode *head = NULL;
    ListNode *dummy = NULL;

    for (int i = 0; i < elements.size(); i++) {
        if (head == NULL) {
            head = new ListNode(elements[i]);
            dummy = head;
        } else {

        }
    }

}