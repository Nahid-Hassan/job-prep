/* Program to insert in a sorted list */
#include <stdio.h>
#include <stdlib.h>

/* Link list node */
struct Node {
	int data;
	struct Node* next;
};

/* function to insert a new_node
in a list. Note that this
function expects a pointer
to head_ref as this can modify the
head of the input linked
list (similar to push())*/
void sortedInsert(struct Node** head_ref,
				struct Node* new_node)
{
	struct Node* current;
	/* Special case for the head end */
	if (*head_ref == NULL
		|| (*head_ref)->data
			>= new_node->data) {
		new_node->next = *head_ref;
		*head_ref = new_node;
	}
	else {
		/* Locate the node before
the point of insertion */
		current = *head_ref;
		while (current->next != NULL
			&& current->next->data < new_node->data) {
			current = current->next;
		}
		new_node->next = current->next;
		current->next = new_node;
	}
}

/* BELOW FUNCTIONS ARE JUST UTILITY TO TEST sortedInsert */

/* A utility function to create a new node */
struct Node* newNode(int new_data)
{
	/* allocate node */
	struct Node* new_node
= (struct Node*)malloc(
sizeof(struct Node));

	/* put in the data */
	new_node->data = new_data;
	new_node->next = NULL;

	return new_node;
}

/* Function to print linked list */
void printList(struct Node* head)
{
	struct Node* temp = head;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
}

/* Driver program to test count function*/
int main()
{
	/* Start with the empty list */
	struct Node* head = NULL;
	struct Node* new_node = newNode(5);
	sortedInsert(&head, new_node);
	new_node = newNode(10);
	sortedInsert(&head, new_node);
	new_node = newNode(7);
	sortedInsert(&head, new_node);
	new_node = newNode(3);
	sortedInsert(&head, new_node);
	new_node = newNode(1);
	sortedInsert(&head, new_node);
	new_node = newNode(9);
	sortedInsert(&head, new_node);
	printf("\n Created Linked List\n");
	printList(head);

	return 0;
}
