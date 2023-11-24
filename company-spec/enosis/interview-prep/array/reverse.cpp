#include <bits/stdc++.h>
using namespace std;

void _reverse(vector<int> &elems) {
    int left = 0;
    int right = elems.size() - 1;

    while (left < right) {
        swap(elems[left], elems[right]);
        left++;
        right--;
    }
    return;
}

int main() {
    vector<int> odd{1, 2, 3};
    vector<int> even{1, 2, 3, 4};

    _reverse(odd);
    for (auto num : odd) cout << num << " ";
    cout << endl;

    _reverse(even);
    for (auto num : even) cout << num << " ";
    cout << endl;
    
}