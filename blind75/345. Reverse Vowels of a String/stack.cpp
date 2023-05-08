class Solution {
public:
    bool isVowel(char c) {
        if (c == 'a' or c == 'A' or c == 'e' or c =='E' or c == 'i' or c == 'I' or c == 'o' or c == 'O' or c =='u' or c == 'U') {
            return true;
        }
        
        return false;
    }
    string reverseVowels(string s) {
        stack<char> sc;
        for (char c : s) {
            if (isVowel(c)) {
                sc.push(c);
            }
        }
        
        for (int i = 0; i < size(s); i++) {
            if (isVowel(s[i])) {
                s[i] = sc.top();
                sc.pop();
            }
        }
        
        return s;
    }
};