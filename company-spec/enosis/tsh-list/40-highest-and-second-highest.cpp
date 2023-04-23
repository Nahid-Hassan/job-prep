#include <iostream>
#include <cmath>
#include <climits>
#include <vector>

using namespace std;

pair<int, int> solve(vector<int> &nums) {
    int highest = INT_MIN;
    int secondHighest = INT_MIN;

    for (auto num : nums) {
        if (num > highest) {
            secondHighest = highest;
            highest = num;
        } else if (num > secondHighest and highest != secondHighest) {
            secondHighest = num;
        }
    }

    return make_pair(highest, secondHighest);
}

int main() {
    vector<int> nums {1, 2, 3, 4};
    pair<int, int> ans = solve(nums); 
    cout << ans.first << " " << ans.second << endl;
}