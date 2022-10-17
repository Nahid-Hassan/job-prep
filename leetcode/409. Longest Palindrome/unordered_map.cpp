class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        for (char c : s) mp[c]++;
        
        int flag = 0;
        int len = 0;
        for (auto it : mp) {
            if (it.second % 2) {
                flag = 1;
                len += (it.second - 1);
            } else {
                len += it.second;
            }
        }
        return len + flag;
    }
};