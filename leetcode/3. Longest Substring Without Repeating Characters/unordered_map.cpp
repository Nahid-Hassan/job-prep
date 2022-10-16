class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        ios::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        
        if (s.size() <= 1) return s.size();
    
        unordered_map<char, int> mp;
        unsigned int ans = 0;
        int left = 0;
        for (int i = 0; i < s.size(); i++) {
            while(mp[s[i]])
                mp.erase(s[left++]);
            
            mp[s[i]]++;
            if (ans < mp.size()) {
                ans = mp.size();
            }
        }
        return ans;   
    }
};