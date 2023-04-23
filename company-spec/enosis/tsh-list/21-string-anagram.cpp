#include <iostream>
#include <string>
#include <unordered_map>

bool areAnagrams(const std::string& s1, const std::string& s2) {
    if (s1.size() != s2.size()) {
        return false;  // Anagrams must have the same length
    }
    std::unordered_map<char, int> freq;
    for (char c : s1) {
        ++freq[c];  // Count the frequency of each character in s1
    }
    for (char c : s2) {
        --freq[c];  // Subtract the frequency of each character in s2
        if (freq[c] < 0) {
            return false;  // s2 has a character that s1 doesn't have
        }
    }
    return true;
}

int main() {
    std::string s1, s2;
    std::cout << "Enter the first string: ";
    std::cin >> s1;
    std::cout << "Enter the second string: ";
    std::cin >> s2;
    if (areAnagrams(s1, s2)) {
        std::cout << "The strings are anagrams." << std::endl;
    }
}
