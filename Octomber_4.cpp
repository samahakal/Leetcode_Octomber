// https://leetcode.com/problems/path-sum/description/
// 112. Path Sum
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
    bool dfs(TreeNode* root, int targetSum){

        // base case
        if(root == NULL){
            return false;
        }

        // sub
        targetSum -= root->val;
        
        
        if(root->left == NULL and root->right == NULL){
            return targetSum == 0;
        }

        // check for left and right child
        return dfs(root->left,targetSum) || dfs(root->right,targetSum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL){
            return false;
        }
        return dfs(root,targetSum);
    }
};
