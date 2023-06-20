## Sorting

### Insertion Sort

```c++
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];    // assume already sorted this key

        int j = i - 1;
        // while 0 : i - 1 position, check if it greater than key 
        // shift arr[j + 1] = arr[j]
        // changed j to j = j - 1
        while (j >= 0 and arr[j] >= key) {
            arr[j + 1] = arr[j];
            j--;
        }
        // check unnecessary shifting
        if (j + 1 != i)
            arr[j + 1] = key;
    }
}
```

### Selection Sort

