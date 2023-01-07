class Solution {
public:
    string oddString(vector<string>& words) {
        ios::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        
        unordered_map<string, pair<string, int>> mp;
        string ans = "";
        
        for (auto word : words) {
            string s = "";
            for (int i = 1; i < word.size(); i++) {
                s += word[i] - word[i-1];
            }
            
            mp[s] = {word, mp[s].second + 1};
        }
        
        for (auto it : mp) {
            if (it.second.second == 1) { 
                ans = it.second.first; 
                break; 
            }
        }
        
        return ans;
    }
};