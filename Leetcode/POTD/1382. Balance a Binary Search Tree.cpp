// Problem No:- 1382 Balance a Binary Search Tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root, vector<int> &nodes) {
        if (root == NULL) {
            return;
        }
        solve(root->left, nodes);
        nodes.push_back(root->val);
        solve(root->right, nodes);
    }
    TreeNode* makeBST(int l, int r, vector<int>& nodes) {
        if (l > r) {
            return NULL;
        }
        int mid = (l + r) / 2;
        TreeNode* root = new TreeNode(nodes[mid]);
        root->left = makeBST(l, mid - 1, nodes);
        root->right = makeBST(mid + 1, r, nodes);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> nodes;
        solve(root, nodes);
        return makeBST(0, nodes.size() - 1, nodes);
    }
};