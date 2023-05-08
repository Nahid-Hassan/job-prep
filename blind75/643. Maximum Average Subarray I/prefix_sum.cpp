auto fast = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> psum(n, 0);
        
        psum[0] = nums[0];
        for (int i = 1; i < n; i++) {
            psum[i] += nums[i] + psum[i-1];
        }
        
        int i = 0;
        double mx = -DBL_MAX;
        while (i + k - 1 < n) {
            if (i != 0)
                mx = max(mx, (psum[i+k-1] - psum[i-1]) / (double) k);
            else
                mx = max(mx, (psum[k-1]) / (double) k);
            i++;
        }
        
        return mx;
    }
};