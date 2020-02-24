#include "common_headers.h"

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
    int sum = 0;
public:
    void dfs(TreeNode *root,bool grand_parent_even,bool parent_even) {
        if(root == nullptr) 
        {
            return;
        }
        else 
        {
             // if grand parent is even add val to sum
            if (grand_parent_even)
            {
                sum = sum + root->val;
            }
            
            // if parent is even, then for child nodes make grand parent even 
            if (parent_even)
            {
                grand_parent_even = true;
            }
            else
            {
                grand_parent_even = false;
            }
            
            // if current is even, then for child nodes make parent even 
            if (root->val%2==0) {
                parent_even = true;
            } 
            else
            {
                parent_even = false;
            }
            
            dfs(root->left,grand_parent_even,parent_even);
            dfs(root->right,grand_parent_even,parent_even);
        }

    }
   int sumEvenGrandparent(TreeNode* root) {
          this->sum=0;
          dfs(root,false,false);
          return this->sum;
    }
};