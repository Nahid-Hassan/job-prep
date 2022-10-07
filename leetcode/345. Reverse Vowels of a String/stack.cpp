class Solution {
public:
    bool isVowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') return true;
        return false;
    }
    string reverseVowels(string s) {
        stack<char> st;
        
        for (char c : s) {
            if (isVowel(c)) st.push(c);
        }
        
        for (int i = 0; i < s.size(); i++) {
            if (isVowel(s[i])) {
                s[i] = st.top();
                st.pop();
            }
        }
        
        return s;
    }
};