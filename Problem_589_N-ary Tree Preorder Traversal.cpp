class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> ans;

        if (root == nullptr) {
            return ans;
        }

        ans.push_back(root->val);

        for (Node* child : root->children) {
            vector<int> temp = preorder(child);
            for (int val : temp) {
                ans.push_back(val);
            }
        }

        return ans;
    }
};
