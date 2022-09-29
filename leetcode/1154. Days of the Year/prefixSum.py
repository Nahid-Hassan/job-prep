class Solution:
    def dayOfYear(self, date: str) -> int:
        y, m, d = date.split('-')
        y, m, d = int(y), int(m), int(d)
        
        is_leap = 0
        ans = 0
        if (y % 400 == 0) or ( y % 100 != 0 and y % 4 == 0):
            is_leap = 1
        
        md = [31,28,31,30,31,30,31,31,30,31,30,31]
        pd = []
        pd.append(md[0])
        
        for i in range(1,12):
            pd.append(pd[i-1] + md[i])
        
        
        if (m < 2):
            ans += d
        else:
            ans += pd[m-2] + d
        
        
        if m > 2:
            ans += is_leap
        
        return ans;