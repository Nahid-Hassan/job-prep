class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> vs;
        
        string ns;
        while(ss >> ns) {
            vs.push_back(ns);
        }
        ns = vs[vs.size() - 1];
        for (int i = vs.size() - 2; i >= 0; i--) {
            ns += " " + vs[i];
        }
        return ns;
    }
};