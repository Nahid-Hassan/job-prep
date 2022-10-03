class Solution {
public:
    int longestMountain(vector<int>& a) {
        int mx(0), i(1), sz = size(a), inc(0), dec(0);
        
        while(i < sz) {
            inc = dec = 0;
            
            while (i < sz && a[i-1] < a[i]) i++, inc++;
            while (i < sz && a[i-1] > a[i]) i++, dec++;
            
            if (inc && dec) mx = max(mx, inc + dec + 1);
            while (i < sz && a[i-1] == a[i]) i++;
        }
        
        return mx;
    }
};