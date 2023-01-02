class Solution {
public:
    bool detectCapitalUse(string word) {
        int cc = 0;
        int pos = -1;
        
        for (int i = 0; i < word.size(); i++) {
            if (word[i] >= 65 and word[i] <= 90) {
                cc++;
                pos = i;
            }
        }
        
        return cc == word.size() || cc == 0 || (cc == 1 and pos == 0) ? true : false;
    }
};