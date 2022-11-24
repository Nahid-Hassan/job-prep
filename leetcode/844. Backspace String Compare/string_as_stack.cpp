class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1 = "";
        string s2 = "";
        
        for (int i = 0; i < s.size(); i++) {
            if (s1.size() == 0 and s[i] == '#') continue;
            else if (s1.size() > 0 and s[i] == '#') s1.pop_back();
            else s1 += s[i];
        }
        
        for (int i = 0; i < t.size(); i++) {
            if (s2.size() == 0 and t[i] == '#') continue;
            else if (s2.size() > 0 and t[i] == '#') s2.pop_back();
            else s2 += t[i];
        }
        
        cout << s1 << " " << s2 << endl;
        return s1 == s2;
    }
};