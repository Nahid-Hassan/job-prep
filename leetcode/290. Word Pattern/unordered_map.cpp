class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n = pattern.size(), i = 0;
        istringstream is(s);
        
        unordered_map<char, int> mp1;
        unordered_map<string, int> mp2;
        
        for (string word; is >> word; i++) {
            if (i == n || mp2[word] != mp1[pattern[i]]) return false;
            mp1[pattern[i]] = mp2[word] = i + 1;
        }
        
        return i == n;
    }
};