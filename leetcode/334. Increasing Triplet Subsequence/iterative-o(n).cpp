class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        int x = INT_MAX, y = INT_MAX;
        for (auto num : nums) {
            if (x > num) x = num;
            else if (x < num && y > num) y = num;
            else if (y < num) return true;
        }
        return false;
    }
};