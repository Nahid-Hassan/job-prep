class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> pq;
        
        int ans;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                pq.push(matrix[i][j]);
                if (pq.size() > k) pq.pop();               
            }
        }
        
        return pq.top();
    }
};