#include <bits/stdc++.h>
using namespace std;

int maximumSumContiguousArray(vector<int>& array) {
    /**
     * @param array
     * @return ans
     * @brief start ans = INT_MIN and sum = 0;
     * iterate over the array, sum += val if ans < sum update ans = sum 
     * if any time sum less than zero then make sum equal to zero.
    */
    int ans = INT_MIN;
    int sum = 0;

    for (int& val : array) {
        sum += val;
        if (ans < sum) ans = sum;
        if (sum < 0) sum = 0;
    }

    return ans;
}

int main(int argc, char* argv[]) {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    assert(maximumSumContiguousArray(nums) == 6);
    nums = {1};
    assert(maximumSumContiguousArray(nums) == 1);
    nums = {5, 4, -1, 7, 8};
    assert(maximumSumContiguousArray(nums) == 23);
    nums = {-1};
    assert(maximumSumContiguousArray(nums) == -1);

    cout << "Passed all the tests" << endl;
    return 0;
}