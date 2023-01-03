class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, bool> mp;
        
        for (auto num : arr) {
            if (mp.find(num * 2) != mp.end() or ( num % 2 == 0 and mp.find(num / 2) != mp.end())) {
                return true;
            }
            mp[num] = true;
        }
        
        return false;
    }
};