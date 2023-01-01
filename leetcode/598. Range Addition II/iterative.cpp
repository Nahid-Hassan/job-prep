class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int mr = 100000;
        int mc = 100000;
        
        for (int i = 0; i < ops.size(); i++) {
            if (mr > ops[i][0]) mr = ops[i][0]; 
            if (mc > ops[i][1]) mc = ops[i][1]; 
        }
        
        return ops.size() > 0 ? mr * mc : m * n;
    }
};