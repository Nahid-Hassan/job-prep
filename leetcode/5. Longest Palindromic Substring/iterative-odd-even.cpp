class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        int mxlen = 0;
        
        for (int i = 0; i < s.size(); i++) {
            // odd length
            int left = i, right = i;
            while (left >= 0 and right < s.size() and s[left] == s[right]) {
                if (right - left + 1 > mxlen) {
                    mxlen = right - left + 1;
                    ans = s.substr(left, right - left + 1);
                }
                left--;
                right++;
            }                
            
            // even length
            left = i;
            right = i + 1;
            while (left >= 0 and right < s.size() and s[left] == s[right]) {
                if (right - left + 1 > mxlen) {
                    mxlen = right - left + 1;
                    ans = s.substr(left, right - left + 1);
                }
                left--;
                right++;
            }
        } 
        return ans;
    }
};