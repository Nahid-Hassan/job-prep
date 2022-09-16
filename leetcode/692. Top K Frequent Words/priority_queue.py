class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        unordered_map<string, int> mp;        
        for (auto word: words) mp[word]++;
        
        struct cmp {
            bool operator()(pair<int, string> &a, pair<int, string> &b) {
                return a.first == b.first ? a.second < b.second : a.first > b.first;
            }
        };
        
        priority_queue<pair<int, string>, vector<pair<int, string>>, cmp> pq;
        for (auto it : mp) {
            pq.push({it.second, it.first});
            if (pq.size() > k) pq.pop();
        }
        
        vector<string> ans(k);
        while(k) {
            ans[--k] = pq.top().second;
            pq.pop();
        }
        return ans;
    }
};