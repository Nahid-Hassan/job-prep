#include <iostream>
#include <algorithm>
#include <vector>

void circularShift(std::vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    std::reverse(nums.begin(), nums.end());
    std::reverse(nums.begin(), nums.begin() + k);
    std::reverse(nums.begin() + k, nums.end());
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int k = 10;
    circularShift(nums, k);
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
