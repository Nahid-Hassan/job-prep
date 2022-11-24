# Leetcode Problem Solving Idea 

| Problem No | Problem Name                       | Solution Idea                                                                                                                                                                                                                                                  |
| :--------: | :--------------------------------- | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|     5      | Longest Palindromic Substring      | From center traverse left-- and right++, check both odd and even length palindrome.                                                                                                                                                                            |
|15| 3Sum|First solve leetcode `2Sum` and then `2Sum II`, then `3Sum` is the combination of both. [Solution-Code](https://github.com/Nahid-Hassan/job-prep/blob/main/leetcode/15.%203sum/neetcode.cpp)|
|     38     | Count and Say                      | `"1"`, `"11"`, `"21"`, `"1211"`, `"111221"`, `"312211"`                                                                                                                                                                                                        |
|    409     | Longest Palindrome                 | Count letter frequency, then sum up all even, for odd freq sum up like `(odd_value - 1)` and store `carry = 1`; if an only if odd freq letter found. return `len + carry`                                                                                      |
|    692     | Top K Frequent Words               | Count word frequency and then sort the map based on value. <pre>static bool cmp(pair<string, int> &a, pair<string, int> &b) { <br>    if (a.second == b.second) return a.first < b.first; <br>    else return a.second > b.second;<br>}</pre>                  |
|1323| Maximum 69 Number|Simply if you found any `6`, change it to `9` and immediate return it. `to_string()` and `stoi()`|
|1544| Make The String Great | Using `stack` or use `string` as a `stack` |
|    1636    | Sort Array by Increasing Frequency | Count frequency and then sort the map using following, <pre> static bool cmp(pair<int, int> &a, pair<int, int> &b) { <br>    if (a.second < b.second) return true;<br>    if (a.second == b.second) return a.first >= b.first;<br>    return false;<br>}</pre> |
|    2341    | Maximum Number of Pairs in Array   | `sort` and then compare with `i` and `i+1` index value and `count` the compare.                                                                                                                                                                                |
|2367| Number of Arithmetic Triplets|Place all the value in map and then check for every number `if(mp[num-diff] and mp[num+diff]) count++`.|
|2390| Removing Stars From a String| <pre>if (s[i] == '*') ans.pop_back(); <br>else ans += s[i];</pre>
|2418 | Sort the People| Mapping and reverse iterator | 


