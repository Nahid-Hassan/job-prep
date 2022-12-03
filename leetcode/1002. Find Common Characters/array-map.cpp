class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        ios::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        
        vector<string> ans;
        unordered_map<char, int> mp;

        string temp, dummy = "";
        if (words.size() > 1) {
            temp = words[0];
            
            for (int i = 1; i < words.size(); i++) {
                int c_mp[26] = {0};
                for (char c : temp) c_mp[c - 'a']++;
                
                dummy = "";
                for (char c : words[i]) {
                    if (c_mp[c - 'a'] > 0) {
                        c_mp[c - 'a']--;
                        dummy += c;
                    }
                }
                temp = dummy;
                // mp.clear();
            }
            for (char c : dummy) {
                string s(1, c);
                ans.push_back(s);
            } 
        } else {
            for (char c : words[0]) {
                string s(1, c);
                ans.push_back(s);
            }
        }
        return ans;
    }
};