class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i, j, m, n;
        i = j = m = n = 0;
        
        while (i < word1.size() && j < word2.size()) {
            if (word1[i][m++] != word2[j][n++]) return false;    
            if (m >= word1[i].size()) { i++; m = 0; }
            if (n >= word2[j].size()) { j++; n = 0; }
        }
        
        return i == word1.size() and j == word2.size();
    }
};