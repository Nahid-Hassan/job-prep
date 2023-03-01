class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int n(size(nums1));
        int m(size(nums2));
        
        vector<vector<int>> sol;
        
        int i = 0, j = 0;
        while (i < n and j < m) {
            if (nums1[i][0] == nums2[j][0]) {
                sol.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
                i++; j++;
            } else if (nums1[i][0] < nums2[j][0]) {
                sol.push_back({nums1[i][0], nums1[i][1]});
                i++;
            } else {
                sol.push_back({nums2[j][0], nums2[j][1]});
                j++;
            }
        }
        
        while (i < n) {
            sol.push_back({nums1[i][0], nums1[i][1]});
            i++;
        }
        
        while (j < m) {
            sol.push_back({nums2[j][0], nums2[j][1]});
            j++;    
        }
        
        return sol;
    }
};