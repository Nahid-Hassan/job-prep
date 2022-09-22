class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word, ans="";
        bool flag = true;

        while (ss >> word) {
            reverse(word.begin(), word.end());

            if (flag) {
                ans += word;
                flag = false;
            } else {
                ans += " ";
                ans += word;
            }
        }

        return ans;
    }
};
