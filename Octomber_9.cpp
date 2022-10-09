// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
// 653. Two Sum IV - Input is a BST
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
    bool dfs(TreeNode* root,unordered_map<int,int>&mp,int k){
        if(root == NULL){
            return false;
        }
        if(mp.count(k-root->val)){
            return true;
        }
        mp[root->val]++;
        return dfs(root->left,mp,k) || dfs(root->right,mp,k);
    }
    bool findTarget(TreeNode* root, int k) {
        unordered_map<int,int>mp;
        return dfs(root,mp,k);
    }
};
