class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        ios::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        unordered_map<string, int> mp1, mp2;
        for (int i = 0; i < list1.size(); i++) mp1[list1[i]] = i;
        for (int i = 0; i < list2.size(); i++) mp2[list2[i]] = i;
        
        unordered_map<string, int> temp;
        int mn = INT_MAX;
        for (auto it : mp1) {
            if (mp2.find(it.first) != mp2.end()) {
                int a = it.second + mp2[it.first];
                mn = min(a, mn);
                temp[it.first] = a;
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