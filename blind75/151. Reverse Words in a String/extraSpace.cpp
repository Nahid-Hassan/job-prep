class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        
        vector<string> vs;
        string str;
        while (ss >> str) vs.push_back(str);
        
        str = "";
        for (int i = vs.size() - 1; i >= 0; i--) {
            if (i > 0) {
                str += vs[i];
                str += " ";
            } else {
                str += vs[i];
            }
        }
        
        return str;
    }
};