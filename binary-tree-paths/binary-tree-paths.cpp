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

    void traverse(TreeNode* root,vector<string>& res,string s)
    {
        if(root->left == NULL && root->right == NULL)
        {
            res.push_back(s);
            return;
        }
        
        if(root->left)
        {
            traverse(root->left,res,s + "->" + to_string(root->left->val));
        }
        if(root->right)
        {
            traverse(root->right,res,s + "->" + to_string(root->right->val));
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(root == NULL)
        {
            return res;
        }
        string s = to_string(root->val);
        traverse(root,res,s);
        return res;
    }
};