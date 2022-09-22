class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        ios::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        priority_queue<pair<int, int>> pq;

        for (int i = 0; i < score.size(); i++) {
            pq.push({score[i], i});
        }
        int count = 1;
        vector<string> sol(score.size(), "");

        while(!pq.empty()) {
            if (count == 1) {
                sol[pq.top().second] = "Gold Medal";
            } else if (count == 2) {
                sol[pq.top().second] = "Silver Medal";
            } else if (count == 3) {
                sol[pq.top().second] = "Bronze Medal";
            } else {
                sol[pq.top().second] = to_string(count);
            }
            count++;
            pq.pop();
        }

        return sol;
    }
};
