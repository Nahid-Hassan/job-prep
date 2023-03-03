# Problems For Mock Test

- [Problems For Mock Test](#problems-for-mock-test)
  - [Date: Mar 1, 2023 - Happy by Nahid](#date-mar-1-2023---happy-by-nahid)


## Date: Mar 1, 2023 - Happy by Nahid

- Merge two sorted array!

```c++
void mergeTwoSortedArray(int arr1[], int n1, int arr2[], int n2) {
    int mergedArray[n1 + n2];

    int ar1p = 0;
    int ar2p = 0;
    for (int i = 0; i < n1 + n2; i++) {
        if ((ar1p < n1 and ar2p < n2 and arr1[ar1p] <= arr2[ar2p]) or n2 >= ar2p) {
            mergedArray[i] = arr1[ar1p++];
        } else {
            mergedArray[i] = arr2[ar2p++];
        }
    }

    for (int i = 0; i < n1 + n2; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;
}
``` 

- Problem Link: https://leetcode.com/problems/merge-similar-items/

```c++
```


