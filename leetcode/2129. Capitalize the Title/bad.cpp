class Solution {
public:
    string capitalizeTitle(string title) {
        istringstream is(title);
        string ans = "";
        string word;
        string temp;
        
        int i = 0;
        while (is >> word) {
            temp = "";
            if (word.size() <= 2) {
                for (char c : word) {
                    temp += tolower(c);
                }
            } else {
                int k = 0;
                for (char c : word) {
                    if (k == 0) { temp += toupper(c); k = 1; }
                    else temp += tolower(c);
                }
            }
            if (i == 0) {
                i = 1;
                ans += temp;
            } else {
                ans += " ";
                ans += temp;
            }

        }
        
        return ans;
    }
};