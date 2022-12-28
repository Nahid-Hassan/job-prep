class Solution {
public:
    int halveArray(vector<int>& nums) {
        double total = 0;
        priority_queue<double> pq;
        
        for (auto it : nums) {
            total += it;
            pq.push(it);
        }
        
        total /= 2;
        double reduce = 0.0;
        int count = 0;
        while (total > reduce) {
            double t = pq.top();
            pq.pop();
            t /= 2;

            reduce += t;
            count++;
            
            pq.push(t);
        }
        
        return count;
    }
};