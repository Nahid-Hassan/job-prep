# Tips and Tricks

- [Tips and Tricks](#tips-and-tricks)
  - [Calculate Prefix Sum](#calculate-prefix-sum)


## Calculate Prefix Sum

```c++
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i-1];
        }
        
        return nums;
    }
};
```

