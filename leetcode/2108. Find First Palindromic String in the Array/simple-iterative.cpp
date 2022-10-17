class Solution {
public:
    bool ispalin(string s) {
        int l = 0;
        int r = s.size() - 1;
        
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        
        return true;
    }

    string firstPalindrome(vector<string>& words) {
        for (auto word : words) {
            if (ispalin(word)) {
                return word;
            }
        }    
        return "";
    }
};