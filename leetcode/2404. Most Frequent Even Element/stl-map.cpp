class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        
        map <int, int> mp;
        mp.clear();
        
        int mx = -10;
        for (int num : nums) {
            if (num % 2 == 0) mp[num]++;
            
            if (mp.size() > 0) {
                mx = max(mp[num], mx);
            }
        }
        
        int ans;
        cout << mp.size() << endl;
        for (auto it : mp) {
            if (it.second == mx) {
                ans = it.first;
                break;
            }
        }
        
        return mp.size() == 0 ? -1 :  ans;
    }
};