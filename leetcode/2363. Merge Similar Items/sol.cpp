class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> sol;
        map<int, int> mp1, mp2;
        
        for (auto num : items1) {
            mp1[num[0]] = num[1];
        }
        
        for (auto num : items2) {
            mp2[num[0]] = num[1];
        }
        
        auto it1 = mp1.begin();
        auto it2 = mp2.begin();
        
        while (it1 != mp1.end() and it2 != mp2.end()) {
            if (it1->first == it2->first) {
                sol.push_back({it1->first, it1->second + it2->second});
                it1++; it2++;
            } else if (it1->first < it2->first) {
                sol.push_back({it1->first, it1->second});
                it1++;
            } else {
                sol.push_back({it2->first, it2->second});
                it2++;
            }
        }
        
        while(it1 != mp1.end()) {
            sol.push_back({it1->first, it1->second});
            it1++;
        }
        
        while(it2 != mp2.end()) {
            sol.push_back({it2->first, it2->second});
            it2++;
        }
        
        return sol;
    }
};