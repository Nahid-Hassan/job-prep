class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        ios::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        unordered_map<string, int> mp;
        for (int i = 0; i < list1.size(); i++) mp[list1[i]] = i;
        
        unordered_map<string, int> temp;
        int mn = INT_MAX;
        
        for (int i = 0; i < list2.size(); i++) {
            if (mp.find(list2[i]) != mp.end()) {
                int a = i + mp[list2[i]];
                temp[list2[i]] = a;
                mn = min(mn, a);
            }
        }
        
        vector<string> ans;
        for (auto it : temp) {
            if (it.second == mn) {
                ans.push_back(it.first);
            }
        }        
        
        return ans;
    }
};