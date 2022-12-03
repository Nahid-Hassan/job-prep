class Solution {
public:
    int percentageLetter(string s, char letter) {
        ios::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        
        int count = 0;
        for (char c : s) {
            if (letter == c) {
                count++;
            }
        }
        
        return (count * 100) / s.size();
    }
};