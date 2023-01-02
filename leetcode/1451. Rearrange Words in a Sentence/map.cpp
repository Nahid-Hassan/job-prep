class Solution {
public:
    string arrangeWords(string text) {
        map<int, vector<string>> mp;

        text[0] += 32;
        istringstream is(text);
        
        string word, ans = "";
        while (is >> word) 
            mp[word.size()].push_back(word);
        
        int i = 0;
        for (auto it : mp) {
            for (auto m : it.second) {
                if (i == 0) {
                    ans += m;
                    i = 1;
                } else {
                    ans += " ";
                    ans += m;
                }
            }
        }
        
        ans[0] -= 32;
        return ans;
    }
};