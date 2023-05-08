class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = INT_MIN;
        for (auto candie : candies) {
            mx = max(mx, candie);
        }
        int n = candies.size();
        vector<bool> ans(n, false);
        
        for (int i = 0; i < n; i++) {
            ans[i] = candies[i] + extraCandies >= mx;
        }
        
        return ans;
    }
};