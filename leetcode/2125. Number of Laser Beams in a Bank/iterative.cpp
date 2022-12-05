class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int total = 0;
        
        
        vector<int> dummy;
        for (int i = 0; i < bank.size(); i++) {
            int a = count(bank[i].begin(), bank[i].end(), '1');
            
            if (a > 0) {
                dummy.push_back(a);
            }
        }
        
        if (dummy.size() > 1) {
            for (int i = 1; i < dummy.size(); i++) {
                total += dummy[i-1] * dummy[i];
            }            
        }
        
        return total;
    }
};