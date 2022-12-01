class Solution {
public:
    bool isVowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
        return false;
    }
    bool halvesAreAlike(string s) {
        int count = 0;
        
        for (int i = 0; i < s.size(); i++) {
            char c = tolower(s[i]);
            if (i < s.size() / 2 && isVowel(c)) {
                count++;
            } else if (isVowel(c)){
                count--;
            }
        }
        
        return count == 0;
    }
};