class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> mp1, mp2;
        
        for (auto word : words1) mp1[word]++;
        for (auto word : words2) mp2[word]++;
        
        int count = 0;
        
        int n = words1.size();
        int m = words2.size();
        
        if (n < m) {
            for (int i = 0; i < n; i++) {
                if (mp1[words1[i]] == 1 and mp2[words1[i]] == 1) {
                    count++;
                }
            }
        } else {
            for (int i = 0; i < m; i++) {
                if (mp1[words2[i]] == 1 and mp2[words2[i]] == 1) {
                    count++;
                }
            }
        }
        
        return count;
    }
};