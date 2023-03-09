class Solution {
public:
    vector<int> utility(vector<int> &nums) {
        int mx = 0;
        int total = 0;
        
        for (auto num : nums) {
            total += num;
            mx = max(mx, num);
        }
        
        return {mx, total};
    }
    
    bool feasible(int threshold, vector<int> &nums, int k) {
        int count = 1;
        int total = 0;
        
        for (auto num : nums) {
            total += num;
            
            if (total > threshold) {
                count++;
                total = num;
                
                if (count > k) return false;
            }
        }
        return true;
    }
    
    int splitArray(vector<int>& nums, int k) {
        vector<int> temp = utility(nums);
        int left = temp[0], right = temp[1];
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (feasible(mid, nums, k)) right = mid;
            else left = mid + 1;
        }
        
        return left;
    }
};