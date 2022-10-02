class Solution
{
public:
    int numOfSubarrays(vector<int> &arr, int k, int threshold)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int count = 0;
        long long sum = 0;
        int i = 0;
        for (i = 0; i < k; i++)
        {
            sum += arr[i];
        }
        if (sum / k >= threshold)
            count++;

        for (; i < arr.size(); i++)
        {
            sum -= arr[i - k];
            sum += arr[i];

            if ((sum / k) >= threshold)
            {
                count++;
            }
        }
        return count;
    }
};