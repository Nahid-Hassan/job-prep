#include <bits/stdc++.h>
using namespace std;

// create linked list node
// it contains data part and one struct node type pointer.
struct node {
	int data;
	struct node* next;
};



int main() {

	struct node *head;
	struct node *one = NULL;
	struct node *two = NULL;
	struct node *three = NULL;

	one = (struct node*) malloc( sizeof (struct node));
	two = (struct node*) malloc( sizeof (struct node));
	three = (struct node*) malloc( sizeof (struct node));

	one->data = 1;
	two->data = 2;
	three->data = 3;

	one->next = two;
	two->next = three;
	three->next = NULL;

	head = one;

	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}

	return 0;
}
