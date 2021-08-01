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
    void inorder(TreeNode* root,vector<int>& storeInorder)
    {
        if(root == NULL)
        {
            return;
        }
        inorder(root->left,storeInorder);
        storeInorder.push_back(root->val);
        inorder(root->right,storeInorder);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> storeInorder;
        inorder(root,storeInorder);
        return storeInorder[k-1];
    }
};