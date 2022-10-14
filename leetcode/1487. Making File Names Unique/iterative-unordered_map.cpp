class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        ios::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        
        vector<string> sol;
        unordered_map<string, int> mp;
        
        for (string name : names) {
            if (mp.find(name) != mp.end()) {
                int k = mp[name]; 
                while (mp.find(name + '(' + to_string(k) + ')') != mp.end()) {
                    k++;
                    mp[name]++;
                }
                sol.push_back(name + '(' + to_string(k) + ')');
                mp[name + '(' + to_string(k) + ')']++;
            } else {
                sol.push_back(name);
                mp[name]++;
            }
        }
        
        return sol;
    }
};