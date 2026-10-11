class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> values;
        inorder(root, values);

        TreeNode* dummy = new TreeNode(0);
        TreeNode* curr = dummy;

        for (int val : values) {
            curr->right = new TreeNode(val);
            curr = curr->right;
        }

        return dummy->right;
    }

    void inorder(TreeNode* root, vector<int>& values) {
        if (root == nullptr) {
            return;
        }

        inorder(root->left, values);
        values.push_back(root->val);
        inorder(root->right, values);
    }
};
