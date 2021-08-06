/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* traverse(vector<int>& nums,int low,int high,int n)
    {
        if(high-low >= 0)
        {
            int mid = (low+high)/2;
            TreeNode* root = new TreeNode(nums[mid]);
            root->left = traverse(nums,low,mid-1,n);
            root->right = traverse(nums,mid+1,high,n);
            return root;
        }
        return NULL;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
        {
            return NULL;
        }
        int low = 0;
        int high = n-1;
        return traverse(nums,low,high,n);
    }
};