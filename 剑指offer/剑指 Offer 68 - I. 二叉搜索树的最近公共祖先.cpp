// tree, recursion
// T=O(n)
// S=O(height of tree)

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
public:
  TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (root == nullptr) return root;
    if (p->val > q->val) swap(p, q);
    if (p->val<=root->val && root->val<=q->val) return root;
    else if (q->val < root->val) return lowestCommonAncestor(root->left, p, q);
    else return lowestCommonAncestor(root->right, p, q);
  }
};
