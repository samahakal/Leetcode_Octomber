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
    bool bfs(TreeNode* root, int targetSum){

        // base case
        if(root == NULL){
            return false;
        }
        
        targetSum -= root->val;
        bool ans = false;
        cout<<targetSum<<" ";

        // check for left and right child
        if(root->left == NULL and root->right == NULL){
            return targetSum == 0;
        }
        if(root->left){
            ans = ans | bfs(root->left,targetSum);
        }
        if(root->right){
            ans = ans | bfs(root->right,targetSum);
        }
        return ans;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL){
            return false;
        }
        return bfs(root,targetSum);
    }
};
