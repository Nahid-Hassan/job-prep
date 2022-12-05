class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int total = 0;
        int prev = 0, cur;
        
        for (auto s : bank) {
            cur = count(s.begin(), s.end(), '1');
            
            if (cur) {
                total += (prev * cur);
                prev = cur;
            }
        }
        
       
        return total;
    }
};