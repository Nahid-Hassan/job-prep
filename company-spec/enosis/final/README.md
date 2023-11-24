# Enosis: Leetcode Patterns

- [Enosis: Leetcode Patterns](#enosis-leetcode-patterns)
  - [217. Contains Duplicate **\[DONE\]**](#217-contains-duplicate-done)
  - [468. Validate IP Address **\[DONE\]**](#468-validate-ip-address-done)
  - [2299. Strong Password Checker II **\[DONE\]**](#2299-strong-password-checker-ii-done)
  - [68. Text Justification **\[NEED Help\]**](#68-text-justification-need-help)
  - [1010. Pairs of Songs With Total Durations Divisible by 60 **\[DONE - Tricky One\]**](#1010-pairs-of-songs-with-total-durations-divisible-by-60-done---tricky-one)
  - [394. Decode String](#394-decode-string)


## 217. Contains Duplicate **[DONE]**

https://leetcode.com/problems/contains-duplicate/

```text
Given an integer array nums, return true if any value appears at least twice in the array, 
and return false if every element is distinct.

 

Example 1:

    Input: nums = [1,2,3,1]
    Output: true

Example 2:

    Input: nums = [1,2,3,4]
    Output: false

Example 3:

    Input: nums = [1,1,1,3,3,4,3,2,4,2]
    Output: true
```

```c++
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> mp;
        
        for (auto num : nums) {
            if (mp[num]) {
                return true;
            }
            mp[num] = true;
        }
        return false;
    }
};
```

## 468. Validate IP Address **[DONE]**

https://leetcode.com/problems/validate-ip-address/

```text
Given a string queryIP, return "IPv4" if IP is a valid IPv4 address, "IPv6" if IP is a valid IPv6 address 
or "Neither" if IP is not a correct IP of any type.

A valid IPv4 address is an IP in the form "x1.x2.x3.x4" where 0 <= xi <= 255 and xi cannot contain 
leading zeros. For example, "192.168.1.1" and "192.168.1.0" are valid IPv4 addresses 
while "192.168.01.1", "192.168.1.00", and "192.168@1.1" are invalid IPv4 addresses.

A valid IPv6 address is an IP in the form "x1:x2:x3:x4:x5:x6:x7:x8" where:

    * 1 <= xi.length <= 4
    * xi is a hexadecimal string which may contain digits, lowercase English letter ('a' to 'f') and 
      upper-case English letters ('A' to 'F').
    * Leading zeros are allowed in xi.

For example, "2001:0db8:85a3:0000:0000:8a2e:0370:7334" and "2001:db8:85a3:0:0:8A2E:0370:7334" 
are valid IPv6 addresses, while "2001:0db8:85a3::8A2E:037j:7334" and 
"02001:0db8:85a3:0000:0000:8a2e:0370:7334" are invalid IPv6 addresses.


Example 1:

    Input: queryIP = "172.16.254.1"
    Output: "IPv4"
    Explanation: This is a valid IPv4 address, return "IPv4".

Example 2:

    Input: queryIP = "2001:0db8:85a3:0:0:8A2E:0370:7334"
    Output: "IPv6"
    Explanation: This is a valid IPv6 address, return "IPv6".

Example 3:

    Input: queryIP = "256.256.256.256"
    Output: "Neither"
    Explanation: This is neither a IPv4 address nor a IPv6 address.
```

```c++
class Solution {
public:
    string validIPAddress(string q) {
        return ipv4(q) ? "IPv4" : (ipv6(q) ? "IPv6" : "Neither");
    }
    
    bool ipv4(string q) {
        if (count(q.begin(), q.end(), '.') != 3) {
            return false;
        }
        vector<string> parts = split(q, '.');
        if (parts.size() != 4) {
            return false;
        }
        for (auto part : parts) {
            if (part.empty() or part.size() > 3 or (part.size() > 1 and part[0] == '0')) {
                return false;
            }
            
            for (char c : part) {
                if (!isdigit(c)) {
                    return false;
                }
            }
            if (stoi(part) > 255) {
                return false;
            }
        }
        
        return true;
    }
    
    bool ipv6(string q) {
        if (count(q.begin(), q.end(), ':') != 7) {
            return false;
        }
        
        vector<string> parts = split(q, ':');
        
        if (parts.size() != 8) {
            return false;
        }
        
        for (auto part : parts) {
            if (part.empty() or part.size() > 4) {
                return false;
            }
            
            for (auto c : part) {
                if (!isdigit(c) and (!isalpha(c) or toupper(c) > 'F')) {
                    return false;
                }
            }
            
        }
        
        return true;
    }
    
    vector<string> split(string q, char c) {
        vector<string> parts;
        
        string part;
        istringstream in(q);
        
        while (getline(in, part, c)) {
            parts.push_back(part);
        }
        
        return parts;
    }
};
```

## 2299. Strong Password Checker II **[DONE]**

https://leetcode.com/problems/strong-password-checker-ii/

```text
A password is said to be strong if it satisfies all the following criteria:

    * It has at least 8 characters.
    * It contains at least one lowercase letter.
    * It contains at least one uppercase letter.
    * It contains at least one digit.
    * It contains at least one special character. The special characters are the characters in the 
    following string: "!@#$%^&*()-+".
    * It does not contain 2 of the same character in adjacent positions 
    (i.e., "aab" violates this condition, but "aba" does not).

Given a string password, return true if it is a strong password. Otherwise, return false.

Example 1:

    Input: password = "IloveLe3tcode!"
    Output: true
    Explanation: The password meets all the requirements. Therefore, we return true.

Example 2:

    Input: password = "Me+You--IsMyDream"
    Output: false
    Explanation: The password does not contain a digit and also contains 2 of the same character in 
    adjacent positions. Therefore, we return false.

Example 3:

    Input: password = "1aB!"
    Output: false
    Explanation: The password does not meet the length requirement. Therefore, we return false.
```

```c++
class Solution {
public:
    bool isSpecial(char c) {
        if (c == '!' or c == '@' or c == '#' or c == '$' or c == '%' or c == '^' or c == '&' or c == '*' or c == '(' or c == ')' or c == '+' or c == '-') {
            return true;
        } else {
            return false;
        }
    }
    
    bool isLower(char c) {
        return c >= 'a' and c <= 'z';
    }
    
    bool strongPasswordCheckerII(string p) {
        if (p.size() < 8) return false;
        
        bool ol, ou, od, os;
        ol = ou = od = os = false;
        
        char prev_char = p[0];
        if (isSpecial(prev_char)) os = true;
        else if(isdigit(prev_char)) od = true;
        else if (isalpha(prev_char)) {
            if (islower(prev_char)) ol = true;
            else ou = true;
        }
        for (int i = 1; i < p.size(); i++) {
            if (prev_char == p[i]) {
                return false;
            } else {
                prev_char = p[i];
            }
            
            if (isSpecial(p[i])) os = true;
            else if (isdigit(p[i])) od = true;
            else if (isalpha(p[i])) {
                if (islower(p[i])) ol = true;
                else ou = true;
            }
        }
        
        return ou and od and ol and os;
    }
};
```

## 68. Text Justification **[NEED Help]**

https://leetcode.com/problems/text-justification/

## 1010. Pairs of Songs With Total Durations Divisible by 60 **[DONE - Tricky One]**

https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/

```text
You are given a list of songs where the ith song has a duration of time[i] seconds.

Return the number of pairs of songs for which their total duration in seconds is divisible by 60. 
Formally, we want the number of indices i, j such that i < j with (time[i] + time[j]) % 60 == 0.

 

Example 1:

    Input: time = [30,20,150,100,40]
    Output: 3
    Explanation: Three pairs have a total duration divisible by 60:
    (time[0] = 30, time[2] = 150): total duration 180
    (time[1] = 20, time[3] = 100): total duration 120
    (time[1] = 20, time[4] = 40): total duration 60

Example 2:

    Input: time = [60,60,60]
    Output: 3
    Explanation: All three pairs have a total duration of 120, which is divisible by 60.
```

```c++
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count = 0;
        vector<int> freq(60, 0);
     
        for (auto t : time) {
            int rem = t % 60;
            
            if (rem == 0) count += freq[rem];
            else count += freq[60 - rem];
            
            freq[rem]++;
        }
        
        return count;
    }
};
```

## 394. Decode String 

https://leetcode.com/problems/decode-string/