class Solution {
public:
    int maxPower(string s) {
        int mx = 0;
        int count = 0;

        char ch = s[0];
        for (int i = 0; s[i]; i++) {
            if (ch == s[i]) count++;
            else {
                mx = max(mx, count);
                count = 1;
                ch = s[i];
            }
        }
        mx = max(count, mx);
        return mx;
    }
};
