class Solution {
public:
    string removeStars(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '*') ans.pop_back();
            else ans += s[i];
        }      
        
        return ans;
    }
};