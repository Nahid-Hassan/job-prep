class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> sol(pref.size());
        sol[0] = pref[0];
        for (int i = 1; i < pref.size(); i++) {
            sol[i] = pref[i] ^ pref[i-1];
        }
        return sol;
    }
};