#include <bits/stdc++.h>
using namespace std;

int countTripletsNaive(vector<int> &arr, int sum) {
    int count = 0;
    int n = size(arr);

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if ((arr[i] + arr[j] + arr[k]) < sum) {
                    count++;
                }
            }
        }
    }    
    return count;
}

int countTripletsEfficient(vector<int> &arr, int target) {
    int count = 0;
    int n = size(arr);

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
        int j = i + 1, k = n - 1;

        while (j < k) {
            if (arr[i] + arr[j] + arr[k] >= target) {
                k--;
            } else {
                count += (k - j);
                j++;
            }
            cout << i << " " << j << " " << k << " " << arr[i] + arr[j] + arr[k] << endl;
        }
    }
    return count;
}

int main() {
    vector<int> arr = {-2, 0, 1, 3};
    assert(countTripletsNaive(arr, 2) == 2);
    assert(countTripletsEfficient(arr, 2) == 2);
}
