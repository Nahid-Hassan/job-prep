# Array - Linear Data Structures

### সর্তকতা এবং টেকনিক 

1. Using **out-of-bound** of array indices.

```c++
int ar[5] = {1, 2, 3, 4, 5};
int sz = sizeof(ar) / sizeof(ar[0]);   // naive way 
int sz = sizeof(ar) / sizeof(int);     // better way 

// first check array boundary then try to access...
for (int i = 0; i < sz && ar[i] != 99; i++) {
    // write your code here...
}
```

2. 