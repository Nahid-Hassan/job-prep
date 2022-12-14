## Linked List Techniques

- [Linked List Techniques](#linked-list-techniques)
  - [Linked List Structure](#linked-list-structure)
  - [Slow and Faster Pointer (Find the Middle of the Linked List)](#slow-and-faster-pointer-find-the-middle-of-the-linked-list)


### Linked List Structure

```c++
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
```

### Slow and Faster Pointer (Find the Middle of the Linked List)

```c++
ListNode *middleNode(ListNode *head) {
    ListNode *slow = head, *faster = head;

    while (faster and faster->next != NULL) {
        slow = slow->next;
        faster = faster->next->next;
    }
    return slow;
}
```
