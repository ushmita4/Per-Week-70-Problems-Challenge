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
    bool isSameTree(TreeNode* p, TreeNode* q) {
         if(p==NULL and q!=NULL || p!=NULL && q==NULL)   // Sizes of the trees are not equal
             return false;
         if(p==NULL && q==NULL)          // Return true if we reach end of the tree
              return true;
         if(p->val!=q->val)       // If the value differs from each other then return false.
             return false;
        return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right));    // Recursion call to left and right of the tree.
        
    }
};
