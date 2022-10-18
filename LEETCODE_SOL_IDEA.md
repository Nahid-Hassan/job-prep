# Leetcode Problem Solving Idea 

| Problem No | Problem Name                  | Solution Idea                                                                                                                                                             |
| :--------: | :---------------------------- | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
|     5      | Longest Palindromic Substring | From center traverse left-- and right++, check both odd and even length palindrome.                                                                                       |
|     38     | Count and Say                 | `"1"`, `"11"`, `"21"`, `"1211"`, `"111221"`, `"312211"`                                                                                                                   |
|    409     | Longest Palindrome            | Count letter frequency, then sum up all even, for odd freq sum up like `(odd_value - 1)` and store `carry = 1`; if an only if odd freq letter found. return `len + carry` |

