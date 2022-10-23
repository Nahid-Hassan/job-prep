class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int arr[10005] = { 0 };

        for (int i = 1; i <= nums.size(); i++) {
            arr[nums[i-1]]++;
        }
        
        int a, b;
        for (int i = 1; i <= nums.size(); i++) {
            if (arr[i] == 0) a = i;
            if (arr[i] == 2) b = i;
        }
        
        return {b, a};
    }
};
