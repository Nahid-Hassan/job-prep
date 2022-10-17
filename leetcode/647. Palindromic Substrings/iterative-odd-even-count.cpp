// from center position move left and right while substr is a palindrome.
// then count++;

class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            int left = i;
            int right = i;
            
            while (left >= 0 and right < s.size() and s[left] == s[right]) {
                count++;
                left--;
                right++;
            }
            left = i;
            right = i + 1;
            
            while (left >= 0 and right < s.size() and s[left] == s[right]) {
                count++;
                left--;
                right++;
            }
        }
        
        return count;
    }
};