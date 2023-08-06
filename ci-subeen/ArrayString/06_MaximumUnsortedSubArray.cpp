/**
 * for this problem return the index pair where it break the sorted
 * rules to where....!
 */
#include <bits/stdc++.h>
using namespace std;

// copy and sort the array and find where rules are break;
vector<int> maximumUnsortedSubArray(vector<int> nums) {
    vector<int> copy(nums.begin(), nums.end());
    sort(nums.begin(), nums.end());

    int start;
    int end;

    if (copy == nums)
        return {-1, -1};
    else {
        for (int i = 0; i < size(copy); i++) {
            if (copy[i] != nums[i]) {
                start = i;
                break;
            }
        }

        for (int i = copy.size() - 1; i >= 0; i--) {
            if (copy[i] != nums[i]) {
                end = i;
                break;
            }
        }
    }

    return {start, end};
}

vector<int> maximumUnsortedSubArrayFaster(vector<int> nums) {
    int start;
    int end;
    int n = nums.size();

    
}

int main() {
    vector<int> nums = {1, 3, 2, 4, 5};
    vector<int> ans = maximumUnsortedSubArrayFaster(nums);
    cout << ans[0] << " " << ans[1] << endl;
    nums = {5, 3, 2, 1};

    ans = maximumUnsortedSubArrayFaster(nums);
    cout << ans[0] << " " << ans[1] << endl;
}