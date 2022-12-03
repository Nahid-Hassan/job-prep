class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int hash[100010]={0};
        int ans=-1,max_cnt=0;
        for(int i:nums){
            if(i%2==0){
                hash[i]++;
            }
            if(hash[i]>max_cnt||(hash[i]==max_cnt&&i<ans)){
                ans=i;
                max_cnt=hash[i];
            }
        }
        return ans;
        
    }
};