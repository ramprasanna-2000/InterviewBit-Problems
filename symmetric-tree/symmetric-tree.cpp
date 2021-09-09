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
    
    bool isSym(TreeNode* leftSide,TreeNode* rightSide)
    {
        if(leftSide == NULL || rightSide == NULL)
        {
            return leftSide == rightSide;
        }
        
        if(leftSide->val != rightSide->val)
        {
            return false;
        }
        
        return isSym(leftSide->left,rightSide->right) && isSym(leftSide->right,rightSide->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        return root==NULL || isSym(root->left,root->right);
    }
};