1. **Contains Duplicate**: Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

   - Nested Loop : `nums[i] == nums[j]` and `i != j`
   - Sorting : `nums[i] == nums[i+1]`
   - Set : `nums.size() > set<int> (nums.begin(), nums.end()).size()`
   - Map : `mp[num] > 1` 
  
2. **Missing Number**: Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

    - Arithmetic Progression : `n * (n + 1) / 2 - total_sum_array`
    - Bit Manipulation:
        ```
        There are n numbers, 1 number in [0, n] is missing.
        For each existing number, its index and its value must appear twice. 
        Using bit XOR operator, we can find the number that only its index appears, 
        but its value does not appear.
        ```

        ```c++
        class Solution {
            public:
                int missingNumber(vector<int>& nums) {
                    int res = nums.size(); // as loop ends at i = nums.size() - 1
                    for (int i = 0; i < nums.size(); i++)
                        res ^= i ^ nums[i];
                    return res;
                }
        };
        ```
