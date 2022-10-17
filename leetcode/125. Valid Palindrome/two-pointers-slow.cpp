class Solution {
public:
    bool isPalindrome(string s) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                ans += tolower(s[i]);
            }
        }
        int left = 0;
        int right = ans.size() - 1;
        
        while (left < right) {
            if (ans[left] != ans[right]) return false;
            left++;
            right--;
        }
        
        return true;
    }
};