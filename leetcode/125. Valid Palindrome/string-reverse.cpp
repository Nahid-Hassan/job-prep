class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                if (s[i] >= 'A' and s[i] <= 'Z') {
                    ans += s[i] + 32;
                    continue;
                }
                ans += s[i];
            }
        }
        string temp = ans;
        reverse(temp.begin(), temp.end());
        return temp == ans;
    }
};