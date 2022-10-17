class Solution {
public:
    bool isPalindrome(string s) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        int l = 0;
        int r = s.size() - 1;
        
        while (l < r) {
            if (!isalnum(s[l])) {
                l++;
                continue;
            } 
            if (!isalnum(s[r])) {
                r--;
                continue;
            }
            
            if (tolower(s[l]) != tolower(s[r])) return false;
            else {
                l++;
                r--;
            }
        }
        
        return true;
    }
};