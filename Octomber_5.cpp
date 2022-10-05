// https://leetcode.com/problems/add-one-row-to-tree/description/
// 623. Add One Row to Tree

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
    void dfs(TreeNode* root,int val,int depth){
        if(root == NULL){
            return;
        }
        if(depth == 2){
            TreeNode* l = new TreeNode(val);
            TreeNode* r = new TreeNode(val);
            l->left = root->left;
            r->right = root->right;
            root->left = l;
            root->right = r;
            return;
        }

        dfs(root->left,val,depth-1);
        dfs(root->right,val,depth-1);

    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* l = new TreeNode(val);
            l->left = root;
            l->right = NULL;
            return l;
        }
        dfs(root,val,depth);
        return root;
    }
};
