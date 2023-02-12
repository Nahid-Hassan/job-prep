/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int ans = 0;
    bool number = true;
    bool lower_case = true;
    bool upper_case = true;
    bool special = true;
    
    for (char c : password) {
        if (isdigit(c)) number = false;
        else if (c >= 'a' and c <= 'z') lower_case = false;
        else if (c >= 'A' and c <= 'Z') upper_case = false;
        else special = false;
    }
    
    ans = number + lower_case + upper_case + special;
    return max(6 - n, ans);  
}