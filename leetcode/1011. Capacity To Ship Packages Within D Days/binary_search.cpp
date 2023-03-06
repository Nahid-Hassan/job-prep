class Solution {
public:
    vector<int> utility(vector<int> &weights) {
        int mx = 0;
        int total = 0;
        
        for (auto weight : weights) {
            mx = max(mx, weight);
            total += weight;
        }
        
        return {mx, total};
    }
    
    bool feasible(vector<int> &weights, int capacity, int D) {
        int days = 1;
        int total = 0;
        
        for (auto weight : weights) {
            total += weight;
            if (total > capacity) {
                total = weight;
                days += 1;
                if (days > D) return false;
            }
        }
        return true;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        vector<int> temp = utility(weights);
        int left = temp[0], right = temp[1];
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (feasible(weights, mid, days)) right = mid;
            else left = mid + 1;
        }
        return left;
    }
};