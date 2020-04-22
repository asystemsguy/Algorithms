/*
 * @lc app=leetcode id=979 lang=cpp
 *
 * [979] Distribute Coins in Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    int count_moves = 0;
public:
    int dfs(TreeNode* root) {
        if (root == nullptr)
        {
            return 0;
        }
        else
        {
            //coins number of coins it got from its children
            int left_coins = dfs(root->left);
            int right_coins = dfs(root->right);
            this->count_moves += abs(left_coins) + abs(right_coins);
            return left_coins+right_coins+root->val-1;
        }
    }
    int distributeCoins(TreeNode* root) {
        this->count_moves = 0;
        if (dfs(root) != 0)
        {
            cout<<"wrong solution"<<endl;
        }
        return this->count_moves;
    }
};
// @lc code=end

