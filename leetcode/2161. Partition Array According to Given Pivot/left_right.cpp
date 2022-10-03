class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        ios::sync_with_stdio(NULL);
        cin.tie(0); cout.tie(0);
        
        vector<int> left;
        vector<int> right;
        
        int c = 0;
        for (auto num : nums) {
            if (num < pivot) left.push_back(num);
            else if (num > pivot) right.push_back(num);
            else c++;
        }
        
        for (int i = 0; i < c; i++) left.push_back(pivot);
        for (auto num : right) left.push_back(num);
        
        return left;
    }
};