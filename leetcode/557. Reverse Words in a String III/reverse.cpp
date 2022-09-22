class Solution {
public:
    string reverseWords(string s) {
        ios::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
//         stringstream ss(s);
//         string word, ans="";
//         bool flag = true;

//         while (ss >> word) {
//             reverse(word.begin(), word.end());

//             if (flag) {
//                 ans += word;
//                 flag = false;
//             } else {
//                 ans += " ";
//                 ans += word;
//             }
//         }

//         return ans;

        int i(0), j(0), n = size(s);

        for (; i <= n; i++) {
            if (s[i] == ' ' || s[i] == '\0') {
                reverse(s.begin() + j, s.begin() + i);
                j = i + 1;
            }
        }

        return s;
    }
};
