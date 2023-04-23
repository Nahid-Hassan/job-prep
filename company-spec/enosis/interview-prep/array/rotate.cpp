#include <iostream>
#include <vector>
using namespace std;

void _rev(vector<int> &temp, int start, int end) {
    while (start < end) {
        swap(temp[start++], temp[end--]);
    }
}

int main() {
    vector<int> data{1, 2, 3, 4, 5};  // left rotation by 2 = {3,4,5,1,2};
    int k = 2;
    _rev(data, 0, k - 1);
    _rev(data, k, data.size() - 1);
    _rev(data, 0, data.size() - 1);

    for (auto num : data) cout << num << " ";
    cout << endl;

    vector<int> nums{1, 2, 3, 4, 5};  // right rotation by 2 = {4,5,1,2,3};
    
    _rev(nums, 0, nums.size() - k - 1);
    _rev(nums, nums.size() - k, nums.size() - 1);
    _rev(nums, 0, nums.size() - 1);

    for (auto num : nums) cout << num << " ";
    cout << endl;
}