class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n = arr.size();
        if(n == 0)
        {
            return 0;
        }
        int ans = arr[0];
        int max_ending = arr[0];
        int min_ending = arr[0];
        for(int i = 1 ; i < n;i++)
        {
            int temp = max_ending;
            max_ending = max(arr[i],max(arr[i] * temp,arr[i]*min_ending));
            min_ending = min(arr[i],min(arr[i] * temp,arr[i] * min_ending));
            if(ans < max_ending)
            {
                ans = max_ending;
            }
        }
        return ans;
    }
};
