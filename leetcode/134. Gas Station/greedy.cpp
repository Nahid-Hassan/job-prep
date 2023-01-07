// https://youtu.be/lJwbPZGo05A

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int s_gas = 0;
        int s_cost = 0;
        
        for (int i = 0; i < gas.size(); i++) {
            s_gas += gas[i];
            s_cost += cost[i];
        }
        
        if (s_gas < s_cost) return -1;
        
        int total = 0;
        int res = 0;
        
        for (int i = 0; i < gas.size(); i++) {
            total += gas[i] - cost[i];
            
            if (total < 0) {
                total = 0;
                res = i + 1;
            }
        }
        
        return res;
    }
};