class Solution {
public:
    bool checkOnesSegment(string s) {
        int count = 0;
        // cout << string::npos << endl;
        // cout << s.find("11") << endl;
        return string::npos == s.find("01");
    }
};
