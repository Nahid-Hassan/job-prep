# Templates

- [Templates](#templates)
  - [Two pointers](#two-pointers)
    - [one input, opposite ends](#one-input-opposite-ends)
    - [Two inputs, exhaust both](#two-inputs-exhaust-both)
  - [Sliding window](#sliding-window)
  - [Build a prefix sum](#build-a-prefix-sum)
  - [Efficient string building](#efficient-string-building)
  - [Linked list: fast and slow pointer](#linked-list-fast-and-slow-pointer)
  - [Reversing a linked list](#reversing-a-linked-list)
  - [Find number of subarrays that fit an exact criteria](#find-number-of-subarrays-that-fit-an-exact-criteria)
  - [Monotonic increasing stack](#monotonic-increasing-stack)
  - [Binary tree: DFS (recursive)](#binary-tree-dfs-recursive)


## Two pointers

### one input, opposite ends

```c++
int fn(vector<int>& arr) {
    int left = 0;
    int right = int(arr.size()) - 1;
    int ans = 0;

    while (left < right) {
        // do some logic here with left and right
        if (CONDITION) {
            left++;
        } else {
            right--;
        }
    }

    return ans;
}
```

### Two inputs, exhaust both

```c++
int fn(vector<int>& arr1, vector<int>& arr2) {
    int i = 0, j = 0, ans = 0;

    while (i < arr1.size() && j < arr2.size()) {
        // do some logic here
        if (CONDITION) {
            i++;
        } else {
            j++;
        }
    }

    while (i < arr1.size()) {
        // do logic
        i++;
    }

    while (j < arr2.size()) {
        // do logic
        j++;
    }

    return ans;
}
```

## Sliding window

```c++
int fn(vector<int>& arr) {
    int left = 0, ans = 0, curr = 0;

    for (int right = 0; right < arr.size(); right++) {
        // do logic here to add arr[right] to curr

        while (WINDOW_CONDITION_BROKEN) {
            // remove arr[left] from curr
            left++;
        }

        // update ans
    }

    return ans;
}
```

## Build a prefix sum

```c++
vector<int> fn(vector<int>& arr) {
    vector<int> prefix(arr.size());
    prefix[0] = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    return prefix;
}
```

## Efficient string building

```c++
string fn(vector<char>& arr) {
    return string(arr.begin(), arr.end())
}
```

## Linked list: fast and slow pointer

```c++
int fn(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    int ans = 0;

    while (fast != nullptr && fast->next != nullptr) {
        // do logic
        slow = slow->next;
        fast = fast->next->next;
    }

    return ans;
}
```

## Reversing a linked list

```c++
ListNode* fn(ListNode* head) {
    ListNode* curr = head;
    ListNode* prev = nullptr;
    while (curr != nullptr) {
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    return prev;
}
```

## Find number of subarrays that fit an exact criteria

```c++
int fn(vector<int>& arr, int k) {
    unordered_map<int, int> counts;
    counts[0] = 1;
    int ans = 0, curr = 0;

    for (int num: arr) {
        // do logic to change curr
        ans += counts[curr - k];
        counts[curr]++;
    }

    return ans;
}
```

## Monotonic increasing stack

```c++
int fn(vector<int>& arr) {
    stack<integer> stack;
    int ans = 0;

    for (int num: arr) {
        // for monotonic decreasing, just flip the > to <
        while (!stack.empty() && stack.top() > num) {
            // do logic
            stack.pop();
        }

        stack.push(num);
    }
}
```

## Binary tree: DFS (recursive)

```c++
int dfs(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }

    int ans = 0;
    // do logic
    dfs(root.left);
    dfs(root.right);
    return ans;
}
```

