class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> sol;
        vector<int> temp;
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 and nums[i] == nums[i-1]) continue; // ignore same value
            if (nums[i] > 0) break; // you cannot sum up zero using positive number
            
            int l = i + 1;  // i != j and j != k and i != k
            int r = nums.size() - 1; // boundary
            
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                
                if (sum > 0) r--;            // sum > 0 means we need decrease right pointer
                else if (sum < 0) l++;       // sum < 0 means we need to increase left pointer 
                else {
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    sol.push_back(temp);
                    temp.clear();           // must clear the temporary vector   
                    l++;                    // left++
                    // ignore same value [-1,-1,-1,-1,-1,0,0,0,1,1,1,1,2,2,2]
                    while (l < r and nums[l] == nums[l-1]) l++; 
                }
            }
        }
        return sol;
    }
};