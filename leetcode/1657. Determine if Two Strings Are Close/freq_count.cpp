class Solution {
public:
    bool closeStrings(string word1, string word2) {
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        
        vector<int> f1(26, 0);
        vector<int> f2(26, 0);
        set<char> s1, s2;
        
        if (word1.size() != word2.size()) return false;
        for (int i = 0; i < word1.size(); i++) {
            f1[word1[i] - 'a']++;
            s1.insert(word1[i]);
            
            f2[word2[i] - 'a']++;
            s2.insert(word2[i]);
        }
        
        sort(begin(f1), end(f1));
        sort(begin(f2), end(f2));
        
        return f1 == f2 and s1 == s2;
    }
};