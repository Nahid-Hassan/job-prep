class Solution
{
public:
    bool checkZeroOnes(string s)
    {
        int mo = 0, mz = 0;

        int count_one = 0;
        int count_zero = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                count_one++;
                mz = max(mz, count_zero);
                count_zero = 0;
            }
            else
            {
                count_zero++;
                mo = max(mo, count_one);
                count_one = 0;
            }
        }
        mo = max(mo, count_one);
        mz = max(mz, count_zero);

        return mo > mz;
    }
};
