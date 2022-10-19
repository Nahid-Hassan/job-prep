class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string> mp;
        for (int i = 0; i < heights.size(); i++) {
            mp[heights[i]] = names[i];
        }
        vector<string> sol;
        map<int, string>::reverse_iterator it;
        for (it = mp.rbegin(); it != mp.rend(); it++) {
            sol.push_back(it->second);
        }
        
        return sol;
    }
};