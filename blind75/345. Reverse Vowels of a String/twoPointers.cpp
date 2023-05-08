auto fast = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' or c == 'A' or c == 'e' or c == 'E' or c == 'i' or c == 'I' or c == 'o' or c == 'O' or c == 'u' or c == 'U';
    }
    
    string reverseVowels(string s) {
        int left(0), right(size(s) - 1);
        
        while (left < right) {
            if (isVowel(s[left]) and isVowel(s[right])) {
                swap(s[right], s[left]);
                left++; 
                right--;
            } else if (!isVowel(s[left])) {
                left++;
            } else if (!isVowel(s[right])) {
                right--;
            }
        }
        
        return s;
    }
};