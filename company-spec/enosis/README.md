## Leetcode Revision

- [Leetcode Revision](#leetcode-revision)
  - [01 - Two Sum](#01---two-sum)
  - [02 - Add two numbers](#02---add-two-numbers)
  - [03 - Longest Substring without Repeating Characters](#03---longest-substring-without-repeating-characters)
  - [04 - Median of Two sorted Arrays](#04---median-of-two-sorted-arrays)


### 01 - Two Sum

```
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
```

**Solution Idea**:


```
Maintain a map, if you find anything already in map that is (target-nums[i]),

Return {i, mp[target-nums[i]]}
```

```c++
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        
        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(target - nums[i]) != mp.end()) {
                return {i, mp[target-nums[i]]};
            } 
            mp[nums[i]] = i;
        }
        return {};
    }
};
```

### 02 - Add two numbers

```
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

2->4->7
3->2
===============
5->6->7 

Idea: Using dummy array concept.
```

```c++
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* head = l1;
        ListNode* dummy = head;
        
        while(l1 || l2 || carry)  {
            if (l1) {
                carry += l1->val;
                l1 = l1->next;
            }
            
            if (l2) {
                carry += l2->val;
                l2 = l2->next;
            }
            
            dummy->next = new ListNode(carry % 10);
            dummy = dummy->next;
            carry /= 10;
        }
        return head->next;        
    }
};
```

### 03 - Longest Substring without Repeating Characters

```
Given a string s, find the length of the longest substring without repeating characters.

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Idea: Sliding window, answer is the maximum length of a window at anytime.
```

```c++
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        ios::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        
        if (s.size() <= 1) return s.size();
    
        unordered_map<char, int> mp;
        unsigned int ans = 0;
        
        int left = 0;
        
        for (int i = 0; i < s.size(); i++) {
            while(mp[s[i]])
                mp.erase(s[left++]);
            
            mp[s[i]]++;
            if (ans < mp.size()) {
                ans = mp.size();
            }
        }
        return ans;   
    }
};
```

### 04 - Median of Two sorted Arrays

```c++
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() + nums2.size();
        vector<int> nums(n);
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums.begin());
        
        return n % 2 == 0 ?
            (nums[n/2] + nums[n/2-1]) / 2.0 : nums[n/2] * 1.0;
        
    }
};
```

[Median of two Sorted Arrays](https://youtu.be/q6IEA26hvXc) 