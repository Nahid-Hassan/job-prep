# Solutions for ShareTrip 

- [Solutions for ShareTrip](#solutions-for-sharetrip)
  - [Important](#important)
    - [Difference between Linked List and Array](#difference-between-linked-list-and-array)
  - [Average Important](#average-important)


## Important

### Difference between Linked List and Array

| Linked List                                  | Array                                  |
|---------------------------------------------|----------------------------------------|
| Data Structure                              | Data Structure                         |
| Linked List is a linear data structure where each element is a separate object called a node. Each node contains two parts: the data and a reference (link) to the next node in the sequence. | Array is a fixed-size data structure that stores elements of the same type sequentially in memory. |
| Memory Allocation                           | Memory Allocation                      |
| Linked List dynamically allocates memory for each node when it is created. Nodes can be scattered in different locations in memory, and the size of the linked list can grow or shrink during runtime. | Array is a static data structure where memory is allocated for all elements contiguously. The size of the array is determined at the time of declaration and remains fixed. |
| Insertion/Deletion                          | Insertion/Deletion                     |
| Insertion and deletion operations can be performed at any position in a linked list by adjusting the references (links) between nodes. These operations generally have a time complexity of O(1) if performed at the beginning or end of the list, but can be O(n) for operations in the middle, as it requires traversing the list to find the desired position. | Insertion and deletion operations in an array can be expensive, especially if they are performed at the beginning or in the middle. Elements may need to be shifted to accommodate the change, resulting in a time complexity of O(n). However, insertion and deletion at the end of the array have a time complexity of O(1). |
| Random Access                               | Random Access                          |
| Linked lists do not support direct access to elements by index. To access a specific element, the list needs to be traversed from the beginning until the desired element is reached, resulting in a time complexity of O(n). | Arrays support direct access to elements using an index. Accessing elements by index is very efficient with a time complexity of O(1). |
| Memory Overhead                             | Memory Overhead                        |
| Linked lists have a memory overhead compared to arrays. Each node in the linked list requires additional memory to store the reference (link) to the next node. | Arrays do not have any memory overhead. They only require memory to store the elements themselves. |
| Dynamic Size                                | Fixed Size                             |
| Linked lists can easily grow or shrink in size during runtime by adding or removing nodes. The size is not fixed, and it can adapt to the data dynamically. | Arrays have a fixed size that needs to be defined in advance. If more elements need to be stored than the capacity of the array allows, it must be resized, which may involve creating a new array and copying the elements, resulting in additional time complexity. |
| Implementation Complexity                    | Implementation Complexity               |
| Implementing a linked list can be more complex compared to an array, as it requires managing the references between nodes and handling dynamic memory allocation. | Implementing an array is relatively simpler, as it only requires defining the size and accessing elements using indices. |
| Usage Scenarios                             | Usage Scenarios                        |
| Linked lists are commonly used when the size of the data is not known in advance or needs to be modified frequently. They are suitable for scenarios where efficient insertion and deletion operations are required, but random access is not crucial. Examples include implementing stacks, queues, and certain graph algorithms. | Arrays are suitable when the size of the data is fixed or known in advance. They are efficient for random access, require less memory overhead, and are generally faster for accessing elements. Arrays are commonly used for storing and manipulating data in various algorithms and data structures. |

## Average Important