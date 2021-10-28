class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> lis(n);
        lis[0] = 1;
        for(int i = 1; i < n;i++)
        {
            lis[i] = 1;
            for(int j = 0 ; j < i;j++)
            {
                if(nums[j] < nums[i])
                {
                    lis[i] = max(lis[i],lis[j]+1);
                }
            }
        }
        
        int res = INT_MIN;
        for(int i = 0 ; i < n;i++)
        {
            if(lis[i] > res)
            {
                res = lis[i];
            }
        }
        
        return res;
    }
};