class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s;
        int n = nums.size();
        vector<int> nge(n,-1);
        for(int i = 2*n-1;  i >= 0;i--)
        {
            while(!s.empty() && s.top() <= nums[i%n])
            {
                s.pop();
            }
            
            if(i < n)
            {
                if(s.empty() == false)
                {
                    nge[i] = s.top();
                }
                else{
                    nge[i] = -1;
                }
            }
            
            s.push(nums[i%n]);

        }
        return nge;
    }
};