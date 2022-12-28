class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        
        int total = 0;
        for (auto it : piles) {
            total += it;
            pq.push(it);
        }
        
        int remove = 0;
        while (k--) {
            int t = pq.top();
            pq.pop();
            int d = t / 2;
            remove += d;
            pq.push(t - d);
        }
        
        return total - remove;
    }
};