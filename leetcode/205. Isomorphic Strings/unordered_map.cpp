class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> mp1, mp2;
        
        for (int i = 0; i < s.size(); i++) {
            if (mp1[s[i]] != mp2[t[i]]) return false;
            mp1[s[i]] = mp2[t[i]] = i + 1;
        }
        
        return true;
    }
};