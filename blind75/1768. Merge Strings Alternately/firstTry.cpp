class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        
        int m(size(word1)), n(size(word2));
        
        int i;
        for (i = 0; i < min(m, n); i++) {
            merged += word1[i];
            merged += word2[i];
        }
        
        while (i < m) {
            merged += word1[i];
            i++;
        }
        
        while (i < n) {
            merged += word2[i];
            i++;
        }
        
        return merged;
    }
};