class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        ios::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        
        int n = arr.size();
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j and arr[i] * 2 == arr[j]) return true;
            }
        }
        
        return false;
    }
};