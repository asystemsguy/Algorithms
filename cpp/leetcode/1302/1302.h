#include "common_headers.h"

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
    int sum=0;
    int highest_level=0;
public:
    void dfs(TreeNode *root,int level) {
         if (root == nullptr) {
             return;
         }
         else if (root->left == nullptr && root->right == nullptr)
         {
            // we found a leaf
            if (level > this->highest_level)
            {
                this->highest_level = level;
                this->sum = root->val;
            }
            else if (level == highest_level)
            {
                this->sum = this->sum + root->val;
            }
            return;
         }
         else
         {
             //if not leaf go to leaf
             dfs(root->left,level+1);
             dfs(root->right,level+1);
         }

    }
    int deepestLeavesSum(TreeNode* root) {
          this->sum = 0;
          this->highest_level = 0;
          dfs(root,0);
          return this->sum;  
    }
};