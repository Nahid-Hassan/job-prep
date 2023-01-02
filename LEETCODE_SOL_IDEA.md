# Leetcode Problem Solving Idea 

| Problem No | Problem Name                       | Solution Idea                                                                                                                                                                                                                                                  |
| :--------: | :--------------------------------- | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|     5      | Longest Palindromic Substring      | From center traverse left-- and right++, check both odd and even length palindrome.                                                                                                                                                                            |
|15| 3Sum|First solve leetcode `2Sum` and then `2Sum II`, then `3Sum` is the combination of both. [Solution-Code](https://github.com/Nahid-Hassan/job-prep/blob/main/leetcode/15.%203sum/neetcode.cpp)|
| 27 | Remove Element | <pre>if (nums[i] != val) {<br>  nums[k] = nums[i];<br>  k += 1;<br>}</pre>|
|     38     | Count and Say                      | `"1"`, `"11"`, `"21"`, `"1211"`, `"111221"`, `"312211"`                                                                                                                                                                                                        |
|55|Jump Game| Greedy Approach |
|124| Binary Tree Maximum Path Sum| Get `maxLeft` and `maxRight`, `res = max(res, mxLeft + mxRight + root->val)`| 
|200| Number of Islands| Just find the connected component numbers in grid (`dfs`)|
|205| Isomorphic Strings| Using two `unordered_map` and `indexing`|
|238| Product of Array Except Self|Idea - 1: Prefix sum and Postfix Sum `left - index - right`|
|290| Word Pattern| Using `unordered_map` and `indexing`|
|349| Intersection of Two Arrays| Same as `leetcode 350` - `mp[num] = 0` instead `mp[num]--` | 
|350| Intersection of Two Arrays II|`Frequency Counting`  using `unordered_map`. Ordering not needed.|
|    409     | Longest Palindrome                 | Count letter frequency, then sum up all even, for odd freq sum up like `(odd_value - 1)` and store `carry = 1`; if an only if odd freq letter found. return `len + carry`                                                                                      |
|520| Detect Capital|Count the capital character and check condition and return, be careful when `count == 1`|
|598| Range Addition II| find the `min_row` and `min_col` and return the `min_row * min_col` if ops size is zero return `m * n` |
|    692     | Top K Frequent Words               | Count word frequency and then sort the map based on value. <pre>static bool cmp(pair<string, int> &a, pair<string, int> &b) { <br>    if (a.second == b.second) return a.first < b.first; <br>    else return a.second > b.second;<br>}</pre>                  |
|695| Max Area of Island|Grid graph - Connected components, just maintain a global and local count, store max in global count or you can using real recursive solution technique <pre>if (x < 0 or y < 0 or x >= grid.size() or y >= grid[0].size() or !grid[x][y])<br>    return 0;<br>grid[x][y] = 0;<br>return 1 + dfs(x+1, y, grid) + dfs(x - 1, y, grid) + dfs(x, y + 1, grid) + dfs(x, y - 1, grid);</pre>|
|844| Backspace String Compare|<pre>if (s1.size() == 0 and s[i] == '#') continue;<br>else if (s1.size() > 0 and s[i] == '#') s1.pop_back();<br>else s1 += s[i];</pre>|
|872| Leaf-Similar Trees|Run and store on vector and simply return `left == right`|
|876| Middle of the Linked List| `Slow and Fast pointer` |
|977| Squares of a Sorted Array|Two pointers `left++`, `right--`|
|938| Range Sum of BST|Just Iterate the whole BST and check the range and sum it|
|1002| Find Common Characters| `C++ STL Map - Frequency Counting`|
|1323| Maximum 69 Number|Simply if you found any `6`, change it to `9` and immediate return it. `to_string()` and `stoi()`|
|1339| Maximum Product of Splitted Binary Tree| Get `total_sum` and then find the `max_prod` based on `sub_tree_sum`|
|1451| Rearrange Words in a Sentence| Using `map<int, vector<string>> mp`| 
|1544| Make The String Great | Using `stack` or use `string` as a `stack` |
|1619| Mean of Array After Removing Some Elements| `for (int i = sz / 20; i < sz - (sz / 20); i++`|
|    1636    | Sort Array by Increasing Frequency | Count frequency and then sort the map using following, <pre> static bool cmp(pair<int, int> &a, pair<int, int> &b) { <br>    if (a.second < b.second) return true;<br>    if (a.second == b.second) return a.first >= b.first;<br>    return false;<br>}</pre> |
|1657| Determine if Two Strings Are Close| Count the frequency and test character set|
|1704| Determine if String Halves Are Alike|Count `vowel` for first half `count++` for second half `count--` then `return count == 0`|
|1962| Remove Stones to Minimize the Total| Just using `priority_queue` and simple logic| 
|2085| Count Common Words With One Occurrence| Using `unordered_map` and `frequency count`|
|2125| Number of Laser Beams in a Bank| Count ones and calculate product. |
|2129| Capitalize the Title| Two pointers |
|2208| Minimum Operations to Halve Array Sum| Using `priority_queue` and check until `total / 2 > reduce`|
|2278 | Percentage of Letter in String| Just count the letter freq and return `freq * 100 / s.size()`|
|    2341    | Maximum Number of Pairs in Array   | `sort` and then compare with `i` and `i+1` index value and `count` the compare.                                                                                                                                                                                |
|2367| Number of Arithmetic Triplets|Place all the value in map and then check for every number `if(mp[num-diff] and mp[num+diff]) count++`.|
|2389| Longest Subsequence With Limited Sum|`Sort`, `prefix_sum` and `upper_bound`|
|2390| Removing Stars From a String| <pre>if (s[i] == '*') ans.pop_back(); <br>else ans += s[i];</pre>
|2404| Most Frequent Even Element| Count the even frequency and check the smallest one if for same frequency |
|2418 | Sort the People| Mapping and reverse iterator | 
|2520| Count the Digits That Divide a Number|Simple iterative `to_string` minimize the coding complexity.|
|2521| Distinct Prime Factors of Product of Array| Check individual number and store divisor into the set and return the size of the set|
|2522| Partition String Into Substrings With Values at Most K|`str.substr(start, count)`|