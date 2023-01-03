class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> s;
        for (auto num : nums) s.insert(num);
        
        while (s.find(original) != s.end()) {
            original <<= 1;
        }
        
        return original;
    }
};