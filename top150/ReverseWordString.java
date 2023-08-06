class Solution {
    public String reverseWords(String s) {
        String result = "";
        int n = s.length();
        
        int i = 0, j = 0;
        while (i < n) {
            while (i < n && s.charAt(i) == ' ') i++;
            if (i >= n) break;
            
            j = i + 1;
            while (j < n && s.charAt(j) != ' ') j++;
            
            String sub = s.substring(i, j);
            if (result.length() == 0) result = sub;
            else result = sub + " " + result;
            
            i = j + 1;
        }
        
        return result;
    }
}