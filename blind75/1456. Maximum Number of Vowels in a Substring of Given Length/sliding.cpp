class Solution {
public:
    int maxVowels(string s, int k) {
        int vowels[26] = {1,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0};
        
        int cnt = 0;
        int ret = INT_MIN;
        for (int i = 0; i < s.size(); i++) {
            cnt += vowels[s[i] - 'a'];
            
            if (i >= k) {
                cnt -= vowels[s[i-k] - 'a'];
            }
            
            ret = max(ret, cnt);
        }
        
        
        return ret;
    }
};