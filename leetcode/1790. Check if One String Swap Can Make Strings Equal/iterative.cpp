class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int count = 0;
        int idx[2] = {0,0};
        int j = 0;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) {
                count++;
                if (count > 2) return false;
                idx[j] = i;
                j++;
            }
        }
        // cout << idx[0] << " " << idx[1] << endl;
        swap(s1[idx[0]], s1[idx[1]]);
        return s1 == s2;
    }
};