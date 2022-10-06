class Solution {
public:
    string reverseOnlyLetters(string s) {
        stack<char> rev;
        for (char c : s) {
            if (isalpha(c)) 
                rev.push(c);
        }
        for (int i = 0; i < s.size(); i++) {
            if (isalpha(s[i])) {
                s[i] = rev.top();
                rev.pop();
            }
        }
        
        return s;
    }
};