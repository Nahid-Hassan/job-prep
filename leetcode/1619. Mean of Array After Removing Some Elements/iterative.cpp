class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int count = 0;
        double total = 0.0;
        
        int sz = arr.size();
        for (int i = sz / 20; i < sz - (sz/20); i++) {
            count++;
            total += arr[i];
        }
        
        return total / count;
    }
};