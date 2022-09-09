// solution and code idea: https://www.youtube.com/watch?v=2NGFucebfDk

class Solution {
public:
    string removeDuplicateLetters(string s) {
        int mp[26] = {0};
        bool seen[26] = {false};
        string ans = "";
        
        for (int i = 0; i < s.size(); i++) mp[s[i] - 'a'] = i;
        for (int i = 0; i < s.size(); i++) {
            if (seen[s[i] - 'a']) continue;
            
            while (!ans.empty() && ans.back() > s[i] && mp[ans.back() - 'a'] > i) {
                seen[ans.back() - 'a'] = false;
                ans.pop_back();
                
            }
            ans.push_back(s[i]);
            seen[s[i] - 'a'] = true;      
        }
        
        
        return ans;
    }
};